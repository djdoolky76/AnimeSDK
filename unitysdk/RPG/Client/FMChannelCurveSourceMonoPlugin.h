#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::Client { class FMChannelCurve; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_FMCHANNELCURVESOURCEMONOPLUGIN_CTOR_OFFSET UNITYSDK_OFFSET(0xCE5F290)

namespace RPG::Client
{
	inline static constexpr unsigned int FMChannelCurveSourceMonoPlugin_TypeDefinitionIndex = 70290;

	class FMChannelCurveSourceMonoPlugin
	{
	public:
		::System::String* Name; // 0x30
		::System::Single Duration; // 0x38
		::System::Single SpeedRatio; // 0x3C
		::System::Collections::Generic::List_1<::RPG::Client::FMChannelCurve*>* CompositeCurves; // 0x40
		::System::Boolean AutoPlay; // 0x48
		::System::Byte _padding0[0x3];
		::System::Single Progress; // 0x4C
		::System::Collections::Generic::List_1<::System::String*>* AllChannelSourceNames; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FMCHANNELCURVESOURCEMONOPLUGIN_CTOR_OFFSET))(this);
		}

	};
}
