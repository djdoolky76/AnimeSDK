#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace UnityEngine { class Animation; }

#define RPG_CLIENT_DEBUGPLAYUIANIMATION_AAJFOPHDDIG_OFFSET UNITYSDK_OFFSET(0xD55FEB0)
#define RPG_CLIENT_DEBUGPLAYUIANIMATION_AWAKE_OFFSET UNITYSDK_OFFSET(0xD55FE00)
#define RPG_CLIENT_DEBUGPLAYUIANIMATION_BBBAMDIGIAO_OFFSET UNITYSDK_OFFSET(0xD55FF50)
#define RPG_CLIENT_DEBUGPLAYUIANIMATION_CTOR_OFFSET UNITYSDK_OFFSET(0xD55FFA0)
#define RPG_CLIENT_DEBUGPLAYUIANIMATION_PDIFJBKAIFP_OFFSET UNITYSDK_OFFSET(0xD55FD50)
#define RPG_CLIENT_DEBUGPLAYUIANIMATION_PNFIALEGBIB_OFFSET UNITYSDK_OFFSET(0xD55FF00)

namespace RPG::Client
{
	inline static constexpr unsigned int DebugPlayUIAnimation_TypeDefinitionIndex = 70286;

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
