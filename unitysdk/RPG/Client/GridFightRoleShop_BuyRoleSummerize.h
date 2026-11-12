#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JJDFGMMMCMI.h"
#include "unitysdk/RPG/Client/GridFightUpdateSummarizer.h"
class AOFOEOIJEHF;
class CDEAABODKCP;
class DDAMEHEPOBD;
class HONNGJEMGGH;
class MMEDLCAENAL;
namespace RPG::Client { class GridFightBonusResultData; }
namespace RPG::Client { class GridFightBonusSrcInfo; }
namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class GridFightShopSpecialGood; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define RPG_CLIENT_GRIDFIGHTROLESHOP_BUYROLESUMMERIZE_CTOR_OFFSET UNITYSDK_OFFSET(0xDC5D6E0)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_BUYROLESUMMERIZE_ISCONCERNEDWITH_OFFSET UNITYSDK_OFFSET(0xDC5BB20)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_BUYROLESUMMERIZE_UPDATEADDFORGE_OFFSET UNITYSDK_OFFSET(0xDC5D4E0)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_BUYROLESUMMERIZE_UPDATEADDITEM_OFFSET UNITYSDK_OFFSET(0xDC5D420)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_BUYROLESUMMERIZE_UPDATEADDROLE_OFFSET UNITYSDK_OFFSET(0xDC5D2A0)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_BUYROLESUMMERIZE_UPDATEAFTER_OFFSET UNITYSDK_OFFSET(0xDC5C4A0)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_BUYROLESUMMERIZE_UPDATEBEFORE_OFFSET UNITYSDK_OFFSET(0xDC5BB80)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_BUYROLESUMMERIZE_UPDATECOIN_OFFSET UNITYSDK_OFFSET(0xDC5D130)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_BUYROLESUMMERIZE_UPDATEDONE_OFFSET UNITYSDK_OFFSET(0xDC5D5A0)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_BUYROLESUMMERIZE_UPDATEITEM_OFFSET UNITYSDK_OFFSET(0xDC5D070)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_BUYROLESUMMERIZE_UPDATELEVELANDEXP_OFFSET UNITYSDK_OFFSET(0xDC5D1E0)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_BUYROLESUMMERIZE_UPDATEORB_OFFSET UNITYSDK_OFFSET(0xDC5D360)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_BUYROLESUMMERIZE_UPDATESHOP_OFFSET UNITYSDK_OFFSET(0xDC5CFB0)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_BUYROLESUMMERIZE__FINDAHATARGETROLE_OFFSET UNITYSDK_OFFSET(0xDC5CBC0)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_BUYROLESUMMERIZE__FINDBONUSSOURCEROLE_OFFSET UNITYSDK_OFFSET(0xDC5C610)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightRoleShop_BuyRoleSummerize_TypeDefinitionIndex = 66929;

	class GridFightRoleShop_BuyRoleSummerize : public ::RPG::Client::GridFightUpdateSummarizer
	{
	public:
		::RPG::Client::GridFightBonusResultData* _ResultData; // 0x10
		::RPG::Client::GridFightBonusSrcInfo* _SrcInfo; // 0x18
		::RPG::Client::GridFightShopSpecialGood* _BuySpecialGood; // 0x20
		::System::Boolean _HasActualBonus; // 0x28
		::System::Byte _padding0[0x3];
		::JJDFGMMMCMI _CurSrcType; // 0x2C
		// static const ::System::Object _CyreneRoleID; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_BUYROLESUMMERIZE_CTOR_OFFSET))(this);
		}

		::System::Boolean IsConcernedWith(::JJDFGMMMCMI a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JJDFGMMMCMI))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_BUYROLESUMMERIZE_ISCONCERNEDWITH_OFFSET))(this, a1);
		}

		::System::Void UpdateBefore(::JJDFGMMMCMI a1, ::System::Collections::Generic::IList_1<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::JJDFGMMMCMI, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_BUYROLESUMMERIZE_UPDATEBEFORE_OFFSET))(this, a1, a2);
		}

		::System::Void UpdateAfter(::JJDFGMMMCMI a1)
		{
			return ((::System::Void(*)(::PVOID, ::JJDFGMMMCMI))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_BUYROLESUMMERIZE_UPDATEAFTER_OFFSET))(this, a1);
		}

		static ::RPG::Client::GridFightRole* _FindBonusSourceRole()
		{
			return ((::RPG::Client::GridFightRole*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_BUYROLESUMMERIZE__FINDBONUSSOURCEROLE_OFFSET))();
		}

		static ::RPG::Client::GridFightRole* _FindAhaTargetRole()
		{
			return ((::RPG::Client::GridFightRole*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_BUYROLESUMMERIZE__FINDAHATARGETROLE_OFFSET))();
		}

		::System::Void UpdateShop(::HONNGJEMGGH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HONNGJEMGGH*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_BUYROLESUMMERIZE_UPDATESHOP_OFFSET))(this, a1);
		}

		::System::Void UpdateItem(::AOFOEOIJEHF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AOFOEOIJEHF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_BUYROLESUMMERIZE_UPDATEITEM_OFFSET))(this, a1);
		}

		::System::Void UpdateCoin(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_BUYROLESUMMERIZE_UPDATECOIN_OFFSET))(this, a1);
		}

		::System::Void UpdateLevelAndExp(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_BUYROLESUMMERIZE_UPDATELEVELANDEXP_OFFSET))(this, a1, a2);
		}

		::System::Void UpdateAddRole(::CDEAABODKCP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CDEAABODKCP*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_BUYROLESUMMERIZE_UPDATEADDROLE_OFFSET))(this, a1);
		}

		::System::Void UpdateOrb(::MMEDLCAENAL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MMEDLCAENAL*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_BUYROLESUMMERIZE_UPDATEORB_OFFSET))(this, a1);
		}

		::System::Void UpdateAddItem(::AOFOEOIJEHF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AOFOEOIJEHF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_BUYROLESUMMERIZE_UPDATEADDITEM_OFFSET))(this, a1);
		}

		::System::Void UpdateAddForge(::DDAMEHEPOBD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DDAMEHEPOBD*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_BUYROLESUMMERIZE_UPDATEADDFORGE_OFFSET))(this, a1);
		}

		::System::Void UpdateDone()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_BUYROLESUMMERIZE_UPDATEDONE_OFFSET))(this);
		}

	};
}
