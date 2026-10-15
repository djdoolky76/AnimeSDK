#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::CustomRP { class CRPVirtualCameraVolumn_PostUpdateVCCamera; }

namespace RPG::Client
{
	class VirtualCameraFollowBehavior___O : public ::System::Object
	{
	public:
		static ::RPG::CustomRP::CRPVirtualCameraVolumn_PostUpdateVCCamera** StaticGet__0___PostUpdateVcCamera()
		{
			return (::RPG::CustomRP::CRPVirtualCameraVolumn_PostUpdateVCCamera**)UnitySDK::FromName("RPG.Client", "<>O")->GetStaticField(0x4AEA0);
		}

	};
}
