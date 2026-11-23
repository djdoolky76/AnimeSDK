#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Camera; }

#define A3C382C36D21F79F_F5628F8349D4A8A6_A6FAB9942AA5DD67_OFFSET UNITYSDK_OFFSET(0x27B0660)
#define A3C382C36D21F79F_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x27B0850)
#define A3C382C36D21F79F_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int A3C382C36D21F79F_F5628F8349D4A8A6_TypeDefinitionIndex = 16619;

class A3C382C36D21F79F_F5628F8349D4A8A6 : public ::System::Object
{
public:
	static ::A3C382C36D21F79F_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
	{
		return (::A3C382C36D21F79F_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(A3C382C36D21F79F_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + A3C382C36D21F79F_F5628F8349D4A8A6__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A3C382C36D21F79F_F5628F8349D4A8A6__CTOR_OFFSET))(this);
	}

	::System::Int32 A6FAB9942AA5DD67(::UnityEngine::Camera* B58968F65AB9ED22, ::UnityEngine::Camera* F35D8683EA9544F7)
	{
		return ((::System::Int32(*)(::PVOID, ::UnityEngine::Camera*, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + A3C382C36D21F79F_F5628F8349D4A8A6_A6FAB9942AA5DD67_OFFSET))(this, B58968F65AB9ED22, F35D8683EA9544F7);
	}
};
