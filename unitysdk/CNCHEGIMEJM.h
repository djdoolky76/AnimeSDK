#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CNCHEGIMEJM;
class FCOEMCEDLNL;

#define CNCHEGIMEJM_CTOR_OFFSET UNITYSDK_OFFSET(0x1DCB1DF0)
#define CNCHEGIMEJM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DCB1D00)

inline static constexpr unsigned int CNCHEGIMEJM_TypeDefinitionIndex = 11409;

	class CNCHEGIMEJM : public ::System::Object
	{
	public:
		::System::UInt32 BOKJJKFCFME; // 0x10
		::System::UInt32 AAGKEBFHLMC; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNCHEGIMEJM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::CNCHEGIMEJM* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::CNCHEGIMEJM*))((::PBYTE)hIl2Cpp + CNCHEGIMEJM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
