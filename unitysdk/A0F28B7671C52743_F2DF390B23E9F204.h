#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BED79290917896D4/FB6908D218335770.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }

#define A0F28B7671C52743_F2DF390B23E9F204_INVOKE_OFFSET UNITYSDK_OFFSET(0x1FE7F90)
#define A0F28B7671C52743_F2DF390B23E9F204__CTOR_OFFSET UNITYSDK_OFFSET(0x32B6460)

inline static constexpr unsigned int A0F28B7671C52743_F2DF390B23E9F204_TypeDefinitionIndex = 12820;

class A0F28B7671C52743_F2DF390B23E9F204 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + A0F28B7671C52743_F2DF390B23E9F204__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::Void Invoke(::System::Object* B8334CB64332323A, ::BED79290917896D4::FB6908D218335770 A6284C7249949321)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::BED79290917896D4::FB6908D218335770))((::PBYTE)hIl2Cpp + A0F28B7671C52743_F2DF390B23E9F204_INVOKE_OFFSET))(this, B8334CB64332323A, A6284C7249949321);
	}
};
