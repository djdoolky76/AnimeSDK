#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BundleType.h"
#include "unitysdk/System/Object.h"
class HJEIEIFLDGN;
namespace System { class String; }

#define AICCDJOGBBO_DFOJLPDONJP_OFFSET UNITYSDK_OFFSET(0x1C42ED90)
#define AICCDJOGBBO_JEOEAFMGOBC_OFFSET UNITYSDK_OFFSET(0x1C42F230)
#define AICCDJOGBBO_KDNBABDFBLB_OFFSET UNITYSDK_OFFSET(0x1C42F180)

	class AICCDJOGBBO : public ::System::Object
	{
	public:
		static ::System::Boolean DFOJLPDONJP(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + AICCDJOGBBO_DFOJLPDONJP_OFFSET))(a1);
		}

		static ::System::Boolean KDNBABDFBLB(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + AICCDJOGBBO_KDNBABDFBLB_OFFSET))(a1);
		}

		static ::HJEIEIFLDGN* JEOEAFMGOBC(::System::String* a1, ::RPG::Client::BundleType a2)
		{
			return ((::HJEIEIFLDGN*(*)(::System::String*, ::RPG::Client::BundleType))((::PBYTE)hIl2Cpp + AICCDJOGBBO_JEOEAFMGOBC_OFFSET))(a1, a2);
		}

	};
