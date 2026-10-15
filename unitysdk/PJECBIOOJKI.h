#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class PJECBIOOJKI;
namespace System { class String; }

#define PJECBIOOJKI_CTOR_OFFSET UNITYSDK_OFFSET(0x1D2C7000)
#define PJECBIOOJKI_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D2C6EF0)

inline static constexpr unsigned int PJECBIOOJKI_TypeDefinitionIndex = 13068;

	class PJECBIOOJKI : public ::System::Object
	{
	public:
		::System::String* BFLIFKBEOPJ; // 0x10
		::System::String* MNDFOPKBHKP; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJECBIOOJKI_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::PJECBIOOJKI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::PJECBIOOJKI*))((::PBYTE)hIl2Cpp + PJECBIOOJKI_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
