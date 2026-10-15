#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/UnityEngine/Vector3.h"
class JOLAHHGIFHA;
class KDMEFGANLKI;
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class CharacterInputData; }
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DHGNBCEBBKC_AEGMLJMJBDO_OFFSET UNITYSDK_OFFSET(0xEBD2340)
#define DHGNBCEBBKC_CALPCICDPJM_OFFSET UNITYSDK_OFFSET(0xEBD22A0)
#define DHGNBCEBBKC_CCTOR_OFFSET UNITYSDK_OFFSET(0xEBD40C0)
#define DHGNBCEBBKC_CIEJFJJDOGL_OFFSET UNITYSDK_OFFSET(0xEBD3BB0)
#define DHGNBCEBBKC_CTOR_OFFSET UNITYSDK_OFFSET(0xEBD1750)
#define DHGNBCEBBKC_DISPOSE_OFFSET UNITYSDK_OFFSET(0xEBD18A0)
#define DHGNBCEBBKC_HGKIDGABIOL_OFFSET UNITYSDK_OFFSET(0xEBD3550)
#define DHGNBCEBBKC_ICDMGDBDIKF_OFFSET UNITYSDK_OFFSET(0xEBD3650)
#define DHGNBCEBBKC_IPHBABLIKOE_OFFSET UNITYSDK_OFFSET(0xEBD36A0)
#define DHGNBCEBBKC_JANEBKOKCFK_OFFSET UNITYSDK_OFFSET(0xEBD3230)
#define DHGNBCEBBKC_KPCFJDJFDHL_OFFSET UNITYSDK_OFFSET(0xEBD4020)
#define DHGNBCEBBKC_LFHDKIFOGIF_OFFSET UNITYSDK_OFFSET(0xEBD1980)
#define DHGNBCEBBKC_LMCEDCHJKFF_OFFSET UNITYSDK_OFFSET(0xEBD17A0)
#define DHGNBCEBBKC_PBIPAGHLINB_OFFSET UNITYSDK_OFFSET(0xEBD34A0)
#define DHGNBCEBBKC_PBLGDPDJPJM_OFFSET UNITYSDK_OFFSET(0xEBD38A0)

	class DHGNBCEBBKC : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::System::Collections::Generic::List_1<::JOLAHHGIFHA*>* CEHCEEMDNMN; // 0x18
		::RPG::GameCore::AdventureCharacterController* CPIIOIPAAKK; // 0x20
		::System::UInt32 OCNGJADHLDK; // 0x28
		static ::System::UInt32* StaticGet_KMLJBJFJHKH()
		{
			return (::System::UInt32*)UnitySDK::FromName("", "DHGNBCEBBKC")->GetStaticField(0x124B0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHGNBCEBBKC_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DHGNBCEBBKC_CCTOR_OFFSET))();
		}

		::System::Void LMCEDCHJKFF(::RPG::GameCore::AdventureCharacterController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureCharacterController*))((::PBYTE)hIl2Cpp + DHGNBCEBBKC_LMCEDCHJKFF_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHGNBCEBBKC_DISPOSE_OFFSET))(this);
		}

		::System::Void LFHDKIFOGIF(::System::Collections::Generic::IEnumerable_1<::JOLAHHGIFHA*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::JOLAHHGIFHA*>*))((::PBYTE)hIl2Cpp + DHGNBCEBBKC_LFHDKIFOGIF_OFFSET))(this, a1);
		}

		::System::Void CALPCICDPJM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHGNBCEBBKC_CALPCICDPJM_OFFSET))(this);
		}

		::System::Boolean AEGMLJMJBDO(::RPG::GameCore::AdventureCharacterController* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AdventureCharacterController*))((::PBYTE)hIl2Cpp + DHGNBCEBBKC_AEGMLJMJBDO_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 HGKIDGABIOL()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + DHGNBCEBBKC_HGKIDGABIOL_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* ICDMGDBDIKF()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + DHGNBCEBBKC_ICDMGDBDIKF_OFFSET))(this);
		}

		::System::Void IPHBABLIKOE(::RPG::GameCore::CharacterInputData* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterInputData*, ::System::Single))((::PBYTE)hIl2Cpp + DHGNBCEBBKC_IPHBABLIKOE_OFFSET))(this, a1, a2);
		}

		::JOLAHHGIFHA* JANEBKOKCFK()
		{
			return ((::JOLAHHGIFHA*(*)(::PVOID))((::PBYTE)hIl2Cpp + DHGNBCEBBKC_JANEBKOKCFK_OFFSET))(this);
		}

		::JOLAHHGIFHA* PBLGDPDJPJM(::JOLAHHGIFHA* a1, ::JOLAHHGIFHA* a2, ::System::Single a3)
		{
			return ((::JOLAHHGIFHA*(*)(::PVOID, ::JOLAHHGIFHA*, ::JOLAHHGIFHA*, ::System::Single))((::PBYTE)hIl2Cpp + DHGNBCEBBKC_PBLGDPDJPJM_OFFSET))(this, a1, a2, a3);
		}

		::JOLAHHGIFHA* CIEJFJJDOGL(::JOLAHHGIFHA* a1, ::System::Int64 a2)
		{
			return ((::JOLAHHGIFHA*(*)(::PVOID, ::JOLAHHGIFHA*, ::System::Int64))((::PBYTE)hIl2Cpp + DHGNBCEBBKC_CIEJFJJDOGL_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector3 PBIPAGHLINB(::KDMEFGANLKI* a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::KDMEFGANLKI*))((::PBYTE)hIl2Cpp + DHGNBCEBBKC_PBIPAGHLINB_OFFSET))(this, a1);
		}

		::KDMEFGANLKI* KPCFJDJFDHL(::UnityEngine::Vector3 a1)
		{
			return ((::KDMEFGANLKI*(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DHGNBCEBBKC_KPCFJDJFDHL_OFFSET))(this, a1);
		}

	};
