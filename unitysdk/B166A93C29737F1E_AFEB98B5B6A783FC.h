#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B611DB0AB1B594D1.h"
#include "unitysdk/System/MulticastDelegate.h"

class A562B26E18EFF98F;
namespace System { class Object; }

#define B166A93C29737F1E_AFEB98B5B6A783FC_INVOKE_OFFSET UNITYSDK_OFFSET(0x1F7B8B0)
#define B166A93C29737F1E_AFEB98B5B6A783FC__CTOR_OFFSET UNITYSDK_OFFSET(0x20A3330)

inline static constexpr unsigned int B166A93C29737F1E_AFEB98B5B6A783FC_TypeDefinitionIndex = 8613;

class B166A93C29737F1E_AFEB98B5B6A783FC : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + B166A93C29737F1E_AFEB98B5B6A783FC__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::Void Invoke(::System::Object* F4860F6B04C593FA, ::B611DB0AB1B594D1 F8CA7D21DC4D02B8, ::A562B26E18EFF98F* AD79F219B802C145)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::B611DB0AB1B594D1, ::A562B26E18EFF98F*))((::PBYTE)hIl2Cpp + B166A93C29737F1E_AFEB98B5B6A783FC_INVOKE_OFFSET))(this, F4860F6B04C593FA, F8CA7D21DC4D02B8, AD79F219B802C145);
	}
};
