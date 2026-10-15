#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DGICFAFGCPA.h"
class CCFBPCBMINH;
namespace Code::Rendering::EnvironmentSystemV2 { class EnvV2ParamPreset; }
namespace System { class String; }

#define BECMNNFPMCD_BIHKNODHIDI_OFFSET UNITYSDK_OFFSET(0x163100F0)
#define BECMNNFPMCD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x16310090)
#define BECMNNFPMCD_CTOR_OFFSET UNITYSDK_OFFSET(0x16310060)
#define BECMNNFPMCD_DGPLBNAIIGN_OFFSET UNITYSDK_OFFSET(0x163100A0)
#define BECMNNFPMCD_GMFKFFBMACL_OFFSET UNITYSDK_OFFSET(0x16310300)
#define BECMNNFPMCD_KBFDFOGDILL_OFFSET UNITYSDK_OFFSET(0x16310140)
#define BECMNNFPMCD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x16310350)

inline static constexpr unsigned int BECMNNFPMCD_TypeDefinitionIndex = 49191;

	class BECMNNFPMCD : public ::DGICFAFGCPA
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BECMNNFPMCD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Code::Rendering::EnvironmentSystemV2::EnvV2ParamPreset* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Code::Rendering::EnvironmentSystemV2::EnvV2ParamPreset*))((::PBYTE)hIl2Cpp + BECMNNFPMCD_CTOR_1_OFFSET))(this, a1);
		}

		::System::Void DGPLBNAIIGN(::CCFBPCBMINH* a1, ::CCFBPCBMINH* a2)
		{
			return ((::System::Void(*)(::PVOID, ::CCFBPCBMINH*, ::CCFBPCBMINH*))((::PBYTE)hIl2Cpp + BECMNNFPMCD_DGPLBNAIIGN_OFFSET))(this, a1, a2);
		}

		::System::Void BIHKNODHIDI(::CCFBPCBMINH* a1, ::CCFBPCBMINH* a2)
		{
			return ((::System::Void(*)(::PVOID, ::CCFBPCBMINH*, ::CCFBPCBMINH*))((::PBYTE)hIl2Cpp + BECMNNFPMCD_BIHKNODHIDI_OFFSET))(this, a1, a2);
		}

		::System::Void KBFDFOGDILL(::CCFBPCBMINH* a1, ::CCFBPCBMINH* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::CCFBPCBMINH*, ::CCFBPCBMINH*, ::System::Single))((::PBYTE)hIl2Cpp + BECMNNFPMCD_KBFDFOGDILL_OFFSET))(this, a1, a2, a3);
		}

		::System::Void GMFKFFBMACL(::CCFBPCBMINH* a1, ::CCFBPCBMINH* a2)
		{
			return ((::System::Void(*)(::PVOID, ::CCFBPCBMINH*, ::CCFBPCBMINH*))((::PBYTE)hIl2Cpp + BECMNNFPMCD_GMFKFFBMACL_OFFSET))(this, a1, a2);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BECMNNFPMCD_TOSTRING_OFFSET))(this);
		}

	};
