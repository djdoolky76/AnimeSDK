#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

#define HLFEDPHBLBE_CTOR_OFFSET UNITYSDK_OFFSET(0x15D5E920)

	class HLFEDPHBLBE : public ::System::Object
	{
	public:
		::RPG::Client::TextID NFCHLOMEGFA; // 0x10
		::System::Single FIJLEDEKBJP; // 0x20
		::System::Boolean INFEKIKKPCB; // 0x24
		::System::Boolean GNDCCBNILML; // 0x25
		::System::Boolean BJKJILAKNFD; // 0x26
		::System::Byte _padding0[0x1];
		::System::Int32 HCDEOKNIGKG; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLFEDPHBLBE_CTOR_OFFSET))(this);
		}

	};
