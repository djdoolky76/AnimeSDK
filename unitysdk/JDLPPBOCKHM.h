#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EFODGECFLLC;
class PEEDLCHFAFL;
namespace System { class String; }

#define JDLPPBOCKHM_ACKALNJFKOG_OFFSET UNITYSDK_OFFSET(0xB91EBA0)
#define JDLPPBOCKHM_CTOR_OFFSET UNITYSDK_OFFSET(0xB91EAD0)
#define JDLPPBOCKHM_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB91EC00)
#define JDLPPBOCKHM_GGHDDIJONEP_OFFSET UNITYSDK_OFFSET(0xB91EAE0)
#define JDLPPBOCKHM_OCCOBDOOLIH_OFFSET UNITYSDK_OFFSET(0xB91EB50)

inline static constexpr unsigned int JDLPPBOCKHM_TypeDefinitionIndex = 79231;

	class JDLPPBOCKHM : public ::System::Object
	{
	public:
		::EFODGECFLLC* FKINCGODJEP; // 0x10
		::PEEDLCHFAFL* PDENFEFCAGN; // 0x18
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
