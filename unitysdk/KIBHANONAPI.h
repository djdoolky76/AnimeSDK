#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace System { class String; }

#define KIBHANONAPI_CTOR_OFFSET UNITYSDK_OFFSET(0xB411DF0)

inline static constexpr unsigned int KIBHANONAPI_TypeDefinitionIndex = 52099;

	class KIBHANONAPI : public ::System::Object
	{
	public:
		::System::String* OENAMINOLLF; // 0x10
		::Il2CppArray<::System::UInt32>* KGKEPIJIABL; // 0x18
		::System::Nullable_1<::System::UInt32> MCLLALGABAB; // 0x20
		::System::Single OOFCOHBIAKL; // 0x28
		::System::Nullable_1<::System::UInt32> IOPBMDJMPHO; // 0x2C
		::UnityEngine::Vector3 BBFOLEOPPPL; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIBHANONAPI_CTOR_OFFSET))(this);
		}

	};
