#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/DOOKIBGLODI.h"
#include "unitysdk/NABBMLGAIBK.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class HLJNBBHKKMI;
class JMHHBMNIJJB;
class LPHINGPIEAJ;
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define EFMOOJFEGNO_CTOR_OFFSET UNITYSDK_OFFSET(0x1481FB30)
#define EFMOOJFEGNO_DILJLHLPOKC_OFFSET UNITYSDK_OFFSET(0x1481FE90)
#define EFMOOJFEGNO_DIPDIJDJCLF_OFFSET UNITYSDK_OFFSET(0x1481FB40)
#define EFMOOJFEGNO_EBDPPBHFPPM_OFFSET UNITYSDK_OFFSET(0x14820BB0)
#define EFMOOJFEGNO_EHOMMOJOJDE_OFFSET UNITYSDK_OFFSET(0x14820810)
#define EFMOOJFEGNO_HNLLKFGLCIM_OFFSET UNITYSDK_OFFSET(0x14821640)
#define EFMOOJFEGNO_PKBCFFGAJHE_OFFSET UNITYSDK_OFFSET(0x14821760)

inline static constexpr unsigned int EFMOOJFEGNO_TypeDefinitionIndex = 79757;

	class EFMOOJFEGNO : public ::System::Object
	{
	public:
		::JMHHBMNIJJB* EEFMDEHLLFI; // 0x10
		::HLJNBBHKKMI* PDENFEFCAGN; // 0x18
		// static const ::System::Object PIGHCKKPMJB; // 0x0
		::System::Void _ctor(::JMHHBMNIJJB* a1, ::HLJNBBHKKMI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::JMHHBMNIJJB*, ::HLJNBBHKKMI*))((::PBYTE)hIl2Cpp + EFMOOJFEGNO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Int32 DIPDIJDJCLF(::NABBMLGAIBK a1, ::System::Int32 a2, ::DOOKIBGLODI a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Quaternion a5, ::System::Single a6, ::System::String* a7)
		{
			return ((::System::Int32(*)(::PVOID, ::NABBMLGAIBK, ::System::Int32, ::DOOKIBGLODI, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + EFMOOJFEGNO_DIPDIJDJCLF_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Int32 DILJLHLPOKC(::NABBMLGAIBK a1, ::DOOKIBGLODI a2, ::System::Int32 a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Quaternion a5, ::System::Single a6, ::System::String* a7)
		{
			return ((::System::Int32(*)(::PVOID, ::NABBMLGAIBK, ::DOOKIBGLODI, ::System::Int32, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + EFMOOJFEGNO_DILJLHLPOKC_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void EBDPPBHFPPM(::RPG::GameCore::GameEntity* a1, ::LPHINGPIEAJ* a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Quaternion a4, ::System::String* a5, ::System::UInt32 a6, ::System::UInt32 a7, ::UnityEngine::Vector3 a8, ::UnityEngine::Vector3 a9, ::UnityEngine::Vector3 a10, ::UnityEngine::Vector3 a11, ::UnityEngine::Vector3 a12, ::System::String* a13)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::LPHINGPIEAJ*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::String*, ::System::UInt32, ::System::UInt32, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::String*))((::PBYTE)hIl2Cpp + EFMOOJFEGNO_EBDPPBHFPPM_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
		}

		::System::Void HNLLKFGLCIM(::LPHINGPIEAJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LPHINGPIEAJ*))((::PBYTE)hIl2Cpp + EFMOOJFEGNO_HNLLKFGLCIM_OFFSET))(this, a1);
		}

		::System::Void EHOMMOJOJDE(::LPHINGPIEAJ* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::LPHINGPIEAJ*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + EFMOOJFEGNO_EHOMMOJOJDE_OFFSET))(this, a1, a2);
		}

		::System::Void PKBCFFGAJHE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFMOOJFEGNO_PKBCFFGAJHE_OFFSET))(this);
		}

	};
