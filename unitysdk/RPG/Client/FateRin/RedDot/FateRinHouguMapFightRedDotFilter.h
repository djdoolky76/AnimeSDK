#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PEAFBFCPFCC;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_FATERIN_REDDOT_FATERINHOUGUMAPFIGHTREDDOTFILTER_CTOR_OFFSET UNITYSDK_OFFSET(0xCFAE500)
#define RPG_CLIENT_FATERIN_REDDOT_FATERINHOUGUMAPFIGHTREDDOTFILTER_GETNEWFIGHTSUBKEYS_OFFSET UNITYSDK_OFFSET(0xCFAE550)

namespace RPG::Client::FateRin::RedDot
{
	inline static constexpr unsigned int FateRinHouguMapFightRedDotFilter_TypeDefinitionIndex = 80740;

	class FateRinHouguMapFightRedDotFilter : public ::System::Object
	{
	public:
		::PEAFBFCPFCC* _RedDotService; // 0x10
		::System::Void _ctor(::PEAFBFCPFCC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PEAFBFCPFCC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_REDDOT_FATERINHOUGUMAPFIGHTREDDOTFILTER_CTOR_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetNewFightSubKeys()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_REDDOT_FATERINHOUGUMAPFIGHTREDDOTFILTER_GETNEWFIGHTSUBKEYS_OFFSET))(this);
		}

	};
}
