#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class OHIAJFJDKAO;

#define OHIAJFJDKAO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D2793C0)
#define OHIAJFJDKAO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D2792D0)

inline static constexpr unsigned int OHIAJFJDKAO_TypeDefinitionIndex = 11274;

	class OHIAJFJDKAO : public ::System::Object
	{
	public:
		::System::UInt32 LJHECKCGJCJ; // 0x10
		::System::UInt32 PDOJDPDCJOH; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHIAJFJDKAO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::OHIAJFJDKAO* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::OHIAJFJDKAO*))((::PBYTE)hIl2Cpp + OHIAJFJDKAO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
