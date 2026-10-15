#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class LHPDHOLNNCC;
class OMAOANEABAP;

#define LHPDHOLNNCC_CTOR_OFFSET UNITYSDK_OFFSET(0x1D0F4DA0)
#define LHPDHOLNNCC_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D0F4C50)

inline static constexpr unsigned int LHPDHOLNNCC_TypeDefinitionIndex = 12895;

	class LHPDHOLNNCC : public ::System::Object
	{
	public:
		::Il2CppArray<::OMAOANEABAP*>* MGNHKOHFLPO; // 0x10
		::System::UInt32 LDGGEPJEKND; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHPDHOLNNCC_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::LHPDHOLNNCC* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::LHPDHOLNNCC*))((::PBYTE)hIl2Cpp + LHPDHOLNNCC_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
