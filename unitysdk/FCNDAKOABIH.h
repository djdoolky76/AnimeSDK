#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ThreadTaskType.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class MultithreadConfig; }
namespace RPG::GameCore { class ThreadTaskConfig; }

#define FCNDAKOABIH_IICJACHLPNG_OFFSET UNITYSDK_OFFSET(0x156C3110)

inline static constexpr unsigned int FCNDAKOABIH_TypeDefinitionIndex = 53600;

	class FCNDAKOABIH : public ::System::Object
	{
	public:
		static ::RPG::GameCore::MultithreadConfig** StaticGet_KHEDFLAEHLP()
		{
			return (::RPG::GameCore::MultithreadConfig**)UnitySDK::FromName("", "FCNDAKOABIH")->GetStaticField(0x55790);
		}

		static ::RPG::GameCore::ThreadTaskConfig* IICJACHLPNG(::RPG::GameCore::ThreadTaskType a1)
		{
			return ((::RPG::GameCore::ThreadTaskConfig*(*)(::RPG::GameCore::ThreadTaskType))((::PBYTE)hIl2Cpp + FCNDAKOABIH_IICJACHLPNG_OFFSET))(a1);
		}

	};
