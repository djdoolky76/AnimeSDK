#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class GNPKFEMELOI;
namespace System { class String; }

#define GNPKFEMELOI_CTOR_OFFSET UNITYSDK_OFFSET(0x187A3D50)
#define GNPKFEMELOI_PPEGOIODAKI_OFFSET UNITYSDK_OFFSET(0x187A3CA0)

inline static constexpr unsigned int GNPKFEMELOI_TypeDefinitionIndex = 71496;

	class GNPKFEMELOI : public ::System::Object
	{
	public:
		::System::String* KGJFOKOJAKL; // 0x10
		::UnityEngine::Vector3 KACAINDGKPI; // 0x18
		::System::Single CJKMNJIGMAI; // 0x24
		::System::Single FJAAFBHHKAM; // 0x28
		::System::Single NCKLCBPEGML; // 0x2C
		::UnityEngine::Vector3 PDLLKALMODP; // 0x30
		::System::Single GAFENHHEBPG; // 0x3C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNPKFEMELOI_CTOR_OFFSET))(this);
		}

		::System::Void PPEGOIODAKI(::GNPKFEMELOI* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::GNPKFEMELOI*, ::System::Boolean))((::PBYTE)hIl2Cpp + GNPKFEMELOI_PPEGOIODAKI_OFFSET))(this, a1, a2);
		}

	};
