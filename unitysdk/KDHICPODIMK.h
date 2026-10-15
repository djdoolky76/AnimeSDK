#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class KDHICPODIMK;

#define KDHICPODIMK_CTOR_OFFSET UNITYSDK_OFFSET(0x1D051B70)
#define KDHICPODIMK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D051A80)

inline static constexpr unsigned int KDHICPODIMK_TypeDefinitionIndex = 13069;

	class KDHICPODIMK : public ::System::Object
	{
	public:
		::System::UInt32 BFLIFKBEOPJ; // 0x10
		::System::UInt32 MNDFOPKBHKP; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDHICPODIMK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::KDHICPODIMK* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::KDHICPODIMK*))((::PBYTE)hIl2Cpp + KDHICPODIMK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
