#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/Method_CameraLogCategory.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5> class Action_5; }

#define EOKLPOFFJNF___C_NPFBHDKGCHG_OFFSET UNITYSDK_OFFSET(0x1355B750)
#define EOKLPOFFJNF___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1355B700)
#define EOKLPOFFJNF___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1355B740)

inline static constexpr unsigned int EOKLPOFFJNF___c_TypeDefinitionIndex = 89930;

class EOKLPOFFJNF___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(EOKLPOFFJNF___c_TypeDefinitionIndex)->GetStaticField(0x507A0);
	}
	static ::System::Action_5<::System::Object*, ::System::Boolean, ::System::String*, ::UnityEngine::Color, ::System::Single>** StaticGet___9__26_0()
	{
		return (::System::Action_5<::System::Object*, ::System::Boolean, ::System::String*, ::UnityEngine::Color, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(EOKLPOFFJNF___c_TypeDefinitionIndex)->GetStaticField(0x507A8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EOKLPOFFJNF___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOKLPOFFJNF___C__CTOR_OFFSET))(this);
	}

	::System::Void NPFBHDKGCHG(::PipelineCamera::Method_CameraLogCategory IMOAKEGINJP, ::System::Boolean KANJODNFFOI, ::System::String* NAPFALLANDL, ::UnityEngine::Color JBBFCGAMDHI, ::System::Single MDPPNMIPDMP)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::Method_CameraLogCategory, ::System::Boolean, ::System::String*, ::UnityEngine::Color, ::System::Single))((::PBYTE)hIl2Cpp + EOKLPOFFJNF___C_NPFBHDKGCHG_OFFSET))(this, IMOAKEGINJP, KANJODNFFOI, NAPFALLANDL, JBBFCGAMDHI, MDPPNMIPDMP);
	}
};
