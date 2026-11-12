#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GGJEMEHMBNL.h"
#include "unitysdk/UnityEngine/Vector3.h"
class NAOKFLDEDBJ;
namespace RPG::GameCore { class HalfBoomerangProjectileData; }

#define BHGBOAGMPNH_CTOR_OFFSET UNITYSDK_OFFSET(0xBB30400)
#define BHGBOAGMPNH_GOLCDGNLEKL_OFFSET UNITYSDK_OFFSET(0xBB308C0)
#define BHGBOAGMPNH_IDLJDKPJEBG_OFFSET UNITYSDK_OFFSET(0xBB30CE0)
#define BHGBOAGMPNH_LHDIJEEEKEJ_OFFSET UNITYSDK_OFFSET(0xBB305F0)
#define BHGBOAGMPNH_PGKPGNJJMMB_OFFSET UNITYSDK_OFFSET(0xBB307D0)

inline static constexpr unsigned int BHGBOAGMPNH_TypeDefinitionIndex = 55910;

	class BHGBOAGMPNH : public ::GGJEMEHMBNL
	{
	public:
		::RPG::GameCore::HalfBoomerangProjectileData* ANEIIAADMKM; // 0x48
		::System::Single HKNNPAFJAAO; // 0x50
		::System::Single OFBOHEOLCCE; // 0x54
		::UnityEngine::Vector3 OOECFAKCPIL; // 0x58
		::System::Void _ctor(::NAOKFLDEDBJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NAOKFLDEDBJ*))((::PBYTE)hIl2Cpp + BHGBOAGMPNH_CTOR_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 LHDIJEEEKEJ()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + BHGBOAGMPNH_LHDIJEEEKEJ_OFFSET))(this);
		}

		::System::Void PGKPGNJJMMB(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BHGBOAGMPNH_PGKPGNJJMMB_OFFSET))(this, a1);
		}

		::System::Void GOLCDGNLEKL(::System::Single a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + BHGBOAGMPNH_GOLCDGNLEKL_OFFSET))(this, a1, a2);
		}

		::System::Void IDLJDKPJEBG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHGBOAGMPNH_IDLJDKPJEBG_OFFSET))(this);
		}

	};
