#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JABEGCBNJCI.h"
class DCABHAIHDJJ;
class FCOEMCEDLNL;

#define DCABHAIHDJJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1EEF6C30)
#define DCABHAIHDJJ_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1EEF6C40)
#define DCABHAIHDJJ_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EEF6C00)

inline static constexpr unsigned int DCABHAIHDJJ_TypeDefinitionIndex = 21878;

	class DCABHAIHDJJ : public ::JABEGCBNJCI
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCABHAIHDJJ_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::DCABHAIHDJJ* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::DCABHAIHDJJ*))((::PBYTE)hIl2Cpp + DCABHAIHDJJ_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::DCABHAIHDJJ* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::DCABHAIHDJJ*))((::PBYTE)hIl2Cpp + DCABHAIHDJJ_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
