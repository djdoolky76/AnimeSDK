#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BGJKNDNFJJL;
class FCOEMCEDLNL;
class FHKCLKBHLON;

#define FHKCLKBHLON_CTOR_OFFSET UNITYSDK_OFFSET(0x1CDF12C0)
#define FHKCLKBHLON_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CDF11A0)

inline static constexpr unsigned int FHKCLKBHLON_TypeDefinitionIndex = 13584;

	class FHKCLKBHLON : public ::System::Object
	{
	public:
		::Il2CppArray<::BGJKNDNFJJL*>* MGNHKOHFLPO; // 0x10
		::System::UInt32 PNPJBPCMINL; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHKCLKBHLON_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::FHKCLKBHLON* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::FHKCLKBHLON*))((::PBYTE)hIl2Cpp + FHKCLKBHLON_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
