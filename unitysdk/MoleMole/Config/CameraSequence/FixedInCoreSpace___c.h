#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"

namespace PipelineCamera::CameraSequence { class CameraSequenceContext; }
namespace PipelineCamera::CameraSequence { class FixedInCorePolicy; }

#define MOLEMOLE_CONFIG_CAMERASEQUENCE_FIXEDINCORESPACE___C_JBCNOFELNGM_OFFSET UNITYSDK_OFFSET(0xFFCAD70)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_FIXEDINCORESPACE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xFFCAD20)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_FIXEDINCORESPACE___C__CTOR_OFFSET UNITYSDK_OFFSET(0xFFCAD60)

namespace MoleMole::Config::CameraSequence
{
	inline static constexpr unsigned int FixedInCoreSpace___c_TypeDefinitionIndex = 45721;

	class FixedInCoreSpace___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(FixedInCoreSpace___c_TypeDefinitionIndex)->GetStaticField(0x3E950);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_FIXEDINCORESPACE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_FIXEDINCORESPACE___C__CTOR_OFFSET))(this);
		}

		::PipelineCamera::WorldBasicCameraData JBCNOFELNGM(::PipelineCamera::CameraSequence::FixedInCorePolicy* IIPPKCOCCJE, ::System::Single FNIOPKPHDEH, ::PipelineCamera::CameraSequence::CameraSequenceContext* AAOCANGHBDG)
		{
			return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::PipelineCamera::CameraSequence::FixedInCorePolicy*, ::System::Single, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_FIXEDINCORESPACE___C_JBCNOFELNGM_OFFSET))(this, IIPPKCOCCJE, FNIOPKPHDEH, AAOCANGHBDG);
		}
	};
}
