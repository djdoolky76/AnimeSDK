#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BHPMNMMGLHI.h"
class KPBCIIFIAGI;
class PBMDEBCGNMD;

#define MNKMHNEAHLA_CTOR_OFFSET UNITYSDK_OFFSET(0xBA0BD80)
#define MNKMHNEAHLA_HBJLJJAJHOI_OFFSET UNITYSDK_OFFSET(0xBA0BA00)
#define MNKMHNEAHLA_IKJHJCPCJAO_OFFSET UNITYSDK_OFFSET(0xBA0B7B0)
#define MNKMHNEAHLA_JBCOPMNKNMK_OFFSET UNITYSDK_OFFSET(0xBA0BBD0)
#define MNKMHNEAHLA_KAOIHHCJFDO_OFFSET UNITYSDK_OFFSET(0xBA0B7F0)
#define MNKMHNEAHLA_NFPOLGGEFMI_OFFSET UNITYSDK_OFFSET(0xBA0B830)
#define MNKMHNEAHLA_START_OFFSET UNITYSDK_OFFSET(0xBA0BCB0)
#define MNKMHNEAHLA_STOP_OFFSET UNITYSDK_OFFSET(0xBA0BD40)

inline static constexpr unsigned int MNKMHNEAHLA_TypeDefinitionIndex = 81648;

	class MNKMHNEAHLA : public ::BHPMNMMGLHI
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNKMHNEAHLA_CTOR_OFFSET))(this);
		}

		::System::Void IKJHJCPCJAO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNKMHNEAHLA_IKJHJCPCJAO_OFFSET))(this);
		}

		::System::Void KAOIHHCJFDO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNKMHNEAHLA_KAOIHHCJFDO_OFFSET))(this);
		}

		::System::Void NFPOLGGEFMI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNKMHNEAHLA_NFPOLGGEFMI_OFFSET))(this);
		}

		::System::Void HBJLJJAJHOI(::KPBCIIFIAGI* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::KPBCIIFIAGI*, ::System::Boolean))((::PBYTE)hIl2Cpp + MNKMHNEAHLA_HBJLJJAJHOI_OFFSET))(this, a1, a2);
		}

		::System::Void JBCOPMNKNMK(::PBMDEBCGNMD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PBMDEBCGNMD*))((::PBYTE)hIl2Cpp + MNKMHNEAHLA_JBCOPMNKNMK_OFFSET))(this, a1);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNKMHNEAHLA_START_OFFSET))(this);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNKMHNEAHLA_STOP_OFFSET))(this);
		}

	};
