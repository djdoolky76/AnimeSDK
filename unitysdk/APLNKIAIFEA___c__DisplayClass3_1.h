#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/APLNKIAIFEA_MOODJBCCCPC.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::Promises { class IPromise; }
namespace System { class Object; }

#define APLNKIAIFEA___C__DISPLAYCLASS3_1_CTOR_OFFSET UNITYSDK_OFFSET(0x15BB46E0)
#define APLNKIAIFEA___C__DISPLAYCLASS3_1__DEVELOPCARASYNC_B__1_OFFSET UNITYSDK_OFFSET(0x15BB46F0)

	template <typename T>
	class APLNKIAIFEA___c__DisplayClass3_1 : public ::System::Object
	{
	public:
		::APLNKIAIFEA_MOODJBCCCPC syncResult; // 0x10
		::System::Object* CS___8__locals1; // 0x20
		::System::UInt32 oldPartID; // 0x28
		::System::UInt32 newPartID; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APLNKIAIFEA___C__DISPLAYCLASS3_1_CTOR_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _DevelopCarAsync_b__1()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + APLNKIAIFEA___C__DISPLAYCLASS3_1__DEVELOPCARASYNC_B__1_OFFSET))(this);
		}

	};
