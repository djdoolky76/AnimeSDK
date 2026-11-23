#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace ABC::CustomRenderPipeline { class CapsuleData; }
namespace UnityEngine { class Transform; }

#define FF25D157E21C4F1F_B51D6C55A3A29EEB_OFFSET UNITYSDK_OFFSET(0x2816850)
#define FF25D157E21C4F1F_EE8C76B731BE55CE_OFFSET UNITYSDK_OFFSET(0x2816670)
#define FF25D157E21C4F1F__CCTOR_OFFSET UNITYSDK_OFFSET(0x2816910)
#define FF25D157E21C4F1F__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int FF25D157E21C4F1F_TypeDefinitionIndex = 16856;

class FF25D157E21C4F1F : public ::System::Object
{
public:
	static ::UnityEngine::Vector3* StaticGet_AE786797310846E0()
	{
		return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(FF25D157E21C4F1F_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::UnityEngine::Vector3* StaticGet_EC4C5D2D1539FF2B()
	{
		return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(FF25D157E21C4F1F_TypeDefinitionIndex)->GetStaticField(0xC);
	}
	::ABC::CustomRenderPipeline::CapsuleData* BF96E3E491351F5D; // 0x10
	::UnityEngine::Transform* A648C188552AD554; // 0x18
	::UnityEngine::Transform* B8C64E71C9C078E8; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FF25D157E21C4F1F__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FF25D157E21C4F1F__CCTOR_OFFSET))();
	}

	::System::Int32 EE8C76B731BE55CE(::FF25D157E21C4F1F* BEEE7A5A60941632)
	{
		return ((::System::Int32(*)(::PVOID, ::FF25D157E21C4F1F*))((::PBYTE)hIl2Cpp + FF25D157E21C4F1F_EE8C76B731BE55CE_OFFSET))(this, BEEE7A5A60941632);
	}

	::System::Single B51D6C55A3A29EEB()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FF25D157E21C4F1F_B51D6C55A3A29EEB_OFFSET))(this);
	}
};
