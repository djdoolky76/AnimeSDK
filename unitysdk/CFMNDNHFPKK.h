#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
class JBFFCBPMKEF;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitGraphDynamicValueChange; }
namespace System { class Nullable; }

#define CFMNDNHFPKK_CTOR_OFFSET UNITYSDK_OFFSET(0xCC54730)
#define CFMNDNHFPKK_HBFCDJDFNIP_OFFSET UNITYSDK_OFFSET(0xCC54DC0)
#define CFMNDNHFPKK_KAMLPCLKGOJ_OFFSET UNITYSDK_OFFSET(0xCC54FB0)
#define CFMNDNHFPKK_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xCC54940)
#define CFMNDNHFPKK__PREPAREDATA_OFFSET UNITYSDK_OFFSET(0xCC54D60)
#define CFMNDNHFPKK__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0xCC549A0)
#define CFMNDNHFPKK__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0xCC54B80)

inline static constexpr unsigned int CFMNDNHFPKK_TypeDefinitionIndex = 53473;

	class CFMNDNHFPKK
	{
	public:
		::JBFFCBPMKEF* HIJOAMLICNE; // 0x68
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitGraphDynamicValueChange* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitGraphDynamicValueChange*))((::PBYTE)hIl2Cpp + CFMNDNHFPKK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFMNDNHFPKK_ONTASKRESET_OFFSET))(this);
		}

		::System::Void _RegisterEventCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFMNDNHFPKK__REGISTEREVENTCALLBACK_OFFSET))(this);
		}

		::System::Void _UnregisterEventCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFMNDNHFPKK__UNREGISTEREVENTCALLBACK_OFFSET))(this);
		}

		::System::Boolean _PrepareData()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CFMNDNHFPKK__PREPAREDATA_OFFSET))(this);
		}

		::System::Void HBFCDJDFNIP(::RPG::GameCore::StringHash a1, ::System::Nullable* a2, ::RPG::GameCore::FixPoint a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StringHash, ::System::Nullable*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CFMNDNHFPKK_HBFCDJDFNIP_OFFSET))(this, a1, a2, a3);
		}

		::System::Void KAMLPCLKGOJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFMNDNHFPKK_KAMLPCLKGOJ_OFFSET))(this);
		}

	};
