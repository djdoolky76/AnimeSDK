#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KBLELMJDBEA;
class MFKLCJHKNBK;
class PKHHHKPOCDC;

#define PKHHHKPOCDC_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xC2B3550)
#define PKHHHKPOCDC_CTOR_OFFSET UNITYSDK_OFFSET(0xC2B35E0)
#define PKHHHKPOCDC_EXECUTE_OFFSET UNITYSDK_OFFSET(0xC2B36E0)
#define PKHHHKPOCDC_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xC2B35F0)

inline static constexpr unsigned int PKHHHKPOCDC_TypeDefinitionIndex = 75756;

	class PKHHHKPOCDC : public ::System::Object
	{
	public:
		::MFKLCJHKNBK* FKINCGODJEP; // 0x10
		::KBLELMJDBEA* ADJNOFMEIKM; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKHHHKPOCDC_CTOR_OFFSET))(this);
		}

		static ::PKHHHKPOCDC* BPLPBPMEODA(::MFKLCJHKNBK* a1, ::KBLELMJDBEA* a2)
		{
			return ((::PKHHHKPOCDC*(*)(::MFKLCJHKNBK*, ::KBLELMJDBEA*))((::PBYTE)hIl2Cpp + PKHHHKPOCDC_BPLPBPMEODA_OFFSET))(a1, a2);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKHHHKPOCDC_INITIALIZE_OFFSET))(this);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKHHHKPOCDC_EXECUTE_OFFSET))(this);
		}

	};
