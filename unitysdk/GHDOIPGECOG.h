#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterMotionFlag.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client { class TiltCommonConfig; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define GHDOIPGECOG_BEKDECABOKI_OFFSET UNITYSDK_OFFSET(0x1B4B5B00)
#define GHDOIPGECOG_CTOR_OFFSET UNITYSDK_OFFSET(0x1B4B5730)
#define GHDOIPGECOG_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B4B5820)
#define GHDOIPGECOG_EEMNLDGBPOC_OFFSET UNITYSDK_OFFSET(0x1B4B5C30)
#define GHDOIPGECOG_HOPNINFFJHM_OFFSET UNITYSDK_OFFSET(0x1B4B5B60)
#define GHDOIPGECOG_ILIOHGNAJFH_OFFSET UNITYSDK_OFFSET(0x1B4B6190)
#define GHDOIPGECOG_JBMFCCJPFBF_OFFSET UNITYSDK_OFFSET(0x1B4B59A0)
#define GHDOIPGECOG_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x1B4B5940)
#define GHDOIPGECOG_KIHPPIJMMJA_OFFSET UNITYSDK_OFFSET(0x1B4B5890)
#define GHDOIPGECOG_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x1B4B5760)
#define GHDOIPGECOG_LDAMHBBILAD_OFFSET UNITYSDK_OFFSET(0x1B4B60C0)
#define GHDOIPGECOG_LEFICJLFCIL_OFFSET UNITYSDK_OFFSET(0x1B4B5F40)
#define GHDOIPGECOG_MALIBCJKIPH_OFFSET UNITYSDK_OFFSET(0x1B4B60D0)
#define GHDOIPGECOG_ONKLGMBKEOI_OFFSET UNITYSDK_OFFSET(0x1B4B6130)

inline static constexpr unsigned int GHDOIPGECOG_TypeDefinitionIndex = 75396;

	class GHDOIPGECOG : public ::System::Object
	{
	public:
		::RPG::Client::TiltCommonConfig* OLAMJJFPPBP; // 0x10
		::UnityEngine::Transform* FDFOILMGAEL; // 0x18
		::RPG::Client::TiltCommonConfig* IGHAHBNLIJA; // 0x20
		::System::Single PFOIJIHIMCG; // 0x28
		::System::Single GEJLALLADEB; // 0x2C
		::System::Single ELEDNLGPJCN; // 0x30
		::System::Single DLMELDHDGBO; // 0x34
		::System::Single JOIJCLKPKDM; // 0x38
		::System::Single BKBPGELJAFE; // 0x3C
		::System::Single KEJOPLKCIGI; // 0x40
		::System::Single DADNKBDOCEP; // 0x44
		::System::Single FNGOHDPJADC; // 0x48
		::System::Single JFNADPOMHNG; // 0x4C
		::System::Single ADAHMKKFHAE; // 0x50
		::System::Boolean DLGFMPNEHGO; // 0x54
		::System::Byte _padding0[0x3];
		::System::Single HHDKAMBBFMC; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHDOIPGECOG_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::UnityEngine::GameObject* a1, ::RPG::Client::TiltCommonConfig* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::Client::TiltCommonConfig*))((::PBYTE)hIl2Cpp + GHDOIPGECOG_KPJGDHLENIP_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHDOIPGECOG_DISPOSE_OFFSET))(this);
		}

		::System::Void KIHPPIJMMJA(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GHDOIPGECOG_KIHPPIJMMJA_OFFSET))(this, a1);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHDOIPGECOG_KHGIKBFDLFB_OFFSET))(this);
		}

		::System::Void JBMFCCJPFBF(::System::Single a1, ::System::Single a2, ::System::Single a3, ::RPG::GameCore::CharacterMotionFlag a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::RPG::GameCore::CharacterMotionFlag))((::PBYTE)hIl2Cpp + GHDOIPGECOG_JBMFCCJPFBF_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Single HOPNINFFJHM(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + GHDOIPGECOG_HOPNINFFJHM_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Single EEMNLDGBPOC(::System::Single a1, ::System::Single a2, ::System::Boolean a3, ::UnityEngine::Vector3 a4)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Boolean, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + GHDOIPGECOG_EEMNLDGBPOC_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void LEFICJLFCIL(::System::Single a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + GHDOIPGECOG_LEFICJLFCIL_OFFSET))(this, a1, a2);
		}

		::System::Boolean LDAMHBBILAD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GHDOIPGECOG_LDAMHBBILAD_OFFSET))(this);
		}

		::System::Single MALIBCJKIPH()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + GHDOIPGECOG_MALIBCJKIPH_OFFSET))(this);
		}

		::System::Single ONKLGMBKEOI()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + GHDOIPGECOG_ONKLGMBKEOI_OFFSET))(this);
		}

		::System::Single ILIOHGNAJFH()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + GHDOIPGECOG_ILIOHGNAJFH_OFFSET))(this);
		}

		::RPG::Client::TiltCommonConfig* BEKDECABOKI()
		{
			return ((::RPG::Client::TiltCommonConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHDOIPGECOG_BEKDECABOKI_OFFSET))(this);
		}

	};
