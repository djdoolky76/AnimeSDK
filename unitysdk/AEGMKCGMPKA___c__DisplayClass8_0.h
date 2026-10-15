#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AEGMKCGMPKA;
class NIEPBHBOCBI;
namespace RPG::Client::Promises { class IPromise; }

#define AEGMKCGMPKA___C__DISPLAYCLASS8_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB150830)
#define AEGMKCGMPKA___C__DISPLAYCLASS8_0__SENDSETLINEUPCSREQ_B__0_OFFSET UNITYSDK_OFFSET(0xB150D70)

inline static constexpr unsigned int AEGMKCGMPKA___c__DisplayClass8_0_TypeDefinitionIndex = 63939;

	class AEGMKCGMPKA___c__DisplayClass8_0 : public ::System::Object
	{
	public:
		::AEGMKCGMPKA* __4__this; // 0x10
		::System::UInt32 mapID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEGMKCGMPKA___C__DISPLAYCLASS8_0_CTOR_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _SendSetLineupCsReq_b__0(::NIEPBHBOCBI* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::NIEPBHBOCBI*))((::PBYTE)hIl2Cpp + AEGMKCGMPKA___C__DISPLAYCLASS8_0__SENDSETLINEUPCSREQ_B__0_OFFSET))(this, a1);
		}

	};
