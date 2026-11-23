#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class AnimationClip; }

#define FDE441D677202789_A0825CDB8A4D856F_OFFSET UNITYSDK_OFFSET(0x40DA5D0)
#define FDE441D677202789__CCTOR_OFFSET UNITYSDK_OFFSET(0x40DA760)

inline static constexpr unsigned int FDE441D677202789_TypeDefinitionIndex = 20221;

class FDE441D677202789 : public ::System::Object
{
public:
	static ::System::Double* StaticGet_BD4373D799D3BE28()
	{
		return (::System::Double*)Il2CppClass::FromTypeDefinitionIndex(FDE441D677202789_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Double* StaticGet_EF9243587DA1DB00()
	{
		return (::System::Double*)Il2CppClass::FromTypeDefinitionIndex(FDE441D677202789_TypeDefinitionIndex)->GetStaticField(0x8);
	}
	static ::System::Double* StaticGet_A29150AD0ACD4915()
	{
		return (::System::Double*)Il2CppClass::FromTypeDefinitionIndex(FDE441D677202789_TypeDefinitionIndex)->GetStaticField(0x10);
	}
	static ::System::Double* StaticGet_E50007BCC6292331()
	{
		return (::System::Double*)Il2CppClass::FromTypeDefinitionIndex(FDE441D677202789_TypeDefinitionIndex)->GetStaticField(0x18);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FDE441D677202789__CCTOR_OFFSET))();
	}

	static ::System::Double A0825CDB8A4D856F(::UnityEngine::AnimationClip* AD43DEAB8304398A)
	{
		return ((::System::Double(*)(::UnityEngine::AnimationClip*))((::PBYTE)hIl2Cpp + FDE441D677202789_A0825CDB8A4D856F_OFFSET))(AD43DEAB8304398A);
	}
};
