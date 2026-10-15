#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class PLPMBINCFAI;
namespace System { class String; }

#define PLPMBINCFAI_CTOR_OFFSET UNITYSDK_OFFSET(0x1D2D6F60)
#define PLPMBINCFAI_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D2D6DF0)

inline static constexpr unsigned int PLPMBINCFAI_TypeDefinitionIndex = 14440;

	class PLPMBINCFAI : public ::System::Object
	{
	public:
		::System::String* DOPHFLLNGPJ; // 0x10
		::System::UInt32 LLDCHLHNADA; // 0x18
		::System::UInt32 PHFMCACHFIJ; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLPMBINCFAI_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::PLPMBINCFAI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::PLPMBINCFAI*))((::PBYTE)hIl2Cpp + PLPMBINCFAI_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
