#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define DPCBMOGAFEJ_AOPBFIPLDCP_OFFSET UNITYSDK_OFFSET(0x11FF3F80)
#define DPCBMOGAFEJ_MGPIAEEEHGK_OFFSET UNITYSDK_OFFSET(0x11FF4190)
#define DPCBMOGAFEJ_PIEFCCJCICN_OFFSET UNITYSDK_OFFSET(0x11FF4100)

inline static constexpr unsigned int DPCBMOGAFEJ_TypeDefinitionIndex = 54363;

	class DPCBMOGAFEJ : public ::System::Object
	{
	public:
		static ::System::Boolean AOPBFIPLDCP(::RPG::GameCore::GameEntity* a1, ::Il2CppArray<::System::String*>* a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + DPCBMOGAFEJ_AOPBFIPLDCP_OFFSET))(a1, a2);
		}

		static ::System::Boolean PIEFCCJCICN(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + DPCBMOGAFEJ_PIEFCCJCICN_OFFSET))(a1, a2);
		}

		static ::System::Boolean MGPIAEEEHGK(::RPG::GameCore::GameEntity* a1, ::System::String* a2, ::RPG::GameCore::FixPoint a3)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*, ::System::String*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + DPCBMOGAFEJ_MGPIAEEEHGK_OFFSET))(a1, a2, a3);
		}

	};
