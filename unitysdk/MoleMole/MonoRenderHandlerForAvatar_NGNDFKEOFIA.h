#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Rendering/Universal/ForwardRendererData_ShaderFeature.h"

namespace UnityEngine { class Material; }

#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_NGNDFKEOFIA_PKOGNPKCHHE_1_OFFSET UNITYSDK_OFFSET(0x69D900)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_NGNDFKEOFIA_PKOGNPKCHHE_OFFSET UNITYSDK_OFFSET(0x11945DF0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoRenderHandlerForAvatar_NGNDFKEOFIA_TypeDefinitionIndex = 52707;

	struct alignas(4) MonoRenderHandlerForAvatar_NGNDFKEOFIA
	{
		::System::UInt32 LBPIPEAKPDG; // 0x10
		::System::Int32 AELKMGGGEJP; // 0x14
		::System::Boolean FGKFKOCBPED; // 0x18
		::System::Byte _padding0[0x3];
		::UnityEngine::Rendering::Universal::ForwardRendererData_ShaderFeature NFKAJAIMGJM; // 0x1C

		/*
		static ::MoleMole::MonoRenderHandlerForAvatar_NGNDFKEOFIA PKOGNPKCHHE(::System::UInt32 LBPIPEAKPDG, ::System::Int32 AELKMGGGEJP, ::System::Boolean FGKFKOCBPED, ::UnityEngine::Rendering::Universal::ForwardRendererData_ShaderFeature NFKAJAIMGJM)
		{
			return ((::MoleMole::MonoRenderHandlerForAvatar_NGNDFKEOFIA(*)(::System::UInt32, ::System::Int32, ::System::Boolean, ::UnityEngine::Rendering::Universal::ForwardRendererData_ShaderFeature))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_NGNDFKEOFIA_PKOGNPKCHHE_OFFSET))(LBPIPEAKPDG, AELKMGGGEJP, FGKFKOCBPED, NFKAJAIMGJM);
		}
		*/

		::System::Void PKOGNPKCHHE_1(::UnityEngine::Material* KNNDDLMOKCG, ::System::UInt32& LBPIPEAKPDG)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::System::UInt32&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_NGNDFKEOFIA_PKOGNPKCHHE_1_OFFSET))(this, KNNDDLMOKCG, LBPIPEAKPDG);
		}
	};
}
