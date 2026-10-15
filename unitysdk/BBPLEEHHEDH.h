#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
namespace System { class Object; }

#define BBPLEEHHEDH_BIIFFNKNLFN_OFFSET UNITYSDK_OFFSET(0x15E9F110)
#define BBPLEEHHEDH_CTOR_OFFSET UNITYSDK_OFFSET(0x15E9F640)
#define BBPLEEHHEDH__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x15E9F030)

	class BBPLEEHHEDH : public ::RPG::Client::BaseModule
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBPLEEHHEDH_CTOR_OFFSET))(this);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBPLEEHHEDH__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void BIIFFNKNLFN(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + BBPLEEHHEDH_BIIFFNKNLFN_OFFSET))(this, a1, a2);
		}

	};
