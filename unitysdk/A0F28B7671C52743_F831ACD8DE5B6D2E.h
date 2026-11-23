#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }
namespace System { class String; }

#define A0F28B7671C52743_F831ACD8DE5B6D2E_INVOKE_OFFSET UNITYSDK_OFFSET(0x1F7B8B0)
#define A0F28B7671C52743_F831ACD8DE5B6D2E__CTOR_OFFSET UNITYSDK_OFFSET(0x3A0EAC0)

inline static constexpr unsigned int A0F28B7671C52743_F831ACD8DE5B6D2E_TypeDefinitionIndex = 12778;

class A0F28B7671C52743_F831ACD8DE5B6D2E : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + A0F28B7671C52743_F831ACD8DE5B6D2E__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::Void Invoke(::System::String* F01B486E65E8AFEB, ::System::String* BB2342E8F43B62EA, ::System::Boolean F381F2DDA63E7FDA)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + A0F28B7671C52743_F831ACD8DE5B6D2E_INVOKE_OFFSET))(this, F01B486E65E8AFEB, BB2342E8F43B62EA, F381F2DDA63E7FDA);
	}
};
