#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine { class Collider; }

#define APNCODNOFLH___C_EEBAGJBIFGM_OFFSET UNITYSDK_OFFSET(0x134EF930)
#define APNCODNOFLH___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x134EF8E0)
#define APNCODNOFLH___C__CTOR_OFFSET UNITYSDK_OFFSET(0x134EF920)

inline static constexpr unsigned int APNCODNOFLH___c_TypeDefinitionIndex = 80725;

class APNCODNOFLH___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(APNCODNOFLH___c_TypeDefinitionIndex)->GetStaticField(0x4B470);
	}
	static ::System::Func_2<::UnityEngine::Collider*, ::System::Boolean>** StaticGet___9__216_0()
	{
		return (::System::Func_2<::UnityEngine::Collider*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(APNCODNOFLH___c_TypeDefinitionIndex)->GetStaticField(0x4B478);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + APNCODNOFLH___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APNCODNOFLH___C__CTOR_OFFSET))(this);
	}

	::System::Boolean EEBAGJBIFGM(::UnityEngine::Collider* EHHHMFKHNAI)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + APNCODNOFLH___C_EEBAGJBIFGM_OFFSET))(this, EHHHMFKHNAI);
	}
};
