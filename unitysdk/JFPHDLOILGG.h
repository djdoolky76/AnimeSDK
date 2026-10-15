#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BFHEHDNBJLL.h"
#include "unitysdk/JFHILPANBNL.h"
namespace MiHoYoSDKJSON { class JSONNode; }

#define JFPHDLOILGG_CTOR_OFFSET UNITYSDK_OFFSET(0x1665D040)
#define JFPHDLOILGG_FPKLDCGAJGP_OFFSET UNITYSDK_OFFSET(0x1665CEC0)
#define JFPHDLOILGG_HJNHPDOLMJA_OFFSET UNITYSDK_OFFSET(0x1665CF10)
#define JFPHDLOILGG_MJHEKFEAOPE_OFFSET UNITYSDK_OFFSET(0x1665CF90)
#define JFPHDLOILGG_OKFGOAFJEHL_OFFSET UNITYSDK_OFFSET(0x1665CF50)

	class JFPHDLOILGG : public ::BFHEHDNBJLL
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFPHDLOILGG_CTOR_OFFSET))(this);
		}

		::System::Void FPKLDCGAJGP(::MiHoYoSDKJSON::JSONNode* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYoSDKJSON::JSONNode*))((::PBYTE)hIl2Cpp + JFPHDLOILGG_FPKLDCGAJGP_OFFSET))(this, a1);
		}

		::System::UInt32 HJNHPDOLMJA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JFPHDLOILGG_HJNHPDOLMJA_OFFSET))(this);
		}

		::System::UInt32 OKFGOAFJEHL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JFPHDLOILGG_OKFGOAFJEHL_OFFSET))(this);
		}

		::JFHILPANBNL MJHEKFEAOPE()
		{
			return ((::JFHILPANBNL(*)(::PVOID))((::PBYTE)hIl2Cpp + JFPHDLOILGG_MJHEKFEAOPE_OFFSET))(this);
		}

	};
