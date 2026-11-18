#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define MKFANIOOGFA_CMPFILBHMFP___C_BBIAIIAAONH_OFFSET UNITYSDK_OFFSET(0x14D8B4B0)
#define MKFANIOOGFA_CMPFILBHMFP___C_GHDBGOMLDKJ_OFFSET UNITYSDK_OFFSET(0x14D8B4C0)
#define MKFANIOOGFA_CMPFILBHMFP___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14D8B460)
#define MKFANIOOGFA_CMPFILBHMFP___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14D8B4A0)

inline static constexpr unsigned int MKFANIOOGFA_CMPFILBHMFP___c_TypeDefinitionIndex = 81520;

class MKFANIOOGFA_CMPFILBHMFP___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(MKFANIOOGFA_CMPFILBHMFP___c_TypeDefinitionIndex)->GetStaticField(0x44920);
	}
	static ::System::Func_1<::UnityEngine::Vector3>** StaticGet___9__41_9()
	{
		return (::System::Func_1<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(MKFANIOOGFA_CMPFILBHMFP___c_TypeDefinitionIndex)->GetStaticField(0x44928);
	}
	static ::System::Func_1<::System::String*>** StaticGet___9__41_10()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MKFANIOOGFA_CMPFILBHMFP___c_TypeDefinitionIndex)->GetStaticField(0x44930);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MKFANIOOGFA_CMPFILBHMFP___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKFANIOOGFA_CMPFILBHMFP___C__CTOR_OFFSET))(this);
	}

	::System::String* BBIAIIAAONH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKFANIOOGFA_CMPFILBHMFP___C_BBIAIIAAONH_OFFSET))(this);
	}

	::UnityEngine::Vector3 GHDBGOMLDKJ()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MKFANIOOGFA_CMPFILBHMFP___C_GHDBGOMLDKJ_OFFSET))(this);
	}
};
