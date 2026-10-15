#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class NILCNHEGMDG;
namespace System { class String; }

#define NILCNHEGMDG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D1E60D0)
#define NILCNHEGMDG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D1E5FA0)

inline static constexpr unsigned int NILCNHEGMDG_TypeDefinitionIndex = 11661;

	class NILCNHEGMDG : public ::System::Object
	{
	public:
		::System::String* LCGBMLNLHLC; // 0x10
		::System::UInt32 PHFMCACHFIJ; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NILCNHEGMDG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::NILCNHEGMDG* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::NILCNHEGMDG*))((::PBYTE)hIl2Cpp + NILCNHEGMDG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
