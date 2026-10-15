#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RtModifierEventScope.h"
#include "unitysdk/System/Object.h"

#define FBOEHKGOHDI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1569FF20)
#define FBOEHKGOHDI_JMFGJFOAJFG_OFFSET UNITYSDK_OFFSET(0x1569FF70)

inline static constexpr unsigned int FBOEHKGOHDI_TypeDefinitionIndex = 53782;

	class FBOEHKGOHDI : public ::System::Object
	{
	public:
		static ::Il2CppArray<::RPG::GameCore::RtModifierEventScope>** StaticGet_NOAMHEEOGHP()
		{
			return (::Il2CppArray<::RPG::GameCore::RtModifierEventScope>**)UnitySDK::FromName("", "FBOEHKGOHDI")->GetStaticField(0x54360);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FBOEHKGOHDI_CCTOR_OFFSET))();
		}

		static ::System::Void JMFGJFOAJFG()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FBOEHKGOHDI_JMFGJFOAJFG_OFFSET))();
		}

	};
