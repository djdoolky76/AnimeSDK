#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Shader; }

#define NPCCROWDAVATARUTILS_GETCROWDSHADER_1_OFFSET UNITYSDK_OFFSET(0x114DBEC0)
#define NPCCROWDAVATARUTILS_GETCROWDSHADER_OFFSET UNITYSDK_OFFSET(0x114DB540)
#define NPCCROWDAVATARUTILS__CCTOR_OFFSET UNITYSDK_OFFSET(0x114DC3E0)
#define NPCCROWDAVATARUTILS__CTOR_OFFSET UNITYSDK_OFFSET(0x114DC3D0)

inline static constexpr unsigned int NPCCrowdAvatarUtils_TypeDefinitionIndex = 86657;

class NPCCrowdAvatarUtils : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Shader*>** StaticGet__crowdShaderMap()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Shader*>**)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdAvatarUtils_TypeDefinitionIndex)->GetStaticField(0x4B0F0);
	}
	static ::System::Collections::Generic::List_1<::System::Object*>** StaticGet_CrowdShadersInfos()
	{
		return (::System::Collections::Generic::List_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdAvatarUtils_TypeDefinitionIndex)->GetStaticField(0x4B0F8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWDAVATARUTILS__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWDAVATARUTILS__CCTOR_OFFSET))();
	}

	static ::UnityEngine::Shader* GetCrowdShader(::UnityEngine::Shader* originShader)
	{
		return ((::UnityEngine::Shader*(*)(::UnityEngine::Shader*))((::PBYTE)hIl2Cpp + NPCCROWDAVATARUTILS_GETCROWDSHADER_OFFSET))(originShader);
	}

	static ::UnityEngine::Shader* GetCrowdShader_1(::System::String* originShaderName)
	{
		return ((::UnityEngine::Shader*(*)(::System::String*))((::PBYTE)hIl2Cpp + NPCCROWDAVATARUTILS_GETCROWDSHADER_1_OFFSET))(originShaderName);
	}
};
