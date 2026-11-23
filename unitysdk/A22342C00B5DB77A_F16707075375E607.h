#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class A22342C00B5DB77A_E9CAEB985AB76CC7;
namespace System { class Object; }
namespace System { class String; }

#define A22342C00B5DB77A_F16707075375E607_INVOKE_OFFSET UNITYSDK_OFFSET(0x1FE7F90)
#define A22342C00B5DB77A_F16707075375E607__CTOR_OFFSET UNITYSDK_OFFSET(0x38DDC80)

inline static constexpr unsigned int A22342C00B5DB77A_F16707075375E607_TypeDefinitionIndex = 12848;

class A22342C00B5DB77A_F16707075375E607 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + A22342C00B5DB77A_F16707075375E607__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::Int32 Invoke(::System::String* B29880F033C1F232, ::A22342C00B5DB77A_E9CAEB985AB76CC7* A148D02C64816912)
	{
		return ((::System::Int32(*)(::PVOID, ::System::String*, ::A22342C00B5DB77A_E9CAEB985AB76CC7*))((::PBYTE)hIl2Cpp + A22342C00B5DB77A_F16707075375E607_INVOKE_OFFSET))(this, B29880F033C1F232, A148D02C64816912);
	}
};
