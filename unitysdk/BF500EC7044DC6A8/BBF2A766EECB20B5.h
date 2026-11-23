#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/BE5668376C82998A.h"

namespace UnityEngine { class Canvas; }
namespace UnityEngine { class RectTransform; }

#define BF500EC7044DC6A8_BBF2A766EECB20B5_A7C6B5D756FF2593_OFFSET UNITYSDK_OFFSET(0x43A3F90)
#define BF500EC7044DC6A8_BBF2A766EECB20B5_B402578D043D0F75_OFFSET UNITYSDK_OFFSET(0x43A4230)
#define BF500EC7044DC6A8_BBF2A766EECB20B5__CTOR_OFFSET UNITYSDK_OFFSET(0x43A44F0)

namespace BF500EC7044DC6A8
{
	inline static constexpr unsigned int BBF2A766EECB20B5_TypeDefinitionIndex = 18568;

	class BBF2A766EECB20B5 : public ::System::Object
	{
	public:
		::Il2CppArray<::UnityEngine::Vector3>* BB46CF4C43C1D9F5; // 0x10
		::Il2CppArray<::UnityEngine::Vector3>* ABF58B40153242CB; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BF500EC7044DC6A8_BBF2A766EECB20B5__CTOR_OFFSET))(this);
		}

		::UnityEngine::BE5668376C82998A A7C6B5D756FF2593(::UnityEngine::RectTransform* BBCFEC7DB309E927, ::UnityEngine::Canvas* A97F5B807CC19082)
		{
			return ((::UnityEngine::BE5668376C82998A(*)(::PVOID, ::UnityEngine::RectTransform*, ::UnityEngine::Canvas*))((::PBYTE)hIl2Cpp + BF500EC7044DC6A8_BBF2A766EECB20B5_A7C6B5D756FF2593_OFFSET))(this, BBCFEC7DB309E927, A97F5B807CC19082);
		}

		::System::Void B402578D043D0F75(::UnityEngine::RectTransform* BBCFEC7DB309E927, ::Il2CppArray<::UnityEngine::Vector3>* A481F484E86B2C75)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*, ::Il2CppArray<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + BF500EC7044DC6A8_BBF2A766EECB20B5_B402578D043D0F75_OFFSET))(this, BBCFEC7DB309E927, A481F484E86B2C75);
		}
	};
}
