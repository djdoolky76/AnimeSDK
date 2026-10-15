#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GCBOJGNGLGO;
namespace RPG::Client::Promises { class Promise; }

#define GCBOJGNGLGO___C__DISPLAYCLASS5_0_CTOR_OFFSET UNITYSDK_OFFSET(0x15955640)
#define GCBOJGNGLGO___C__DISPLAYCLASS5_0___SHOWWORLDFINISHTOAST_B__0_OFFSET UNITYSDK_OFFSET(0x159556E0)

inline static constexpr unsigned int GCBOJGNGLGO___c__DisplayClass5_0_TypeDefinitionIndex = 66959;

	class GCBOJGNGLGO___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::GCBOJGNGLGO* __4__this; // 0x10
		::System::Boolean isShowAfterReconnect; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCBOJGNGLGO___C__DISPLAYCLASS5_0_CTOR_OFFSET))(this);
		}

		::RPG::Client::Promises::Promise* __ShowWorldFinishToast_b__0()
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + GCBOJGNGLGO___C__DISPLAYCLASS5_0___SHOWWORLDFINISHTOAST_B__0_OFFSET))(this);
		}

	};
