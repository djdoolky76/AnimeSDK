#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
#include "unitysdk/RPG/Client/NotifyType.h"
class KFELGAIGHAP;
namespace RPG::GameCore { class TaskContext; }

namespace RPG::GameCore
{
	template <typename T>
	class OpenUIPageTaskBase_1 : public ::GELIALJDFBL
	{
	public:
		::KFELGAIGHAP* _OnCancel; // 0x0
		::KFELGAIGHAP* _OnUIEnter; // 0x0
		::System::Boolean _IsOnCancelRunning; // 0x0
		::System::Boolean _IsConfirmClose; // 0x0
		T _ConfigRef; // 0x0
		::RPG::GameCore::TaskContext* _TaskContext; // 0x0
		::RPG::Client::NotifyType _ConfirmNotifyType; // 0x0
	};
}
