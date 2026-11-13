#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KANKEPCJION.h"
namespace System { class Action; }

#define DNLBGJNPCON_CTOR_OFFSET UNITYSDK_OFFSET(0x19195200)
#define DNLBGJNPCON_NJBDJBHEBAN_OFFSET UNITYSDK_OFFSET(0x19195140)
#define DNLBGJNPCON_ODGLEFLLDPI_OFFSET UNITYSDK_OFFSET(0x19195090)

inline static constexpr unsigned int DNLBGJNPCON_TypeDefinitionIndex = 74000;

	class DNLBGJNPCON : public ::KANKEPCJION
	{
	public:
		::System::Action* DIGBPHADHJD; // 0x158
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNLBGJNPCON_CTOR_OFFSET))(this);
		}

		::System::Boolean ODGLEFLLDPI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DNLBGJNPCON_ODGLEFLLDPI_OFFSET))(this);
		}

		::System::Void NJBDJBHEBAN(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DNLBGJNPCON_NJBDJBHEBAN_OFFSET))(this, a1);
		}

	};
