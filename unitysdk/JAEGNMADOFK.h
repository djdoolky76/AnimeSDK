#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CEJHDLFCJDM;
class IIDHAJDAMDE;
namespace System { class String; }

#define JAEGNMADOFK_CTOR_OFFSET UNITYSDK_OFFSET(0x193231A0)
#define JAEGNMADOFK_DPFOPKIHKNO_OFFSET UNITYSDK_OFFSET(0x19323120)
#define JAEGNMADOFK_NHKPAGBBPMD_OFFSET UNITYSDK_OFFSET(0x19322530)

inline static constexpr unsigned int JAEGNMADOFK_TypeDefinitionIndex = 80077;

	class JAEGNMADOFK : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JAEGNMADOFK_CTOR_OFFSET))(this);
		}

		::System::Boolean NHKPAGBBPMD(::IIDHAJDAMDE* a1, ::CEJHDLFCJDM* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::IIDHAJDAMDE*, ::CEJHDLFCJDM*))((::PBYTE)hIl2Cpp + JAEGNMADOFK_NHKPAGBBPMD_OFFSET))(this, a1, a2);
		}

		static ::System::Void DPFOPKIHKNO(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + JAEGNMADOFK_DPFOPKIHKNO_OFFSET))(a1);
		}

	};
