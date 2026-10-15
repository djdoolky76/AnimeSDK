#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AOKFCBEPNNA;
class FCOEMCEDLNL;
namespace System { class String; }

#define AOKFCBEPNNA_CTOR_OFFSET UNITYSDK_OFFSET(0x1CCEA810)
#define AOKFCBEPNNA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CCEA6F0)

inline static constexpr unsigned int AOKFCBEPNNA_TypeDefinitionIndex = 14174;

	class AOKFCBEPNNA : public ::System::Object
	{
	public:
		::System::String* BFLIFKBEOPJ; // 0x10
		::System::Int32 MNDFOPKBHKP; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOKFCBEPNNA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::AOKFCBEPNNA* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::AOKFCBEPNNA*))((::PBYTE)hIl2Cpp + AOKFCBEPNNA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
