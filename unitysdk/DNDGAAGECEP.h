#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define DNDGAAGECEP_MKCIINGJBFD_1_OFFSET UNITYSDK_OFFSET(0x1DD37690)
#define DNDGAAGECEP_MKCIINGJBFD_2_OFFSET UNITYSDK_OFFSET(0x1DD37760)
#define DNDGAAGECEP_MKCIINGJBFD_OFFSET UNITYSDK_OFFSET(0x1DD37610)
#define DNDGAAGECEP_PJNNPOKJEFD_OFFSET UNITYSDK_OFFSET(0x1DD375A0)

inline static constexpr unsigned int DNDGAAGECEP_TypeDefinitionIndex = 6341;

	class DNDGAAGECEP : public ::System::Object
	{
	public:
		static ::System::Single PJNNPOKJEFD(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + DNDGAAGECEP_PJNNPOKJEFD_OFFSET))(a1, a2, a3);
		}

		static ::System::Single MKCIINGJBFD(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + DNDGAAGECEP_MKCIINGJBFD_OFFSET))(a1, a2, a3, a4);
		}

		static ::UnityEngine::Vector3 MKCIINGJBFD_1(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + DNDGAAGECEP_MKCIINGJBFD_1_OFFSET))(a1, a2, a3, a4);
		}

		static ::UnityEngine::Quaternion MKCIINGJBFD_2(::UnityEngine::Quaternion a1, ::UnityEngine::Quaternion a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::UnityEngine::Quaternion(*)(::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + DNDGAAGECEP_MKCIINGJBFD_2_OFFSET))(a1, a2, a3, a4);
		}

	};
