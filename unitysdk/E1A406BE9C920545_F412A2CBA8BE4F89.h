#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class E1A406BE9C920545;
namespace System { class Object; }
namespace System { class String; }

#define E1A406BE9C920545_F412A2CBA8BE4F89_INVOKE_OFFSET UNITYSDK_OFFSET(0x1FE7C20)
#define E1A406BE9C920545_F412A2CBA8BE4F89__CTOR_OFFSET UNITYSDK_OFFSET(0x1FE7E70)

inline static constexpr unsigned int E1A406BE9C920545_F412A2CBA8BE4F89_TypeDefinitionIndex = 8090;

class E1A406BE9C920545_F412A2CBA8BE4F89 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + E1A406BE9C920545_F412A2CBA8BE4F89__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::Void Invoke(::E1A406BE9C920545* B08D041A4C2E0EAA, ::System::String* B960AC235824C6C8, ::System::Int32 B3F53603F39CD6A9, ::System::String* A7714DE08D5D7E93)
	{
		return ((::System::Void(*)(::PVOID, ::E1A406BE9C920545*, ::System::String*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + E1A406BE9C920545_F412A2CBA8BE4F89_INVOKE_OFFSET))(this, B08D041A4C2E0EAA, B960AC235824C6C8, B3F53603F39CD6A9, A7714DE08D5D7E93);
	}
};
