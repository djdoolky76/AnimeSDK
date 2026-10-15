#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TimeSpaceCrisscrossGroupMonoPlugin_TimeSpaceCrisscrossState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"

#define JMEAKCMLLJE_CTOR_OFFSET UNITYSDK_OFFSET(0xB262890)

inline static constexpr unsigned int JMEAKCMLLJE_TypeDefinitionIndex = 70219;

	class JMEAKCMLLJE : public ::System::Object
	{
	public:
		::Il2CppArray<::UnityEngine::Bounds>* KKPFLIIJFOJ; // 0x10
		::System::Boolean ABNMKAPKMGF; // 0x18
		::System::Byte _padding0[0x3];
		::RPG::Client::TimeSpaceCrisscrossGroupMonoPlugin_TimeSpaceCrisscrossState MEPFOEEGBEA; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMEAKCMLLJE_CTOR_OFFSET))(this);
		}

	};
