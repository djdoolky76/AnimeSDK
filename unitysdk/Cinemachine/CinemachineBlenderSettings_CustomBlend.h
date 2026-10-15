#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CinemachineBlendDefinition.h"
namespace System { class String; }

namespace Cinemachine
{
	struct alignas(8) CinemachineBlenderSettings_CustomBlend
	{
		::System::String* m_From; // 0x10
		::System::String* m_To; // 0x18
		::Cinemachine::CinemachineBlendDefinition m_Blend; // 0x20
	};
}
