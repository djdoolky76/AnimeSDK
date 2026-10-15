#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class ActivityElationAvatarData; }

#define MIBMCOGJKFH_GDFBJEJDHIL_OFFSET UNITYSDK_OFFSET(0xB94FB30)
#define MIBMCOGJKFH_GNBIFOPNBLO_OFFSET UNITYSDK_OFFSET(0xB94FD40)
#define MIBMCOGJKFH_JAMENDLLLID_OFFSET UNITYSDK_OFFSET(0xB94FBA0)
#define MIBMCOGJKFH_JJABJNHLLKN_OFFSET UNITYSDK_OFFSET(0xB94FE00)

	class MIBMCOGJKFH : public ::System::Object
	{
	public:
		// static const ::System::Object GIPCDAPNIOD; // 0x0
		static ::System::Int32 GDFBJEJDHIL(::System::Boolean a1, ::System::UInt32 a2)
		{
			return ((::System::Int32(*)(::System::Boolean, ::System::UInt32))((::PBYTE)hIl2Cpp + MIBMCOGJKFH_GDFBJEJDHIL_OFFSET))(a1, a2);
		}

		static ::System::UInt32 JAMENDLLLID(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + MIBMCOGJKFH_JAMENDLLLID_OFFSET))(a1);
		}

		static ::RPG::Client::ActivityElationAvatarData* GNBIFOPNBLO(::System::UInt32 a1)
		{
			return ((::RPG::Client::ActivityElationAvatarData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + MIBMCOGJKFH_GNBIFOPNBLO_OFFSET))(a1);
		}

		static ::System::Boolean JJABJNHLLKN(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + MIBMCOGJKFH_JJABJNHLLKN_OFFSET))(a1);
		}

	};
