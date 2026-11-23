#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class E66425FE1E390962;
namespace System { template <typename T> class Func_1; }

#define F739CBFD704CFC10_A2364272899F8BAD_OFFSET UNITYSDK_OFFSET(0x42828E0)

inline static constexpr unsigned int F739CBFD704CFC10_TypeDefinitionIndex = 13941;

class F739CBFD704CFC10 : public ::System::Object
{
public:
	static ::System::Func_1<::E66425FE1E390962*>** StaticGet_B98034609DA285D5()
	{
		return (::System::Func_1<::E66425FE1E390962*>**)Il2CppClass::FromTypeDefinitionIndex(F739CBFD704CFC10_TypeDefinitionIndex)->GetStaticField(0x0);
	}

	static ::E66425FE1E390962* A2364272899F8BAD()
	{
		return ((::E66425FE1E390962*(*)())((::PBYTE)hIl2Cpp + F739CBFD704CFC10_A2364272899F8BAD_OFFSET))();
	}
};
