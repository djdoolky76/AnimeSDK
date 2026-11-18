#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CLGFCPPFINJ;

#define ADJNAJHAOHE_BHCECMHNMIK_GNLOAKDLFPM_OFFSET UNITYSDK_OFFSET(0x16FD6ED0)
#define ADJNAJHAOHE_BHCECMHNMIK__CTOR_OFFSET UNITYSDK_OFFSET(0x16FD6EC0)

inline static constexpr unsigned int ADJNAJHAOHE_BHCECMHNMIK_TypeDefinitionIndex = 41395;

class ADJNAJHAOHE_BHCECMHNMIK : public ::System::Object
{
public:
	::Il2CppArray<::System::Int32>* NCFOAMEIOGB; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADJNAJHAOHE_BHCECMHNMIK__CTOR_OFFSET))(this);
	}

	::System::Boolean GNLOAKDLFPM(::CLGFCPPFINJ* CBLGCIFLMKL)
	{
		return ((::System::Boolean(*)(::PVOID, ::CLGFCPPFINJ*))((::PBYTE)hIl2Cpp + ADJNAJHAOHE_BHCECMHNMIK_GNLOAKDLFPM_OFFSET))(this, CBLGCIFLMKL);
	}
};
