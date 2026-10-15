#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class KFJKHEKMJKE;
namespace System { class String; }

#define KFJKHEKMJKE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D05F090)
#define KFJKHEKMJKE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D05EF70)

inline static constexpr unsigned int KFJKHEKMJKE_TypeDefinitionIndex = 13902;

	class KFJKHEKMJKE : public ::System::Object
	{
	public:
		::System::String* BFLIFKBEOPJ; // 0x10
		::System::Int16 MNDFOPKBHKP; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFJKHEKMJKE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::KFJKHEKMJKE* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::KFJKHEKMJKE*))((::PBYTE)hIl2Cpp + KFJKHEKMJKE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
