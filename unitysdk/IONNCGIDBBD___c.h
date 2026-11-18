#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Collider; }

#define IONNCGIDBBD___C_DEAELGMHMJK_OFFSET UNITYSDK_OFFSET(0x16AB6FE0)
#define IONNCGIDBBD___C_ENGKCADFBLP_OFFSET UNITYSDK_OFFSET(0x16AB6F70)
#define IONNCGIDBBD___C_GPCFBNPLELA_OFFSET UNITYSDK_OFFSET(0x16AB7050)
#define IONNCGIDBBD___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16AB6F20)
#define IONNCGIDBBD___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16AB6F60)

inline static constexpr unsigned int IONNCGIDBBD___c_TypeDefinitionIndex = 69684;

class IONNCGIDBBD___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(IONNCGIDBBD___c_TypeDefinitionIndex)->GetStaticField(0x37F80);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IONNCGIDBBD___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IONNCGIDBBD___C__CTOR_OFFSET))(this);
	}

	::System::Boolean ENGKCADFBLP(::UnityEngine::Collider* CHIFPJGLFPK, ::UnityEngine::Vector3 OPMPKFEHOBM)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Collider*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + IONNCGIDBBD___C_ENGKCADFBLP_OFFSET))(this, CHIFPJGLFPK, OPMPKFEHOBM);
	}

	::System::Boolean DEAELGMHMJK(::UnityEngine::Collider* CHIFPJGLFPK, ::UnityEngine::Vector3 OPMPKFEHOBM)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Collider*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + IONNCGIDBBD___C_DEAELGMHMJK_OFFSET))(this, CHIFPJGLFPK, OPMPKFEHOBM);
	}

	::System::Boolean GPCFBNPLELA(::UnityEngine::Collider* CHIFPJGLFPK, ::UnityEngine::Vector3 OPMPKFEHOBM)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Collider*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + IONNCGIDBBD___C_GPCFBNPLELA_OFFSET))(this, CHIFPJGLFPK, OPMPKFEHOBM);
	}
};
