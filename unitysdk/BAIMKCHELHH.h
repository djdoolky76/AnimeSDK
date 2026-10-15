#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GGJEMEHMBNL.h"
#include "unitysdk/UnityEngine/Vector3.h"
class NAOKFLDEDBJ;
namespace RPG::GameCore { class ParabolaProjectileData; }

#define BAIMKCHELHH_CTOR_OFFSET UNITYSDK_OFFSET(0x15E60090)
#define BAIMKCHELHH_GAMDCANIFGC_OFFSET UNITYSDK_OFFSET(0x15E60720)
#define BAIMKCHELHH_GOLCDGNLEKL_OFFSET UNITYSDK_OFFSET(0x15E60980)
#define BAIMKCHELHH_IDLJDKPJEBG_OFFSET UNITYSDK_OFFSET(0x15E60A70)
#define BAIMKCHELHH_JNMKCFMJPHN_OFFSET UNITYSDK_OFFSET(0x15E600F0)
#define BAIMKCHELHH_PGKPGNJJMMB_OFFSET UNITYSDK_OFFSET(0x15E608E0)

inline static constexpr unsigned int BAIMKCHELHH_TypeDefinitionIndex = 54747;

	class BAIMKCHELHH : public ::GGJEMEHMBNL
	{
	public:
		::RPG::GameCore::ParabolaProjectileData* FPGPHIEOMFL; // 0x48
		::UnityEngine::Vector3 AKEGBNBJKKM; // 0x50
		::UnityEngine::Vector3 CEAIBCDNIBL; // 0x5C
		::System::Void _ctor(::NAOKFLDEDBJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NAOKFLDEDBJ*))((::PBYTE)hIl2Cpp + BAIMKCHELHH_CTOR_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 JNMKCFMJPHN()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + BAIMKCHELHH_JNMKCFMJPHN_OFFSET))(this);
		}

		::System::Void PGKPGNJJMMB(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BAIMKCHELHH_PGKPGNJJMMB_OFFSET))(this, a1);
		}

		::System::Void GOLCDGNLEKL(::System::Single a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + BAIMKCHELHH_GOLCDGNLEKL_OFFSET))(this, a1, a2);
		}

		::System::Void IDLJDKPJEBG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAIMKCHELHH_IDLJDKPJEBG_OFFSET))(this);
		}

		::System::Void GAMDCANIFGC(::System::Single a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BAIMKCHELHH_GAMDCANIFGC_OFFSET))(this, a1, a2, a3);
		}

	};
