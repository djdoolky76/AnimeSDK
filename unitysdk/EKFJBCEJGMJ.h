#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ExpeditionBattleFlowStateType.h"
#include "unitysdk/System/Object.h"
class CAFGGCCJPNI;
class IPGCLEABHPG;
class PPDGBIFKBAC;
namespace RPG::GameCore { class BaseExpeditionBattleAction; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EKFJBCEJGMJ_AFDHGANENPH_OFFSET UNITYSDK_OFFSET(0x15505590)
#define EKFJBCEJGMJ_AFKAFAPJLBB_OFFSET UNITYSDK_OFFSET(0x155051F0)
#define EKFJBCEJGMJ_CHAHBFGGIDL_OFFSET UNITYSDK_OFFSET(0x155051B0)
#define EKFJBCEJGMJ_CTOR_OFFSET UNITYSDK_OFFSET(0x15504850)
#define EKFJBCEJGMJ_GET_LEVELINDEX_OFFSET UNITYSDK_OFFSET(0x15504620)
#define EKFJBCEJGMJ_HBPEOAHNLML_OFFSET UNITYSDK_OFFSET(0x15505110)
#define EKFJBCEJGMJ_HDEJDHKBCPN_OFFSET UNITYSDK_OFFSET(0x155054C0)
#define EKFJBCEJGMJ_IJJMIMJMNBN_OFFSET UNITYSDK_OFFSET(0x15504630)
#define EKFJBCEJGMJ_JKOKFFCBJLJ_OFFSET UNITYSDK_OFFSET(0x155045D0)
#define EKFJBCEJGMJ_KAIEIIPIABO_OFFSET UNITYSDK_OFFSET(0x155049D0)
#define EKFJBCEJGMJ_KIGBILLGNOH_OFFSET UNITYSDK_OFFSET(0x15504970)
#define EKFJBCEJGMJ_KKFLLGJNEGJ_OFFSET UNITYSDK_OFFSET(0x155057F0)
#define EKFJBCEJGMJ_NODGHAGPOLF_OFFSET UNITYSDK_OFFSET(0x15505750)
#define EKFJBCEJGMJ_PGJKBACLIFO_OFFSET UNITYSDK_OFFSET(0x15505250)

inline static constexpr unsigned int EKFJBCEJGMJ_TypeDefinitionIndex = 63899;

	class EKFJBCEJGMJ : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::PPDGBIFKBAC*>* AOKHDNPGLBH; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* BMPNHAJFKMH; // 0x18
		::System::Collections::Generic::IReadOnlyList_1<::CAFGGCCJPNI*>* FBJPIMMIOIL; // 0x20
		::IPGCLEABHPG* DJEBMFEGCHN; // 0x28
		::System::Int32 MDEJNNFFOEH; // 0x30
		::System::UInt32 HKAHFHHICEN; // 0x34
		::System::UInt32 _LevelIndex_k__BackingField; // 0x38
		::System::Boolean LGCCKKDEONM; // 0x3C
		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2, ::IPGCLEABHPG* a3, ::System::Collections::Generic::IReadOnlyList_1<::CAFGGCCJPNI*>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::IPGCLEABHPG*, ::System::Collections::Generic::IReadOnlyList_1<::CAFGGCCJPNI*>*))((::PBYTE)hIl2Cpp + EKFJBCEJGMJ_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::RPG::GameCore::ExpeditionBattleFlowStateType JKOKFFCBJLJ()
		{
			return ((::RPG::GameCore::ExpeditionBattleFlowStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + EKFJBCEJGMJ_JKOKFFCBJLJ_OFFSET))(this);
		}

		::System::UInt32 get_LevelIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EKFJBCEJGMJ_GET_LEVELINDEX_OFFSET))(this);
		}

		::System::Boolean IJJMIMJMNBN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EKFJBCEJGMJ_IJJMIMJMNBN_OFFSET))(this);
		}

		::System::Void KIGBILLGNOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKFJBCEJGMJ_KIGBILLGNOH_OFFSET))(this);
		}

		::System::Void CHAHBFGGIDL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKFJBCEJGMJ_CHAHBFGGIDL_OFFSET))(this);
		}

		::System::Boolean AFKAFAPJLBB(::System::UInt32 a1, ::RPG::GameCore::BaseExpeditionBattleAction* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::BaseExpeditionBattleAction*))((::PBYTE)hIl2Cpp + EKFJBCEJGMJ_AFKAFAPJLBB_OFFSET))(this, a1, a2);
		}

		::System::Int32 PGJKBACLIFO(::System::Object* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EKFJBCEJGMJ_PGJKBACLIFO_OFFSET))(this, a1);
		}

		::System::Void HDEJDHKBCPN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EKFJBCEJGMJ_HDEJDHKBCPN_OFFSET))(this, a1);
		}

		::System::Void HBPEOAHNLML()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKFJBCEJGMJ_HBPEOAHNLML_OFFSET))(this);
		}

		::System::Void NODGHAGPOLF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKFJBCEJGMJ_NODGHAGPOLF_OFFSET))(this);
		}

		::System::Void KKFLLGJNEGJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKFJBCEJGMJ_KKFLLGJNEGJ_OFFSET))(this);
		}

		::System::Boolean AFDHGANENPH(::RPG::GameCore::ExpeditionBattleFlowStateType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ExpeditionBattleFlowStateType))((::PBYTE)hIl2Cpp + EKFJBCEJGMJ_AFDHGANENPH_OFFSET))(this, a1);
		}

		::System::Void KAIEIIPIABO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKFJBCEJGMJ_KAIEIIPIABO_OFFSET))(this);
		}

	};
