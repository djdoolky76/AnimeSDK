#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class CinemachineVirtualCameraTemplateConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GOEODIJKADA_DDDKKAEMABH_OFFSET UNITYSDK_OFFSET(0x15B21310)
#define GOEODIJKADA_FLFLCMEJEPM_OFFSET UNITYSDK_OFFSET(0x15B213B0)
#define GOEODIJKADA_FNPMJDIAOCM_OFFSET UNITYSDK_OFFSET(0x15B21120)

inline static constexpr unsigned int GOEODIJKADA_TypeDefinitionIndex = 73298;

	class GOEODIJKADA : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::CinemachineVirtualCameraTemplateConfig*>** StaticGet_FCBHIJEOHCN()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::CinemachineVirtualCameraTemplateConfig*>**)UnitySDK::FromName("", "GOEODIJKADA")->GetStaticField(0x6BA10);
		}

		static ::System::Void FNPMJDIAOCM()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOEODIJKADA_FNPMJDIAOCM_OFFSET))();
		}

		static ::System::Void DDDKKAEMABH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOEODIJKADA_DDDKKAEMABH_OFFSET))();
		}

		static ::RPG::GameCore::CinemachineVirtualCameraTemplateConfig* FLFLCMEJEPM(::System::String* a1)
		{
			return ((::RPG::GameCore::CinemachineVirtualCameraTemplateConfig*(*)(::System::String*))((::PBYTE)hIl2Cpp + GOEODIJKADA_FLFLCMEJEPM_OFFSET))(a1);
		}

	};
