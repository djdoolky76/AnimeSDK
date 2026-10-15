#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/NotifyType.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class String; }

#define JLKNHNFJLDJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB24D430)
#define JLKNHNFJLDJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0xB24D440)
#define JLKNHNFJLDJ_TRIGGERACTION_OFFSET UNITYSDK_OFFSET(0xB24D500)

	class JLKNHNFJLDJ : public ::System::Object
	{
	public:
		::System::Object* BAELGJMOKBO; // 0x10
		::RPG::Client::NotifyType AJBMOLOFCPN; // 0x18
		::System::Void _ctor(::RPG::Client::NotifyType a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::NotifyType, ::System::Object*))((::PBYTE)hIl2Cpp + JLKNHNFJLDJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JLKNHNFJLDJ_TOSTRING_OFFSET))(this);
		}

		::System::Void TriggerAction()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLKNHNFJLDJ_TRIGGERACTION_OFFSET))(this);
		}

	};
