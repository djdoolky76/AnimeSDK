#pragma once
#include "unitysdk/unitysdk.h"
class HCLPKMIIANI;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitLittleGameLevelVarChange; }
namespace System { class String; }

#define FIOCOAEDIKK_CTOR_OFFSET UNITYSDK_OFFSET(0x166D1230)
#define FIOCOAEDIKK_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x166D1440)
#define FIOCOAEDIKK__PREPAREDATA_OFFSET UNITYSDK_OFFSET(0x166D14A0)
#define FIOCOAEDIKK__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x166D15A0)
#define FIOCOAEDIKK__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x166D1800)

inline static constexpr unsigned int FIOCOAEDIKK_TypeDefinitionIndex = 54130;

	class FIOCOAEDIKK
	{
	public:
		::System::String* MMBCEDEIGPK; // 0x68
		::HCLPKMIIANI* DJBFOOCPFGH; // 0x70
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitLittleGameLevelVarChange* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitLittleGameLevelVarChange*))((::PBYTE)hIl2Cpp + FIOCOAEDIKK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIOCOAEDIKK_ONTASKRESET_OFFSET))(this);
		}

		::System::Boolean _PrepareData()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FIOCOAEDIKK__PREPAREDATA_OFFSET))(this);
		}

		::System::Void _RegisterEventCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIOCOAEDIKK__REGISTEREVENTCALLBACK_OFFSET))(this);
		}

		::System::Void _UnregisterEventCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIOCOAEDIKK__UNREGISTEREVENTCALLBACK_OFFSET))(this);
		}

	};
