#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/RaycastHit.h"

namespace PipelineCamera { class ICameraDataBlender; }
namespace PipelineCamera { template <typename T> class ICameraSubModule_1; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }

#define PGKNIGJKKCL___C_AHNMEJELDML_OFFSET UNITYSDK_OFFSET(0x11B67210)
#define PGKNIGJKKCL___C_FHGHIPFDOMD_OFFSET UNITYSDK_OFFSET(0x11B673A0)
#define PGKNIGJKKCL___C_LMKPJKNBOHH_OFFSET UNITYSDK_OFFSET(0x11B67390)
#define PGKNIGJKKCL___C_MEIJEBEKNGM_OFFSET UNITYSDK_OFFSET(0x11B67200)
#define PGKNIGJKKCL___C_NCLLPIKBEMM_OFFSET UNITYSDK_OFFSET(0x11B673B0)
#define PGKNIGJKKCL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x11B671B0)
#define PGKNIGJKKCL___C__CTOR_OFFSET UNITYSDK_OFFSET(0x11B671F0)

inline static constexpr unsigned int PGKNIGJKKCL___c_TypeDefinitionIndex = 75330;

class PGKNIGJKKCL___c : public ::System::Object
{
public:
	static ::System::Action_1<::PipelineCamera::ICameraDataBlender*>** StaticGet___9__13_10()
	{
		return (::System::Action_1<::PipelineCamera::ICameraDataBlender*>**)Il2CppClass::FromTypeDefinitionIndex(PGKNIGJKKCL___c_TypeDefinitionIndex)->GetStaticField(0x36300);
	}
	static ::System::Func_1<::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*>** StaticGet___9__13_1()
	{
		return (::System::Func_1<::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*>**)Il2CppClass::FromTypeDefinitionIndex(PGKNIGJKKCL___c_TypeDefinitionIndex)->GetStaticField(0x36308);
	}
	static ::System::Func_2<::UnityEngine::RaycastHit, ::System::Boolean>** StaticGet___9__13_5()
	{
		return (::System::Func_2<::UnityEngine::RaycastHit, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(PGKNIGJKKCL___c_TypeDefinitionIndex)->GetStaticField(0x36310);
	}
	static ::System::Action_1<::PipelineCamera::ICameraDataBlender*>** StaticGet___9__13_8()
	{
		return (::System::Action_1<::PipelineCamera::ICameraDataBlender*>**)Il2CppClass::FromTypeDefinitionIndex(PGKNIGJKKCL___c_TypeDefinitionIndex)->GetStaticField(0x36318);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(PGKNIGJKKCL___c_TypeDefinitionIndex)->GetStaticField(0x36320);
	}
	static ::System::Action_1<::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*>** StaticGet___9__13_4()
	{
		return (::System::Action_1<::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*>**)Il2CppClass::FromTypeDefinitionIndex(PGKNIGJKKCL___c_TypeDefinitionIndex)->GetStaticField(0x36328);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PGKNIGJKKCL___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGKNIGJKKCL___C__CTOR_OFFSET))(this);
	}

	::System::Void MEIJEBEKNGM(::PipelineCamera::ICameraDataBlender* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraDataBlender*))((::PBYTE)hIl2Cpp + PGKNIGJKKCL___C_MEIJEBEKNGM_OFFSET))(this, PIIPCLCCOIG);
	}

	::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* AHNMEJELDML()
	{
		return ((::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PGKNIGJKKCL___C_AHNMEJELDML_OFFSET))(this);
	}

	::System::Boolean LMKPJKNBOHH(::UnityEngine::RaycastHit OFLHPPDJLNL)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::RaycastHit))((::PBYTE)hIl2Cpp + PGKNIGJKKCL___C_LMKPJKNBOHH_OFFSET))(this, OFLHPPDJLNL);
	}

	::System::Void FHGHIPFDOMD(::PipelineCamera::ICameraDataBlender* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraDataBlender*))((::PBYTE)hIl2Cpp + PGKNIGJKKCL___C_FHGHIPFDOMD_OFFSET))(this, PIIPCLCCOIG);
	}

	::System::Void NCLLPIKBEMM(::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* FKMJKPGNCJI)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*))((::PBYTE)hIl2Cpp + PGKNIGJKKCL___C_NCLLPIKBEMM_OFFSET))(this, FKMJKPGNCJI);
	}
};
