#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FPBOLBNCDIP;
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define LOLKHNFPJGJ_ANFEHMOAFHM_OFFSET UNITYSDK_OFFSET(0x12D49CF0)
#define LOLKHNFPJGJ_BIIIFHHMNHN_OFFSET UNITYSDK_OFFSET(0x12D4A140)
#define LOLKHNFPJGJ_LPACBPEEIJK_OFFSET UNITYSDK_OFFSET(0x12D49D30)
#define LOLKHNFPJGJ__CTOR_OFFSET UNITYSDK_OFFSET(0x12D49CE0)

inline static constexpr unsigned int LOLKHNFPJGJ_TypeDefinitionIndex = 89086;

class LOLKHNFPJGJ : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOLKHNFPJGJ__CTOR_OFFSET))(this);
	}

	static ::System::Boolean ANFEHMOAFHM(::FPBOLBNCDIP* JAHEDLAAHJJ)
	{
		return ((::System::Boolean(*)(::FPBOLBNCDIP*))((::PBYTE)hIl2Cpp + LOLKHNFPJGJ_ANFEHMOAFHM_OFFSET))(JAHEDLAAHJJ);
	}

	static ::System::Boolean LPACBPEEIJK()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LOLKHNFPJGJ_LPACBPEEIJK_OFFSET))();
	}

	static ::UnityEngine::GameObject* BIIIFHHMNHN(::System::String* ABOMFKBGCAJ, ::UnityEngine::Transform* DOLLKCINIDJ)
	{
		return ((::UnityEngine::GameObject*(*)(::System::String*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + LOLKHNFPJGJ_BIIIFHHMNHN_OFFSET))(ABOMFKBGCAJ, DOLLKCINIDJ);
	}
};
