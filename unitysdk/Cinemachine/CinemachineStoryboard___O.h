#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Cinemachine { class CinemachineBrain; }
namespace UnityEngine::Events { template <typename T> class UnityAction_1; }

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineStoryboard___O_TypeDefinitionIndex = 39757;

	class CinemachineStoryboard___O : public ::System::Object
	{
	public:
		static ::UnityEngine::Events::UnityAction_1<::Cinemachine::CinemachineBrain*>** StaticGet__0___StaticBlendingHandler()
		{
			return (::UnityEngine::Events::UnityAction_1<::Cinemachine::CinemachineBrain*>**)UnitySDK::FromName("Cinemachine", "<>O")->GetStaticField(0x52DB0);
		}

	};
}
