#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PEAFBFCPFCC;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_FATERIN_REDDOT_FATERINCASEBOARDREDDOTFILTER_CTOR_OFFSET UNITYSDK_OFFSET(0xCFA56D0)
#define RPG_CLIENT_FATERIN_REDDOT_FATERINCASEBOARDREDDOTFILTER_GETTEAMDETAILSUBKEYS_OFFSET UNITYSDK_OFFSET(0xCFA5720)
#define RPG_CLIENT_FATERIN_REDDOT_FATERINCASEBOARDREDDOTFILTER_ISMAINPAGENEW_OFFSET UNITYSDK_OFFSET(0xCFA5770)

namespace RPG::Client::FateRin::RedDot
{
	inline static constexpr unsigned int FateRinCaseBoardRedDotFilter_TypeDefinitionIndex = 80736;

	class FateRinCaseBoardRedDotFilter : public ::System::Object
	{
	public:
		::PEAFBFCPFCC* _RedDotService; // 0x10
		::System::Void _ctor(::PEAFBFCPFCC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PEAFBFCPFCC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_REDDOT_FATERINCASEBOARDREDDOTFILTER_CTOR_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetTeamDetailSubKeys()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_REDDOT_FATERINCASEBOARDREDDOTFILTER_GETTEAMDETAILSUBKEYS_OFFSET))(this);
		}

		::System::Boolean IsMainPageNew()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_REDDOT_FATERINCASEBOARDREDDOTFILTER_ISMAINPAGENEW_OFFSET))(this);
		}

	};
}
