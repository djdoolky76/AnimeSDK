#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace PipelineCamera { class ICameraDataBlender; }
namespace System { template <typename T> class Action_1; }

#define BLJCNKFKFGL___C_KAGAGCGBIFA_OFFSET UNITYSDK_OFFSET(0x18DA5A90)
#define BLJCNKFKFGL___C_LFDMHLLBBEN_OFFSET UNITYSDK_OFFSET(0x18DA5A80)
#define BLJCNKFKFGL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18DA5A30)
#define BLJCNKFKFGL___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18DA5A70)

inline static constexpr unsigned int BLJCNKFKFGL___c_TypeDefinitionIndex = 79706;

class BLJCNKFKFGL___c : public ::System::Object
{
public:
	static ::System::Action_1<::PipelineCamera::ICameraDataBlender*>** StaticGet___9__18_5()
	{
		return (::System::Action_1<::PipelineCamera::ICameraDataBlender*>**)Il2CppClass::FromTypeDefinitionIndex(BLJCNKFKFGL___c_TypeDefinitionIndex)->GetStaticField(0x4B4D0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(BLJCNKFKFGL___c_TypeDefinitionIndex)->GetStaticField(0x4B4D8);
	}
	static ::System::Action_1<::PipelineCamera::ICameraDataBlender*>** StaticGet___9__18_3()
	{
		return (::System::Action_1<::PipelineCamera::ICameraDataBlender*>**)Il2CppClass::FromTypeDefinitionIndex(BLJCNKFKFGL___c_TypeDefinitionIndex)->GetStaticField(0x4B4E0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BLJCNKFKFGL___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLJCNKFKFGL___C__CTOR_OFFSET))(this);
	}

	::System::Void LFDMHLLBBEN(::PipelineCamera::ICameraDataBlender* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraDataBlender*))((::PBYTE)hIl2Cpp + BLJCNKFKFGL___C_LFDMHLLBBEN_OFFSET))(this, PIIPCLCCOIG);
	}

	::System::Void KAGAGCGBIFA(::PipelineCamera::ICameraDataBlender* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraDataBlender*))((::PBYTE)hIl2Cpp + BLJCNKFKFGL___C_KAGAGCGBIFA_OFFSET))(this, PIIPCLCCOIG);
	}
};
