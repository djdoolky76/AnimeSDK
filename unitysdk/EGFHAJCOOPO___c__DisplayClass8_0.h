#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OJHMEHAHDNI;
namespace RPG::Client::Promises { class IPromise; }

#define EGFHAJCOOPO___C__DISPLAYCLASS8_0_CTOR_OFFSET UNITYSDK_OFFSET(0x14513B70)
#define EGFHAJCOOPO___C__DISPLAYCLASS8_0__REQUESTDATAANDSHOWMAINPAGEASYNC_B__0_OFFSET UNITYSDK_OFFSET(0x14516790)

inline static constexpr unsigned int EGFHAJCOOPO___c__DisplayClass8_0_TypeDefinitionIndex = 81752;

	class EGFHAJCOOPO___c__DisplayClass8_0 : public ::System::Object
	{
	public:
		::OJHMEHAHDNI* activityService; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGFHAJCOOPO___C__DISPLAYCLASS8_0_CTOR_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _RequestDataAndShowMainPageAsync_b__0()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + EGFHAJCOOPO___C__DISPLAYCLASS8_0__REQUESTDATAANDSHOWMAINPAGEASYNC_B__0_OFFSET))(this);
		}

	};
