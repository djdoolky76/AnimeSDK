#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace System { class String; }

#define KIBHANONAPI_CTOR_OFFSET UNITYSDK_OFFSET(0x197A44F0)

inline static constexpr unsigned int KIBHANONAPI_TypeDefinitionIndex = 53204;

	class KIBHANONAPI : public ::System::Object
	{
	public:
		::System::String* OENAMINOLLF; // 0x10
		::Il2CppArray<::System::UInt32>* KGKEPIJIABL; // 0x18
		::UnityEngine::Vector3 BBFOLEOPPPL; // 0x20
		::System::Single OOFCOHBIAKL; // 0x2C
		::System::Nullable_1<::System::UInt32> IOPBMDJMPHO; // 0x30
		::System::Nullable_1<::System::UInt32> MCLLALGABAB; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIBHANONAPI_CTOR_OFFSET))(this);
		}

	};
