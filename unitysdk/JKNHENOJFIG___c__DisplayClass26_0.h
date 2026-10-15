#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JKNHENOJFIG;
class NGOFKJDNLPB;

#define JKNHENOJFIG___C__DISPLAYCLASS26_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB222140)
#define JKNHENOJFIG___C__DISPLAYCLASS26_0__SETDRIVER_B__0_OFFSET UNITYSDK_OFFSET(0xB223580)

inline static constexpr unsigned int JKNHENOJFIG___c__DisplayClass26_0_TypeDefinitionIndex = 81710;

	class JKNHENOJFIG___c__DisplayClass26_0 : public ::System::Object
	{
	public:
		::JKNHENOJFIG* __4__this; // 0x10
		::System::UInt32 driverID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKNHENOJFIG___C__DISPLAYCLASS26_0_CTOR_OFFSET))(this);
		}

		::System::Void _SetDriver_b__0(::NGOFKJDNLPB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NGOFKJDNLPB*))((::PBYTE)hIl2Cpp + JKNHENOJFIG___C__DISPLAYCLASS26_0__SETDRIVER_B__0_OFFSET))(this, a1);
		}

	};
