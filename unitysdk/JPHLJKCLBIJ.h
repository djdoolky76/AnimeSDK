#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/NotifyType.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }

#define JPHLJKCLBIJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB2C0BF0)

	class JPHLJKCLBIJ : public ::System::Object
	{
	public:
		::System::Object* LBJJPCCEHLF; // 0x10
		::RPG::Client::NotifyType ABIKECHFPAO; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPHLJKCLBIJ_CTOR_OFFSET))(this);
		}

	};
