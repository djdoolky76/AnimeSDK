#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace UnityEngine { class Animation; }

#define RPG_CLIENT_DEBUGPLAYUIANIMATION_AAJFOPHDDIG_OFFSET UNITYSDK_OFFSET(0xCBE3D30)
#define RPG_CLIENT_DEBUGPLAYUIANIMATION_AWAKE_OFFSET UNITYSDK_OFFSET(0xCBE3C80)
#define RPG_CLIENT_DEBUGPLAYUIANIMATION_BBBAMDIGIAO_OFFSET UNITYSDK_OFFSET(0xCBE3DD0)
#define RPG_CLIENT_DEBUGPLAYUIANIMATION_CTOR_OFFSET UNITYSDK_OFFSET(0xCBE3E20)
#define RPG_CLIENT_DEBUGPLAYUIANIMATION_PDIFJBKAIFP_OFFSET UNITYSDK_OFFSET(0xCBE3BD0)
#define RPG_CLIENT_DEBUGPLAYUIANIMATION_PNFIALEGBIB_OFFSET UNITYSDK_OFFSET(0xCBE3D80)

namespace RPG::Client
{
	inline static constexpr unsigned int DebugPlayUIAnimation_TypeDefinitionIndex = 68340;

	class DebugPlayUIAnimation : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Animation* _Animation; // 0x18
		::System::String* _AnimName; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBUGPLAYUIANIMATION_CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::System::String*>* PDIFJBKAIFP()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBUGPLAYUIANIMATION_PDIFJBKAIFP_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBUGPLAYUIANIMATION_AWAKE_OFFSET))(this);
		}

		::System::Void AAJFOPHDDIG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBUGPLAYUIANIMATION_AAJFOPHDDIG_OFFSET))(this);
		}

		::System::Void PNFIALEGBIB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBUGPLAYUIANIMATION_PNFIALEGBIB_OFFSET))(this);
		}

		::System::Void BBBAMDIGIAO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBUGPLAYUIANIMATION_BBBAMDIGIAO_OFFSET))(this);
		}

	};
}
