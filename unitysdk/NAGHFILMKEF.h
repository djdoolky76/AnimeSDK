#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class JSONNode; }
namespace MiHoYo::SDK { class JSONObject; }
namespace System { class String; }

#define NAGHFILMKEF_FHDOJBFEKFO_OFFSET UNITYSDK_OFFSET(0x1059F4E0)
#define NAGHFILMKEF_LCNIAMNKONF_OFFSET UNITYSDK_OFFSET(0x1059EF40)

inline static constexpr unsigned int NAGHFILMKEF_TypeDefinitionIndex = 52643;

class NAGHFILMKEF : public ::System::Object
{
public:
	static ::System::String* LCNIAMNKONF(::MiHoYo::SDK::JSONObject* CAOOFFAONLP, ::System::UInt64 ADGEDIIGAJO)
	{
		return ((::System::String*(*)(::MiHoYo::SDK::JSONObject*, ::System::UInt64))((::PBYTE)hIl2Cpp + NAGHFILMKEF_LCNIAMNKONF_OFFSET))(CAOOFFAONLP, ADGEDIIGAJO);
	}

	static ::MiHoYo::SDK::JSONNode* FHDOJBFEKFO(::System::String* BNNPDDOBGNP)
	{
		return ((::MiHoYo::SDK::JSONNode*(*)(::System::String*))((::PBYTE)hIl2Cpp + NAGHFILMKEF_FHDOJBFEKFO_OFFSET))(BNNPDDOBGNP);
	}
};
