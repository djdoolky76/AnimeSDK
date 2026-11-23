#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class A02C529E4F26A97B;
class B0D6DFB5D7BFA271;
namespace System { template <typename T> class Action_1; }
namespace System::Threading { class AD3C66B368BBC67E; }

#define E98C6688E504623A_A4BF4CF2D7205244_OFFSET UNITYSDK_OFFSET(0x3D00460)
#define E98C6688E504623A_BC904D791396A9C0_OFFSET UNITYSDK_OFFSET(0x3D005D0)
#define E98C6688E504623A__CTOR_OFFSET UNITYSDK_OFFSET(0x3D00660)

inline static constexpr unsigned int E98C6688E504623A_TypeDefinitionIndex = 10791;

class E98C6688E504623A : public ::System::Object
{
public:
	static ::System::Threading::AD3C66B368BBC67E** StaticGet_F76F449E97CCC16F()
	{
		return (::System::Threading::AD3C66B368BBC67E**)Il2CppClass::FromTypeDefinitionIndex(E98C6688E504623A_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	::System::Action_1<::System::Object*>* FDB9F888AD9A8164; // 0x10
	::System::Object* E843E65F450DCAAF; // 0x18
	::A02C529E4F26A97B* B101427E8573EF40; // 0x20
	::B0D6DFB5D7BFA271* B660A1AB24CFBE7D; // 0x28

	::System::Void A4BF4CF2D7205244()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E98C6688E504623A_A4BF4CF2D7205244_OFFSET))(this);
	}

	static ::System::Void BC904D791396A9C0(::System::Object* A86A90C31A146E9C)
	{
		return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + E98C6688E504623A_BC904D791396A9C0_OFFSET))(A86A90C31A146E9C);
	}

	::System::Void _ctor(::System::Action_1<::System::Object*>* E04D2BE64FCE9814, ::System::Object* F67EEBCF75EA295D, ::A02C529E4F26A97B* A6C6DEA921936347, ::B0D6DFB5D7BFA271* F597ED86C9F7C7FD)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*, ::System::Object*, ::A02C529E4F26A97B*, ::B0D6DFB5D7BFA271*))((::PBYTE)hIl2Cpp + E98C6688E504623A__CTOR_OFFSET))(this, E04D2BE64FCE9814, F67EEBCF75EA295D, A6C6DEA921936347, F597ED86C9F7C7FD);
	}
};
