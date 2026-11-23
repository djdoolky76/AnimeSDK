#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class E1A406BE9C920545;
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define E1A406BE9C920545_A1275A93EC265B56_INVOKE_OFFSET UNITYSDK_OFFSET(0x1FE7C20)
#define E1A406BE9C920545_A1275A93EC265B56__CTOR_OFFSET UNITYSDK_OFFSET(0x1FE7C40)

inline static constexpr unsigned int E1A406BE9C920545_A1275A93EC265B56_TypeDefinitionIndex = 8088;

class E1A406BE9C920545_A1275A93EC265B56 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + E1A406BE9C920545_A1275A93EC265B56__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::Void Invoke(::E1A406BE9C920545* B08D041A4C2E0EAA, ::System::String* EFF983A80A48BB2A, ::System::String* F5BC495013A4369F, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* F0D3F87128A7C4CA)
	{
		return ((::System::Void(*)(::PVOID, ::E1A406BE9C920545*, ::System::String*, ::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + E1A406BE9C920545_A1275A93EC265B56_INVOKE_OFFSET))(this, B08D041A4C2E0EAA, EFF983A80A48BB2A, F5BC495013A4369F, F0D3F87128A7C4CA);
	}
};
