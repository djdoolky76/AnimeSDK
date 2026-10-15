#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WriteFsvToDynamicValue; }

#define FHOIJDCMNJD_CTOR_OFFSET UNITYSDK_OFFSET(0x15793500)
#define FHOIJDCMNJD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15793530)

	class FHOIJDCMNJD
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WriteFsvToDynamicValue* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WriteFsvToDynamicValue*))((::PBYTE)hIl2Cpp + FHOIJDCMNJD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHOIJDCMNJD_ONTASKBEGIN_OFFSET))(this);
		}

	};
