#pragma once
#include "unitysdk/unitysdk.h"
class EEFPHECAIEK;
class KFELGAIGHAP;
namespace RPG::GameCore { class TaskContext; }

#define GOACICDFLBA_CTOR_OFFSET UNITYSDK_OFFSET(0x15B16D70)
#define GOACICDFLBA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15B16E10)

inline static constexpr unsigned int GOACICDFLBA_TypeDefinitionIndex = 53828;

	class GOACICDFLBA
	{
	public:
		::KFELGAIGHAP* OODBJDPKKKF; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::EEFPHECAIEK* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::EEFPHECAIEK*))((::PBYTE)hIl2Cpp + GOACICDFLBA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOACICDFLBA_ONTASKBEGIN_OFFSET))(this);
		}

	};
