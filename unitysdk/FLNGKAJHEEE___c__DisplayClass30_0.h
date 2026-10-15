#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IAJGGEMFOMB;
class NKIJFPHFJCO;

#define FLNGKAJHEEE___C__DISPLAYCLASS30_0_CTOR_OFFSET UNITYSDK_OFFSET(0x15835420)
#define FLNGKAJHEEE___C__DISPLAYCLASS30_0___ONCHIPPIECEROTATED_B__0_OFFSET UNITYSDK_OFFSET(0x15836150)

inline static constexpr unsigned int FLNGKAJHEEE___c__DisplayClass30_0_TypeDefinitionIndex = 79477;

	class FLNGKAJHEEE___c__DisplayClass30_0 : public ::System::Object
	{
	public:
		::NKIJFPHFJCO* piece; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLNGKAJHEEE___C__DISPLAYCLASS30_0_CTOR_OFFSET))(this);
		}

		::System::Boolean __OnChipPieceRotated_b__0(::IAJGGEMFOMB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IAJGGEMFOMB*))((::PBYTE)hIl2Cpp + FLNGKAJHEEE___C__DISPLAYCLASS30_0___ONCHIPPIECEROTATED_B__0_OFFSET))(this, a1);
		}

	};
