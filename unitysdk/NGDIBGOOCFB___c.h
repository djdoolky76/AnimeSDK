#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class JKOIGPOFKBN;
namespace System { template <typename T> class Action_1; }

#define NGDIBGOOCFB___C_LKPPNJJMJCP_OFFSET UNITYSDK_OFFSET(0x10D758F0)
#define NGDIBGOOCFB___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x10D758A0)
#define NGDIBGOOCFB___C__CTOR_OFFSET UNITYSDK_OFFSET(0x10D758E0)

inline static constexpr unsigned int NGDIBGOOCFB___c_TypeDefinitionIndex = 89419;

class NGDIBGOOCFB___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(NGDIBGOOCFB___c_TypeDefinitionIndex)->GetStaticField(0x4C680);
	}
	static ::System::Action_1<::JKOIGPOFKBN*>** StaticGet___9__5_0()
	{
		return (::System::Action_1<::JKOIGPOFKBN*>**)Il2CppClass::FromTypeDefinitionIndex(NGDIBGOOCFB___c_TypeDefinitionIndex)->GetStaticField(0x4C688);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NGDIBGOOCFB___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGDIBGOOCFB___C__CTOR_OFFSET))(this);
	}

	::System::Void LKPPNJJMJCP(::JKOIGPOFKBN* HHIJHDFHPOI)
	{
		return ((::System::Void(*)(::PVOID, ::JKOIGPOFKBN*))((::PBYTE)hIl2Cpp + NGDIBGOOCFB___C_LKPPNJJMJCP_OFFSET))(this, HHIJHDFHPOI);
	}
};
