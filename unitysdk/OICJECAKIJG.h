#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/NotifyType.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }

#define OICJECAKIJG_CTOR_OFFSET UNITYSDK_OFFSET(0xBE76A80)

	class OICJECAKIJG : public ::System::Object
	{
	public:
		::System::Object* NNACKOBKFGE; // 0x10
		::RPG::Client::NotifyType ABIKECHFPAO; // 0x18
		::System::Void _ctor(::RPG::Client::NotifyType a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::NotifyType, ::System::Object*))((::PBYTE)hIl2Cpp + OICJECAKIJG_CTOR_OFFSET))(this, a1, a2);
		}

	};
