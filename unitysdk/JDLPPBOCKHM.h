#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EFODGECFLLC;
class PEEDLCHFAFL;
namespace System { class String; }

#define JDLPPBOCKHM_ACKALNJFKOG_OFFSET UNITYSDK_OFFSET(0x165C8C20)
#define JDLPPBOCKHM_CTOR_OFFSET UNITYSDK_OFFSET(0x165C8B50)
#define JDLPPBOCKHM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x165C8C80)
#define JDLPPBOCKHM_GGHDDIJONEP_OFFSET UNITYSDK_OFFSET(0x165C8B60)
#define JDLPPBOCKHM_OCCOBDOOLIH_OFFSET UNITYSDK_OFFSET(0x165C8BD0)

inline static constexpr unsigned int JDLPPBOCKHM_TypeDefinitionIndex = 76896;

	class JDLPPBOCKHM : public ::System::Object
	{
	public:
		::PEEDLCHFAFL* PDENFEFCAGN; // 0x10
		::EFODGECFLLC* FKINCGODJEP; // 0x18
		::System::Void _ctor(::EFODGECFLLC* a1, ::PEEDLCHFAFL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::EFODGECFLLC*, ::PEEDLCHFAFL*))((::PBYTE)hIl2Cpp + JDLPPBOCKHM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void GGHDDIJONEP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JDLPPBOCKHM_GGHDDIJONEP_OFFSET))(this, a1);
		}

		::System::Void OCCOBDOOLIH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDLPPBOCKHM_OCCOBDOOLIH_OFFSET))(this);
		}

		::System::Void ACKALNJFKOG(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + JDLPPBOCKHM_ACKALNJFKOG_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDLPPBOCKHM_DISPOSE_OFFSET))(this);
		}

	};
