#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EOEELFBJNBG;
class FCOEMCEDLNL;
class MMIGBLMALCF;

#define MMIGBLMALCF_CTOR_OFFSET UNITYSDK_OFFSET(0x1D1D1C70)
#define MMIGBLMALCF_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D1D1B20)

inline static constexpr unsigned int MMIGBLMALCF_TypeDefinitionIndex = 13503;

	class MMIGBLMALCF : public ::System::Object
	{
	public:
		::Il2CppArray<::EOEELFBJNBG*>* MGNHKOHFLPO; // 0x10
		::System::UInt32 PNPJBPCMINL; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMIGBLMALCF_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::MMIGBLMALCF* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::MMIGBLMALCF*))((::PBYTE)hIl2Cpp + MMIGBLMALCF_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
