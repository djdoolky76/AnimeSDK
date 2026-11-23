#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Mesh; }

#define F649A50E87ED992E_A66245FDD0182C57_OFFSET UNITYSDK_OFFSET(0x28EE580)
#define F649A50E87ED992E_FCC7443573DD0222_OFFSET UNITYSDK_OFFSET(0x28EE480)

inline static constexpr unsigned int F649A50E87ED992E_TypeDefinitionIndex = 16443;

class F649A50E87ED992E : public ::System::Object
{
public:
	static ::UnityEngine::Mesh** StaticGet_BB07EF949C54E5EF()
	{
		return (::UnityEngine::Mesh**)Il2CppClass::FromTypeDefinitionIndex(F649A50E87ED992E_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Boolean* StaticGet_BB65750B313A18AD()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(F649A50E87ED992E_TypeDefinitionIndex)->GetStaticField(0x8);
	}

	static ::System::Void FCC7443573DD0222()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + F649A50E87ED992E_FCC7443573DD0222_OFFSET))();
	}

	static ::UnityEngine::Mesh* A66245FDD0182C57()
	{
		return ((::UnityEngine::Mesh*(*)())((::PBYTE)hIl2Cpp + F649A50E87ED992E_A66245FDD0182C57_OFFSET))();
	}
};
