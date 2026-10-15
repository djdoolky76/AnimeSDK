#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class MPFJBKLKEPC;
namespace System { class String; }

#define MPFJBKLKEPC_CTOR_OFFSET UNITYSDK_OFFSET(0x1D1DF050)
#define MPFJBKLKEPC_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D1DEF20)

inline static constexpr unsigned int MPFJBKLKEPC_TypeDefinitionIndex = 11631;

	class MPFJBKLKEPC : public ::System::Object
	{
	public:
		::System::String* NNACKOBKFGE; // 0x10
		::System::UInt32 LIPDNKKCKNN; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPFJBKLKEPC_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::MPFJBKLKEPC* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::MPFJBKLKEPC*))((::PBYTE)hIl2Cpp + MPFJBKLKEPC_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
