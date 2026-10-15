#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IAJGGEMFOMB;
class NKIJFPHFJCO;

#define FLNGKAJHEEE___C__DISPLAYCLASS29_0_CTOR_OFFSET UNITYSDK_OFFSET(0x15840FC0)
#define FLNGKAJHEEE___C__DISPLAYCLASS29_0___ONCHIPPIECEMOVED_B__0_OFFSET UNITYSDK_OFFSET(0x15841DF0)

inline static constexpr unsigned int FLNGKAJHEEE___c__DisplayClass29_0_TypeDefinitionIndex = 79477;

	class FLNGKAJHEEE___c__DisplayClass29_0 : public ::System::Object
	{
	public:
		::NKIJFPHFJCO* piece; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLNGKAJHEEE___C__DISPLAYCLASS29_0_CTOR_OFFSET))(this);
		}

		::System::Boolean __OnChipPieceMoved_b__0(::IAJGGEMFOMB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IAJGGEMFOMB*))((::PBYTE)hIl2Cpp + FLNGKAJHEEE___C__DISPLAYCLASS29_0___ONCHIPPIECEMOVED_B__0_OFFSET))(this, a1);
		}

	};
