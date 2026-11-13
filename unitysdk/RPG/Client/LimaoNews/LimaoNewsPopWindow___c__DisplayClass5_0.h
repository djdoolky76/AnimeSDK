#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::LimaoNews { class LimaoNewsPopWindow; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOPWINDOW___C__DISPLAYCLASS5_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1DFC8AD0)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsPopWindow___c__DisplayClass5_0_TypeDefinitionIndex = 83128;

	class LimaoNewsPopWindow___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::IList_1<::RPG::Client::LimaoNews::LimaoNewsPopWindow*>* windowList; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOPWINDOW___C__DISPLAYCLASS5_0_CTOR_OFFSET))(this);
		}

	};
}
