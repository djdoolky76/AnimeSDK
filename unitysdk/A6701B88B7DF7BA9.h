#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define A6701B88B7DF7BA9_A68C7B7988A81FDD_OFFSET UNITYSDK_OFFSET(0x294D660)
#define A6701B88B7DF7BA9_E24D42BEB8E3399C_OFFSET UNITYSDK_OFFSET(0x294D750)
#define A6701B88B7DF7BA9__CTOR_OFFSET UNITYSDK_OFFSET(0x294D820)

inline static constexpr unsigned int A6701B88B7DF7BA9_TypeDefinitionIndex = 15403;

class A6701B88B7DF7BA9 : public ::System::Object
{
public:
	static ::A6701B88B7DF7BA9** StaticGet_E0E7A5F93551109B()
	{
		return (::A6701B88B7DF7BA9**)Il2CppClass::FromTypeDefinitionIndex(A6701B88B7DF7BA9_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>* F9B3BA25BD327981; // 0x10

	::System::Void E24D42BEB8E3399C(::System::Int32 B388EC7BF992A18E)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + A6701B88B7DF7BA9_E24D42BEB8E3399C_OFFSET))(this, B388EC7BF992A18E);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A6701B88B7DF7BA9__CTOR_OFFSET))(this);
	}

	static ::A6701B88B7DF7BA9* A68C7B7988A81FDD()
	{
		return ((::A6701B88B7DF7BA9*(*)())((::PBYTE)hIl2Cpp + A6701B88B7DF7BA9_A68C7B7988A81FDD_OFFSET))();
	}
};
