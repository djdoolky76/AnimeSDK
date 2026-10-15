#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JBFFCBPMKEF_ReferenceType.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
#include "unitysdk/System/ValueTuple.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class ENEIHJJPNPI;
namespace RPG::GameCore { class DynamicJsonConfig; }
namespace RPG::GameCore { class GameEntityList; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define JBFFCBPMKEF_BFIBDBNJJDE_OFFSET UNITYSDK_OFFSET(0x1656B3B0)
#define JBFFCBPMKEF_CABFJMIIBMG_OFFSET UNITYSDK_OFFSET(0x1656AD10)
#define JBFFCBPMKEF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1656C500)
#define JBFFCBPMKEF_CTOR_OFFSET UNITYSDK_OFFSET(0x1656BC40)
#define JBFFCBPMKEF_DAHLKDKFNAF_OFFSET UNITYSDK_OFFSET(0x1656A6B0)
#define JBFFCBPMKEF_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1656C100)
#define JBFFCBPMKEF_EJBKIKIALOK_OFFSET UNITYSDK_OFFSET(0x1656B540)
#define JBFFCBPMKEF_FGFKBCKKMAA_OFFSET UNITYSDK_OFFSET(0x1656AC60)
#define JBFFCBPMKEF_GFEKHLDPDCB_OFFSET UNITYSDK_OFFSET(0x1656A840)
#define JBFFCBPMKEF_IBLKCPJDJHB_OFFSET UNITYSDK_OFFSET(0x1656A9C0)
#define JBFFCBPMKEF_IOHKBIKGJOC_OFFSET UNITYSDK_OFFSET(0x1656BB40)
#define JBFFCBPMKEF_LGIEDINBDNK_OFFSET UNITYSDK_OFFSET(0x1656ABD0)
#define JBFFCBPMKEF_MGNIGKDHOAN_OFFSET UNITYSDK_OFFSET(0x1656AA40)
#define JBFFCBPMKEF_MHJGDNPKBHO_OFFSET UNITYSDK_OFFSET(0x1656B7F0)

	class JBFFCBPMKEF : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::ENEIHJJPNPI* KFKGOMIMNLD; // 0x18
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StringHash, ::System::Boolean>* DPAFFEJKJEJ; // 0x20
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StringHash, ::Il2CppArray<::RPG::GameCore::DynamicJsonConfig*>*>* GOABPIDKLCI; // 0x28
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StringHash, ::RPG::GameCore::DynamicJsonConfig*>* HEHAIBEOCAM; // 0x30
		::System::Collections::Generic::HashSet_1<::RPG::GameCore::StringHash>* BGPKCANNLNI; // 0x38
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StringHash, ::System::Action*>* NDCCNDMFBCN; // 0x40
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StringHash, ::RPG::GameCore::GameEntityList*>* NNIIECLHCAB; // 0x48
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::ValueTuple>* OFDNPGKHAJB; // 0x50
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StringHash, ::Il2CppArray<::System::String*>*>* PCFMEJCFCHH; // 0x58
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StringHash, ::System::UInt32>* ABEGDIGDKJB; // 0x60
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StringHash, ::System::String*>* KINCCPGLBEC; // 0x68
		static ::System::String** StaticGet_MCDOMDKGJKB()
		{
			return (::System::String**)UnitySDK::FromName("", "JBFFCBPMKEF")->GetStaticField(0x6E660);
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

		static ::System::ValueTuple BFIBDBNJJDE(::System::String* a1)
		{
			return ((::System::ValueTuple(*)(::System::String*))((::PBYTE)hIl2Cpp + JBFFCBPMKEF_BFIBDBNJJDE_OFFSET))(a1);
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
