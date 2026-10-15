#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_DIALOGEMITTERCONTROLLERMONOPLUGIN_DIALOGDATAGROUP_CTOR_OFFSET UNITYSDK_OFFSET(0xCBFBAF0)

namespace RPG::Client
{
	class DialogEmitterControllerMonoPlugin_DialogDataGroup : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* Contents; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGEMITTERCONTROLLERMONOPLUGIN_DIALOGDATAGROUP_CTOR_OFFSET))(this);
		}

	};
}
