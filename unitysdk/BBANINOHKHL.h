#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/WanFaLianJiStartType.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }

#define BBANINOHKHL_CTOR_OFFSET UNITYSDK_OFFSET(0x15E80EF0)

	class BBANINOHKHL : public ::System::Object
	{
	public:
		::System::Object* EHIELLKLPCK; // 0x10
		::RPG::Client::WanFaLianJiStartType MMLCJDJLNPK; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBANINOHKHL_CTOR_OFFSET))(this);
		}

	};
