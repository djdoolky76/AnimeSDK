#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/DisplayMessageBase.h"

class JFLHGHFBNGJ;

#define MOLEMOLE_UIFINISHACHIEVEMENTPOP_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x17085F60)
#define MOLEMOLE_UIFINISHACHIEVEMENTPOP_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x17085FB0)
#define MOLEMOLE_UIFINISHACHIEVEMENTPOP__CTOR_OFFSET UNITYSDK_OFFSET(0x17085F70)

namespace MoleMole
{
	inline static constexpr unsigned int UIFinishAchievementPop_TypeDefinitionIndex = 64178;

	class UIFinishAchievementPop : public ::MoleMole::DisplayMessageBase
	{
	public:
		::JFLHGHFBNGJ* _data; // 0x28

		::System::Void _ctor(::JFLHGHFBNGJ* data)
		{
			return ((::System::Void(*)(::PVOID, ::JFLHGHFBNGJ*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFINISHACHIEVEMENTPOP__CTOR_OFFSET))(this, data);
		}

		::System::Int32 get_Priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFINISHACHIEVEMENTPOP_GET_PRIORITY_OFFSET))(this);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFINISHACHIEVEMENTPOP_ONPROCESS_OFFSET))(this);
		}
	};
}
