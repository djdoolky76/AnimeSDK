#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::Client { class FiveDimGameInstance; }
namespace RPG::GameCore { class OpenFiveDimWindowStagePage; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define IOGBKBOMGIG_CTOR_OFFSET UNITYSDK_OFFSET(0xB835100)
#define IOGBKBOMGIG_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB835590)
#define IOGBKBOMGIG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB8351B0)
#define IOGBKBOMGIG__ONPAGECANCELCLOSE_OFFSET UNITYSDK_OFFSET(0xB835400)
#define IOGBKBOMGIG__ONPAGECONFIRMCLOSE_OFFSET UNITYSDK_OFFSET(0xB8354B0)

inline static constexpr unsigned int IOGBKBOMGIG_TypeDefinitionIndex = 54041;

	class IOGBKBOMGIG
	{
	public:
		::RPG::Client::FiveDimGameInstance* FLMODBLFAGD; // 0x40
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::OpenFiveDimWindowStagePage* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::OpenFiveDimWindowStagePage*))((::PBYTE)hIl2Cpp + IOGBKBOMGIG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOGBKBOMGIG_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void _OnPageCancelClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOGBKBOMGIG__ONPAGECANCELCLOSE_OFFSET))(this);
		}

		::System::Void _OnPageConfirmClose(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IOGBKBOMGIG__ONPAGECONFIRMCLOSE_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOGBKBOMGIG_DISPOSE_OFFSET))(this);
		}

	};
