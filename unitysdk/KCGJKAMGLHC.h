#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class IdleLiveCLTriggerRow; }
namespace System { class Action; }
namespace System { class Object; }

#define KCGJKAMGLHC_CTOR_OFFSET UNITYSDK_OFFSET(0xB32FB30)
#define KCGJKAMGLHC_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB32FDB0)
#define KCGJKAMGLHC_DLFDEMDCBAH_OFFSET UNITYSDK_OFFSET(0xB32FCF0)
#define KCGJKAMGLHC_IIOIMDJJEDG_OFFSET UNITYSDK_OFFSET(0xB32FE00)
#define KCGJKAMGLHC_JEBDAFCDCIO_OFFSET UNITYSDK_OFFSET(0xB32FC90)
#define KCGJKAMGLHC_KJENODBPBDI_OFFSET UNITYSDK_OFFSET(0xB32FBE0)

inline static constexpr unsigned int KCGJKAMGLHC_TypeDefinitionIndex = 75449;

	class KCGJKAMGLHC : public ::System::Object
	{
	public:
		::System::Action* LIOAPMDFLPL; // 0x10
		::System::Int32 GMPIKJNNNPG; // 0x18
		::System::Int32 IFAAHCGCHKK; // 0x1C
		::System::Boolean AFLGDFPEMNP; // 0x20
		::System::Void _ctor(::RPG::GameCore::IdleLiveCLTriggerRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::IdleLiveCLTriggerRow*))((::PBYTE)hIl2Cpp + KCGJKAMGLHC_CTOR_OFFSET))(this, a1);
		}

		::System::Void KJENODBPBDI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KCGJKAMGLHC_KJENODBPBDI_OFFSET))(this, a1);
		}

		::System::Void JEBDAFCDCIO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCGJKAMGLHC_JEBDAFCDCIO_OFFSET))(this);
		}

		::System::Void DLFDEMDCBAH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCGJKAMGLHC_DLFDEMDCBAH_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCGJKAMGLHC_DISPOSE_OFFSET))(this);
		}

		::System::Void IIOIMDJJEDG(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + KCGJKAMGLHC_IIOIMDJJEDG_OFFSET))(this, a1);
		}

	};
