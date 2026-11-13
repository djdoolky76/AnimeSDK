#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JOGBIBJLPJB.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
class HNGIHOODNMB;

#define HNGIHOODNMB_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x1A36AB70)
#define HNGIHOODNMB_CTOR_OFFSET UNITYSDK_OFFSET(0x1A36AB60)

inline static constexpr unsigned int HNGIHOODNMB_TypeDefinitionIndex = 71284;

	class HNGIHOODNMB : public ::System::Object
	{
	public:
		::JOGBIBJLPJB GAKAHECPNDF; // 0x10
		::JOGBIBJLPJB GCHIGPEHCAL; // 0x18
		::System::Void _ctor(::JOGBIBJLPJB a1, ::JOGBIBJLPJB a2)
		{
			return ((::System::Void(*)(::PVOID, ::JOGBIBJLPJB, ::JOGBIBJLPJB))((::PBYTE)hIl2Cpp + HNGIHOODNMB_CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::ValueTuple_2<::HNGIHOODNMB*, ::HNGIHOODNMB*> BPLPBPMEODA(::JOGBIBJLPJB a1, ::JOGBIBJLPJB a2)
		{
			return ((::System::ValueTuple_2<::HNGIHOODNMB*, ::HNGIHOODNMB*>(*)(::JOGBIBJLPJB, ::JOGBIBJLPJB))((::PBYTE)hIl2Cpp + HNGIHOODNMB_BPLPBPMEODA_OFFSET))(a1, a2);
		}

	};
