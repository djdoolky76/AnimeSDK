#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class KLFHMLJJKLF;

#define KLFHMLJJKLF_CTOR_OFFSET UNITYSDK_OFFSET(0x1D0A5F30)
#define KLFHMLJJKLF_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D0A5E40)

inline static constexpr unsigned int KLFHMLJJKLF_TypeDefinitionIndex = 11557;

	class KLFHMLJJKLF : public ::System::Object
	{
	public:
		::System::UInt32 GNIFLCBGAAA; // 0x10
		::System::UInt32 DHONGKBFCNE; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLFHMLJJKLF_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::KLFHMLJJKLF* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::KLFHMLJJKLF*))((::PBYTE)hIl2Cpp + KLFHMLJJKLF_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
