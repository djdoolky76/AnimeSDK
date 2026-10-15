#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JBFFCBPMKEF_ReferenceType.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
#include "unitysdk/System/ValueTuple_3.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/ValueTuple_2.h"
class ENEIHJJPNPI;
namespace RPG::GameCore { class DynamicJsonConfig; }
namespace RPG::GameCore { class GameEntityList; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define JBFFCBPMKEF_BFIBDBNJJDE_OFFSET UNITYSDK_OFFSET(0x1655D460)
#define JBFFCBPMKEF_CABFJMIIBMG_OFFSET UNITYSDK_OFFSET(0x1655CDC0)
#define JBFFCBPMKEF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1655E5B0)
#define JBFFCBPMKEF_CTOR_OFFSET UNITYSDK_OFFSET(0x1655DCF0)
#define JBFFCBPMKEF_DAHLKDKFNAF_OFFSET UNITYSDK_OFFSET(0x1655C760)
#define JBFFCBPMKEF_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1655E1B0)
#define JBFFCBPMKEF_EJBKIKIALOK_OFFSET UNITYSDK_OFFSET(0x1655D5F0)
#define JBFFCBPMKEF_FGFKBCKKMAA_OFFSET UNITYSDK_OFFSET(0x1655CD10)
#define JBFFCBPMKEF_GFEKHLDPDCB_OFFSET UNITYSDK_OFFSET(0x1655C8F0)
#define JBFFCBPMKEF_IBLKCPJDJHB_OFFSET UNITYSDK_OFFSET(0x1655CA70)
#define JBFFCBPMKEF_IOHKBIKGJOC_OFFSET UNITYSDK_OFFSET(0x1655DBF0)
#define JBFFCBPMKEF_LGIEDINBDNK_OFFSET UNITYSDK_OFFSET(0x1655CC80)
#define JBFFCBPMKEF_MGNIGKDHOAN_OFFSET UNITYSDK_OFFSET(0x1655CAF0)
#define JBFFCBPMKEF_MHJGDNPKBHO_OFFSET UNITYSDK_OFFSET(0x1655D8A0)

inline static constexpr unsigned int JBFFCBPMKEF_TypeDefinitionIndex = 57765;

	class JBFFCBPMKEF : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StringHash, ::System::String*>* KINCCPGLBEC; // 0x18
		::System::Collections::Generic::HashSet_1<::RPG::GameCore::StringHash>* BGPKCANNLNI; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::ValueTuple_3<::RPG::GameCore::StringHash, ::System::Object*, ::System::Object*>>* OFDNPGKHAJB; // 0x28
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StringHash, ::Il2CppArray<::System::String*>*>* PCFMEJCFCHH; // 0x30
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StringHash, ::System::Action*>* NDCCNDMFBCN; // 0x38
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StringHash, ::RPG::GameCore::GameEntityList*>* NNIIECLHCAB; // 0x40
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StringHash, ::System::UInt32>* ABEGDIGDKJB; // 0x48
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StringHash, ::RPG::GameCore::DynamicJsonConfig*>* HEHAIBEOCAM; // 0x50
		::ENEIHJJPNPI* KFKGOMIMNLD; // 0x58
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StringHash, ::Il2CppArray<::RPG::GameCore::DynamicJsonConfig*>*>* GOABPIDKLCI; // 0x60
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StringHash, ::System::Boolean>* DPAFFEJKJEJ; // 0x68
		static ::System::String** StaticGet_MCDOMDKGJKB()
		{
			return (::System::String**)UnitySDK::FromName("", "JBFFCBPMKEF")->GetStaticField(0x6B210);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBFFCBPMKEF_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JBFFCBPMKEF_CCTOR_OFFSET))();
		}

		::System::Void DAHLKDKFNAF(::RPG::GameCore::StringHash a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StringHash, ::System::Action*))((::PBYTE)hIl2Cpp + JBFFCBPMKEF_DAHLKDKFNAF_OFFSET))(this, a1, a2);
		}

		::System::Void GFEKHLDPDCB(::RPG::GameCore::StringHash a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StringHash, ::System::Action*))((::PBYTE)hIl2Cpp + JBFFCBPMKEF_GFEKHLDPDCB_OFFSET))(this, a1, a2);
		}

		::System::Void IBLKCPJDJHB(::RPG::GameCore::StringHash a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StringHash, ::System::String*))((::PBYTE)hIl2Cpp + JBFFCBPMKEF_IBLKCPJDJHB_OFFSET))(this, a1, a2);
		}

		::System::Void LGIEDINBDNK(::RPG::GameCore::StringHash a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StringHash, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + JBFFCBPMKEF_LGIEDINBDNK_OFFSET))(this, a1, a2);
		}

		static ::System::Boolean FGFKBCKKMAA(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + JBFFCBPMKEF_FGFKBCKKMAA_OFFSET))(a1);
		}

		::System::Void CABFJMIIBMG(::System::String* a1, ::JBFFCBPMKEF_ReferenceType a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::JBFFCBPMKEF_ReferenceType))((::PBYTE)hIl2Cpp + JBFFCBPMKEF_CABFJMIIBMG_OFFSET))(this, a1, a2);
		}

		::System::Void MGNIGKDHOAN(::RPG::GameCore::StringHash a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StringHash, ::System::String*))((::PBYTE)hIl2Cpp + JBFFCBPMKEF_MGNIGKDHOAN_OFFSET))(this, a1, a2);
		}

		static ::System::ValueTuple_2<::System::Object*, ::System::String*> BFIBDBNJJDE(::System::String* a1)
		{
			return ((::System::ValueTuple_2<::System::Object*, ::System::String*>(*)(::System::String*))((::PBYTE)hIl2Cpp + JBFFCBPMKEF_BFIBDBNJJDE_OFFSET))(a1);
		}

		::System::Void EJBKIKIALOK(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + JBFFCBPMKEF_EJBKIKIALOK_OFFSET))(this, a1);
		}

		::System::Void MHJGDNPKBHO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBFFCBPMKEF_MHJGDNPKBHO_OFFSET))(this);
		}

		::System::Void IOHKBIKGJOC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBFFCBPMKEF_IOHKBIKGJOC_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBFFCBPMKEF_DISPOSE_OFFSET))(this);
		}

	};
