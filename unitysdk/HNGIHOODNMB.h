#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JOGBIBJLPJB.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple.h"
class HNGIHOODNMB;

#define HNGIHOODNMB_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x15D938B0)
#define HNGIHOODNMB_CTOR_OFFSET UNITYSDK_OFFSET(0x15D938A0)

inline static constexpr unsigned int HNGIHOODNMB_TypeDefinitionIndex = 69330;

	class HNGIHOODNMB : public ::System::Object
	{
	public:
		::JOGBIBJLPJB GCHIGPEHCAL; // 0x10
		::JOGBIBJLPJB GAKAHECPNDF; // 0x18
		::System::Void _ctor(::JOGBIBJLPJB a1, ::JOGBIBJLPJB a2)
		{
			return ((::System::Void(*)(::PVOID, ::JOGBIBJLPJB, ::JOGBIBJLPJB))((::PBYTE)hIl2Cpp + HNGIHOODNMB_CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::ValueTuple BPLPBPMEODA(::JOGBIBJLPJB a1, ::JOGBIBJLPJB a2)
		{
			return ((::System::ValueTuple(*)(::JOGBIBJLPJB, ::JOGBIBJLPJB))((::PBYTE)hIl2Cpp + HNGIHOODNMB_BPLPBPMEODA_OFFSET))(a1, a2);
		}

	};
