#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }

#define NNPDAHNCAMK_DANOMHICHAA_CTOR_OFFSET UNITYSDK_OFFSET(0xBCDEFD0)

	class NNPDAHNCAMK_DANOMHICHAA : public ::System::Object
	{
	public:
		::System::Object* FDMNBHNAEED; // 0x10
		::System::Action* IMDLGFPMPEK; // 0x18
		::System::Void _ctor(::System::Action* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Object*))((::PBYTE)hIl2Cpp + NNPDAHNCAMK_DANOMHICHAA_CTOR_OFFSET))(this, a1, a2);
		}

	};
