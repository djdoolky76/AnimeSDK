#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MiniMapIconType.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::GameCore { class PropComponent; }
namespace System { class String; }

#define AAEEKNDIIGI_ACKHLAOGCON_OFFSET UNITYSDK_OFFSET(0xB0C3570)
#define AAEEKNDIIGI_AODFFBIALIA_OFFSET UNITYSDK_OFFSET(0xB0C3550)
#define AAEEKNDIIGI_CFMCEMPGBKH_OFFSET UNITYSDK_OFFSET(0xB0C3560)
#define AAEEKNDIIGI_CTOR_OFFSET UNITYSDK_OFFSET(0xB0C29E0)
#define AAEEKNDIIGI_DHEBFCGOKMP_OFFSET UNITYSDK_OFFSET(0xB0C3580)
#define AAEEKNDIIGI_EIEALGBCKCL_OFFSET UNITYSDK_OFFSET(0xB0C3250)
#define AAEEKNDIIGI_EKIFBFNOMIJ_OFFSET UNITYSDK_OFFSET(0xB0C3740)
#define AAEEKNDIIGI_ELNPLONBPDG_OFFSET UNITYSDK_OFFSET(0xB0C30C0)
#define AAEEKNDIIGI_EPGNEMEKKCB_OFFSET UNITYSDK_OFFSET(0xB0C32C0)
#define AAEEKNDIIGI_EPOIOPNHHKK_OFFSET UNITYSDK_OFFSET(0xB0C35A0)
#define AAEEKNDIIGI_FLDDPPHHDEJ_OFFSET UNITYSDK_OFFSET(0xB0C2EF0)
#define AAEEKNDIIGI_GET_AREAID_OFFSET UNITYSDK_OFFSET(0xB0C2E60)
#define AAEEKNDIIGI_GET_CANTINT_OFFSET UNITYSDK_OFFSET(0xB0C2BE0)
#define AAEEKNDIIGI_GET_HASH_OFFSET UNITYSDK_OFFSET(0xB0C2BC0)
#define AAEEKNDIIGI_GET_ICONTYPE_OFFSET UNITYSDK_OFFSET(0xB0C2C40)
#define AAEEKNDIIGI_GET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0xB0C2C00)
#define AAEEKNDIIGI_GET_ISSTATIC_OFFSET UNITYSDK_OFFSET(0xB0C2C20)
#define AAEEKNDIIGI_IIDNGLDLPBM_OFFSET UNITYSDK_OFFSET(0xB0C3540)
#define AAEEKNDIIGI_JBKGGIAPHPM_OFFSET UNITYSDK_OFFSET(0xB0C31D0)
#define AAEEKNDIIGI_JNCBEGFKCHF_OFFSET UNITYSDK_OFFSET(0xB0C2C60)
#define AAEEKNDIIGI_KOBMNMJMDFG_OFFSET UNITYSDK_OFFSET(0xB0C3730)
#define AAEEKNDIIGI_LCKMECPJCHL_OFFSET UNITYSDK_OFFSET(0xB0C3650)
#define AAEEKNDIIGI_LJJCDDOALNO_OFFSET UNITYSDK_OFFSET(0xB0C33E0)
#define AAEEKNDIIGI_LPGJLLJAGDN_OFFSET UNITYSDK_OFFSET(0xB0C2A60)
#define AAEEKNDIIGI_MFIIBKKHLGH_OFFSET UNITYSDK_OFFSET(0xB0C3760)
#define AAEEKNDIIGI_MLIAMHLPPAB_OFFSET UNITYSDK_OFFSET(0xB0C3590)
#define AAEEKNDIIGI_NODIHBKJDJE_OFFSET UNITYSDK_OFFSET(0xB0C35B0)
#define AAEEKNDIIGI_OHEOKPOKDFG_OFFSET UNITYSDK_OFFSET(0xB0C34D0)
#define AAEEKNDIIGI_OIAKLGHBJBO_OFFSET UNITYSDK_OFFSET(0xB0C2DD0)
#define AAEEKNDIIGI_PAOFPBGKLFH_OFFSET UNITYSDK_OFFSET(0xB0C3750)
#define AAEEKNDIIGI_SET_CANTINT_OFFSET UNITYSDK_OFFSET(0xB0C2BF0)
#define AAEEKNDIIGI_SET_HASH_OFFSET UNITYSDK_OFFSET(0xB0C2BD0)
#define AAEEKNDIIGI_SET_ICONTYPE_OFFSET UNITYSDK_OFFSET(0xB0C2C50)
#define AAEEKNDIIGI_SET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0xB0C2C10)
#define AAEEKNDIIGI_SET_ISSTATIC_OFFSET UNITYSDK_OFFSET(0xB0C2C30)
#define AAEEKNDIIGI_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB0C2B70)
#define AAEEKNDIIGI_TOSTRING_OFFSET UNITYSDK_OFFSET(0xB0C3920)

inline static constexpr unsigned int AAEEKNDIIGI_TypeDefinitionIndex = 60647;

	class AAEEKNDIIGI : public ::System::Object
	{
	public:
		::RPG::GameCore::PropComponent* MCLLALGABAB; // 0x10
		::System::Int32 _Hash_k__BackingField; // 0x18
		::System::Int32 DEJLEBHFJGB; // 0x1C
		::System::Nullable_1<::System::Boolean> IECPJFBLBLB; // 0x20
		::System::Boolean _CanTint_k__BackingField; // 0x22
		::System::Boolean _IsStatic_k__BackingField; // 0x23
		::RPG::Client::MiniMapIconType _IconType_k__BackingField; // 0x24
		::System::Int32 _Identifier_k__BackingField; // 0x28
		::System::Void _ctor(::RPG::GameCore::PropComponent* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PropComponent*, ::System::Boolean))((::PBYTE)hIl2Cpp + AAEEKNDIIGI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAEEKNDIIGI_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		static ::System::Int32 LPGJLLJAGDN(::RPG::GameCore::PropComponent* a1)
		{
			return ((::System::Int32(*)(::RPG::GameCore::PropComponent*))((::PBYTE)hIl2Cpp + AAEEKNDIIGI_LPGJLLJAGDN_OFFSET))(a1);
		}

		::System::Int32 get_Hash()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AAEEKNDIIGI_GET_HASH_OFFSET))(this);
		}

		::System::Void set_Hash(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AAEEKNDIIGI_SET_HASH_OFFSET))(this, a1);
		}

		::System::Boolean get_CanTint()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AAEEKNDIIGI_GET_CANTINT_OFFSET))(this);
		}

		::System::Void set_CanTint(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AAEEKNDIIGI_SET_CANTINT_OFFSET))(this, a1);
		}

		::System::Int32 get_Identifier()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AAEEKNDIIGI_GET_IDENTIFIER_OFFSET))(this);
		}

		::System::Void set_Identifier(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AAEEKNDIIGI_SET_IDENTIFIER_OFFSET))(this, a1);
		}

		::System::Boolean get_IsStatic()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AAEEKNDIIGI_GET_ISSTATIC_OFFSET))(this);
		}

		::System::Void set_IsStatic(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AAEEKNDIIGI_SET_ISSTATIC_OFFSET))(this, a1);
		}

		::RPG::Client::MiniMapIconType get_IconType()
		{
			return ((::RPG::Client::MiniMapIconType(*)(::PVOID))((::PBYTE)hIl2Cpp + AAEEKNDIIGI_GET_ICONTYPE_OFFSET))(this);
		}

		::System::Void set_IconType(::RPG::Client::MiniMapIconType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MiniMapIconType))((::PBYTE)hIl2Cpp + AAEEKNDIIGI_SET_ICONTYPE_OFFSET))(this, a1);
		}

		::System::Int32 JNCBEGFKCHF()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AAEEKNDIIGI_JNCBEGFKCHF_OFFSET))(this);
		}

		::System::Boolean OIAKLGHBJBO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AAEEKNDIIGI_OIAKLGHBJBO_OFFSET))(this);
		}

		::System::Int32 get_AreaID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AAEEKNDIIGI_GET_AREAID_OFFSET))(this);
		}

		::System::Boolean FLDDPPHHDEJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AAEEKNDIIGI_FLDDPPHHDEJ_OFFSET))(this);
		}

		::System::Boolean ELNPLONBPDG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AAEEKNDIIGI_ELNPLONBPDG_OFFSET))(this);
		}

		::System::UInt32 JBKGGIAPHPM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AAEEKNDIIGI_JBKGGIAPHPM_OFFSET))(this);
		}

		::System::Boolean EIEALGBCKCL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AAEEKNDIIGI_EIEALGBCKCL_OFFSET))(this);
		}

		::System::Single EPGNEMEKKCB()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + AAEEKNDIIGI_EPGNEMEKKCB_OFFSET))(this);
		}

		::UnityEngine::Vector3 LJJCDDOALNO()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + AAEEKNDIIGI_LJJCDDOALNO_OFFSET))(this);
		}

		::UnityEngine::Color OHEOKPOKDFG()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + AAEEKNDIIGI_OHEOKPOKDFG_OFFSET))(this);
		}

		::System::Int32 IIDNGLDLPBM()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AAEEKNDIIGI_IIDNGLDLPBM_OFFSET))(this);
		}

		::System::Single AODFFBIALIA()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + AAEEKNDIIGI_AODFFBIALIA_OFFSET))(this);
		}

		::System::Single CFMCEMPGBKH()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + AAEEKNDIIGI_CFMCEMPGBKH_OFFSET))(this);
		}

		::System::Single ACKHLAOGCON()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + AAEEKNDIIGI_ACKHLAOGCON_OFFSET))(this);
		}

		::UnityEngine::Color DHEBFCGOKMP()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + AAEEKNDIIGI_DHEBFCGOKMP_OFFSET))(this);
		}

		::System::Boolean MLIAMHLPPAB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AAEEKNDIIGI_MLIAMHLPPAB_OFFSET))(this);
		}

		::System::Boolean EPOIOPNHHKK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AAEEKNDIIGI_EPOIOPNHHKK_OFFSET))(this);
		}

		::System::Single NODIHBKJDJE()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + AAEEKNDIIGI_NODIHBKJDJE_OFFSET))(this);
		}

		::UnityEngine::Vector3 LCKMECPJCHL()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + AAEEKNDIIGI_LCKMECPJCHL_OFFSET))(this);
		}

		::System::Int32 KOBMNMJMDFG()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AAEEKNDIIGI_KOBMNMJMDFG_OFFSET))(this);
		}

		::System::Boolean EKIFBFNOMIJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AAEEKNDIIGI_EKIFBFNOMIJ_OFFSET))(this);
		}

		::UnityEngine::Vector2 PAOFPBGKLFH()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + AAEEKNDIIGI_PAOFPBGKLFH_OFFSET))(this);
		}

		::UnityEngine::Vector2 MFIIBKKHLGH()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + AAEEKNDIIGI_MFIIBKKHLGH_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AAEEKNDIIGI_TOSTRING_OFFSET))(this);
		}

	};
