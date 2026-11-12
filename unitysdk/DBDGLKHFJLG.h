#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class EnablePlayerPlayIdleShow; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define DBDGLKHFJLG_CTOR_OFFSET UNITYSDK_OFFSET(0xEB7EA10)
#define DBDGLKHFJLG_LKFBHLBHPDI_OFFSET UNITYSDK_OFFSET(0xEB7EB60)
#define DBDGLKHFJLG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xEB7EA40)

inline static constexpr unsigned int DBDGLKHFJLG_TypeDefinitionIndex = 53890;

	class DBDGLKHFJLG
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::EnablePlayerPlayIdleShow* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::EnablePlayerPlayIdleShow*))((::PBYTE)hIl2Cpp + DBDGLKHFJLG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBDGLKHFJLG_ONTASKBEGIN_OFFSET))(this);
		}

		static ::System::Void LKFBHLBHPDI(::System::Object* a1)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + DBDGLKHFJLG_LKFBHLBHPDI_OFFSET))(a1);
		}

	};
