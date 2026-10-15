#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ChenLing/ChenLingCameraType.h"
#include "unitysdk/System/Object.h"
namespace UnityEngine { class Transform; }

#define JEMCLEGNBCP_CTOR_OFFSET UNITYSDK_OFFSET(0x1CB61CB0)

inline static constexpr unsigned int JEMCLEGNBCP_TypeDefinitionIndex = 43737;

	class JEMCLEGNBCP : public ::System::Object
	{
	public:
		::UnityEngine::Transform* HMNHLOMKCIF; // 0x10
		::System::Boolean IJCDEINGADN; // 0x18
		::System::Boolean CAGCHKJHMPD; // 0x19
		::System::Byte _padding0[0x2];
		::RPG::Client::LittleGame::ChenLing::ChenLingCameraType GMPGDEINODK; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEMCLEGNBCP_CTOR_OFFSET))(this);
		}

	};
