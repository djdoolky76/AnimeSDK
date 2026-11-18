#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DEOKAMDBJJH;
namespace System { template <typename T1, typename T2> class Func_2; }

#define APNMGOHIMKO___C_PAILMMHIBLA_OFFSET UNITYSDK_OFFSET(0x14C28630)
#define APNMGOHIMKO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14C285E0)
#define APNMGOHIMKO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14C28620)

inline static constexpr unsigned int APNMGOHIMKO___c_TypeDefinitionIndex = 71167;

class APNMGOHIMKO___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(APNMGOHIMKO___c_TypeDefinitionIndex)->GetStaticField(0x496E0);
	}
	static ::System::Func_2<::DEOKAMDBJJH*, ::System::Boolean>** StaticGet___9__49_0()
	{
		return (::System::Func_2<::DEOKAMDBJJH*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(APNMGOHIMKO___c_TypeDefinitionIndex)->GetStaticField(0x496E8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + APNMGOHIMKO___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APNMGOHIMKO___C__CTOR_OFFSET))(this);
	}

	::System::Boolean PAILMMHIBLA(::DEOKAMDBJJH* HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::DEOKAMDBJJH*))((::PBYTE)hIl2Cpp + APNMGOHIMKO___C_PAILMMHIBLA_OFFSET))(this, HHIJHDFHPOI);
	}
};
