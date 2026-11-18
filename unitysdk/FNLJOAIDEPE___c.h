#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NEOKPBGNDPA.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define FNLJOAIDEPE___C_ACIGKBDEHNG_OFFSET UNITYSDK_OFFSET(0xBB707C0)
#define FNLJOAIDEPE___C_EEBAEOCAFEO_OFFSET UNITYSDK_OFFSET(0xBB70760)
#define FNLJOAIDEPE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xBB70710)
#define FNLJOAIDEPE___C__CTOR_OFFSET UNITYSDK_OFFSET(0xBB70750)

inline static constexpr unsigned int FNLJOAIDEPE___c_TypeDefinitionIndex = 69958;

class FNLJOAIDEPE___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(FNLJOAIDEPE___c_TypeDefinitionIndex)->GetStaticField(0x40920);
	}
	static ::System::Func_2<::NEOKPBGNDPA, ::UnityEngine::Vector3>** StaticGet___9__16_0()
	{
		return (::System::Func_2<::NEOKPBGNDPA, ::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(FNLJOAIDEPE___c_TypeDefinitionIndex)->GetStaticField(0x40928);
	}
	static ::System::Func_2<::NEOKPBGNDPA, ::UnityEngine::Vector3>** StaticGet___9__16_1()
	{
		return (::System::Func_2<::NEOKPBGNDPA, ::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(FNLJOAIDEPE___c_TypeDefinitionIndex)->GetStaticField(0x40930);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FNLJOAIDEPE___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNLJOAIDEPE___C__CTOR_OFFSET))(this);
	}

	::UnityEngine::Vector3 EEBAEOCAFEO(::NEOKPBGNDPA IGAAKDOIPNN)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::NEOKPBGNDPA))((::PBYTE)hIl2Cpp + FNLJOAIDEPE___C_EEBAEOCAFEO_OFFSET))(this, IGAAKDOIPNN);
	}

	::UnityEngine::Vector3 ACIGKBDEHNG(::NEOKPBGNDPA IGAAKDOIPNN)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::NEOKPBGNDPA))((::PBYTE)hIl2Cpp + FNLJOAIDEPE___C_ACIGKBDEHNG_OFFSET))(this, IGAAKDOIPNN);
	}
};
