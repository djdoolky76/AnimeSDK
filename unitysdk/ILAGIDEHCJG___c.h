#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MoleMole/Config/ConfigLevelResultPerforms_ConfigLevelResultPerformEffect.h"

namespace PipelineCamera { template <typename T> class ICameraSubModule_1; }
namespace System { class Action; }
namespace System { template <typename T> class Comparison_1; }
namespace System { template <typename T> class Func_1; }

#define ILAGIDEHCJG___C_EHKMENPCFHK_OFFSET UNITYSDK_OFFSET(0x141F2CB0)
#define ILAGIDEHCJG___C_IENEBNAHGLC_OFFSET UNITYSDK_OFFSET(0x141F0FF0)
#define ILAGIDEHCJG___C_MFBNHKIMOHI_OFFSET UNITYSDK_OFFSET(0x141F0F60)
#define ILAGIDEHCJG___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x141F0F10)
#define ILAGIDEHCJG___C__CTOR_OFFSET UNITYSDK_OFFSET(0x141F0F50)

inline static constexpr unsigned int ILAGIDEHCJG___c_TypeDefinitionIndex = 56506;

class ILAGIDEHCJG___c : public ::System::Object
{
public:
	static ::System::Func_1<::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*>** StaticGet___9__27_0()
	{
		return (::System::Func_1<::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*>**)Il2CppClass::FromTypeDefinitionIndex(ILAGIDEHCJG___c_TypeDefinitionIndex)->GetStaticField(0x465A0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(ILAGIDEHCJG___c_TypeDefinitionIndex)->GetStaticField(0x465A8);
	}
	static ::System::Action** StaticGet___9__102_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(ILAGIDEHCJG___c_TypeDefinitionIndex)->GetStaticField(0x465B0);
	}
	static ::System::Comparison_1<::System::Object*>** StaticGet___9__52_0()
	{
		return (::System::Comparison_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(ILAGIDEHCJG___c_TypeDefinitionIndex)->GetStaticField(0x465B8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ILAGIDEHCJG___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILAGIDEHCJG___C__CTOR_OFFSET))(this);
	}

	::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* MFBNHKIMOHI()
	{
		return ((::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILAGIDEHCJG___C_MFBNHKIMOHI_OFFSET))(this);
	}

	::System::Void IENEBNAHGLC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILAGIDEHCJG___C_IENEBNAHGLC_OFFSET))(this);
	}

	::System::Int32 EHKMENPCFHK(::MoleMole::Config::ConfigLevelResultPerforms_ConfigLevelResultPerformEffect EJCBEJMGFAJ, ::MoleMole::Config::ConfigLevelResultPerforms_ConfigLevelResultPerformEffect EBFCACIEKBC)
	{
		return ((::System::Int32(*)(::PVOID, ::MoleMole::Config::ConfigLevelResultPerforms_ConfigLevelResultPerformEffect, ::MoleMole::Config::ConfigLevelResultPerforms_ConfigLevelResultPerformEffect))((::PBYTE)hIl2Cpp + ILAGIDEHCJG___C_EHKMENPCFHK_OFFSET))(this, EJCBEJMGFAJ, EBFCACIEKBC);
	}
};
