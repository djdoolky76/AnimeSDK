#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GGJEMEHMBNL.h"
#include "unitysdk/UnityEngine/Vector3.h"
class NAOKFLDEDBJ;
namespace RPG::GameCore { class BezierProjectileData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DPMANCGHIEO_CTOR_OFFSET UNITYSDK_OFFSET(0x12655980)
#define DPMANCGHIEO_GAMDCANIFGC_OFFSET UNITYSDK_OFFSET(0x12655E20)
#define DPMANCGHIEO_GOLCDGNLEKL_OFFSET UNITYSDK_OFFSET(0x12656840)
#define DPMANCGHIEO_IDLJDKPJEBG_OFFSET UNITYSDK_OFFSET(0x126569D0)
#define DPMANCGHIEO_JNMKCFMJPHN_OFFSET UNITYSDK_OFFSET(0x12655A30)
#define DPMANCGHIEO_MGFLFCHMGPA_OFFSET UNITYSDK_OFFSET(0x126565C0)
#define DPMANCGHIEO_PGKPGNJJMMB_OFFSET UNITYSDK_OFFSET(0x12656930)

inline static constexpr unsigned int DPMANCGHIEO_TypeDefinitionIndex = 54735;

	class DPMANCGHIEO : public ::GGJEMEHMBNL
	{
	public:
		::RPG::GameCore::BezierProjectileData* FPGPHIEOMFL; // 0x48
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* KNJMEJLIEFF; // 0x50
		::UnityEngine::Vector3 EANKILEFHEA; // 0x58
		::UnityEngine::Vector3 AKEGBNBJKKM; // 0x64
		::System::Void _ctor(::NAOKFLDEDBJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NAOKFLDEDBJ*))((::PBYTE)hIl2Cpp + DPMANCGHIEO_CTOR_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 JNMKCFMJPHN()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + DPMANCGHIEO_JNMKCFMJPHN_OFFSET))(this);
		}

		::System::Void MGFLFCHMGPA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPMANCGHIEO_MGFLFCHMGPA_OFFSET))(this);
		}

		::System::Void GOLCDGNLEKL(::System::Single a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + DPMANCGHIEO_GOLCDGNLEKL_OFFSET))(this, a1, a2);
		}

		::System::Void PGKPGNJJMMB(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DPMANCGHIEO_PGKPGNJJMMB_OFFSET))(this, a1);
		}

		::System::Void IDLJDKPJEBG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPMANCGHIEO_IDLJDKPJEBG_OFFSET))(this);
		}

		::System::Void GAMDCANIFGC(::System::Single a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DPMANCGHIEO_GAMDCANIFGC_OFFSET))(this, a1, a2, a3);
		}

	};
