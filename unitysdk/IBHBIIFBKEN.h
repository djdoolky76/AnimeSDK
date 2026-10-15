#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LKLEBOOCADM.h"
class IAFKJCICCOP;
class IDMHNMOLHKN;

#define IBHBIIFBKEN_CTOR_OFFSET UNITYSDK_OFFSET(0x15E27FD0)
#define IBHBIIFBKEN_EFHOJNKCMDL_OFFSET UNITYSDK_OFFSET(0x15E27FE0)

inline static constexpr unsigned int IBHBIIFBKEN_TypeDefinitionIndex = 67134;

	class IBHBIIFBKEN : public ::LKLEBOOCADM
	{
	public:
		::IDMHNMOLHKN* LEEMNOCGBOJ; // 0x18
		::System::Void _ctor(::IAFKJCICCOP* a1, ::IDMHNMOLHKN* a2)
		{
			return ((::System::Void(*)(::PVOID, ::IAFKJCICCOP*, ::IDMHNMOLHKN*))((::PBYTE)hIl2Cpp + IBHBIIFBKEN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void EFHOJNKCMDL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBHBIIFBKEN_EFHOJNKCMDL_OFFSET))(this);
		}

	};
