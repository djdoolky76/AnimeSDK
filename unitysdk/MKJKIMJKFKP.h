#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EGDPGOHKLPI;
class PDEFOKILHLE;
namespace System { class String; }

#define MKJKIMJKFKP_CTOR_OFFSET UNITYSDK_OFFSET(0xB998BD0)
#define MKJKIMJKFKP_FPKLDCGAJGP_OFFSET UNITYSDK_OFFSET(0xB998AD0)

	class MKJKIMJKFKP : public ::System::Object
	{
	public:
		static ::EGDPGOHKLPI** StaticGet_IFCMENDDFIK()
		{
			return (::EGDPGOHKLPI**)UnitySDK::FromName("", "MKJKIMJKFKP")->GetStaticField(0x1B10);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKJKIMJKFKP_CTOR_OFFSET))(this);
		}

		static ::PDEFOKILHLE* FPKLDCGAJGP(::System::String* a1)
		{
			return ((::PDEFOKILHLE*(*)(::System::String*))((::PBYTE)hIl2Cpp + MKJKIMJKFKP_FPKLDCGAJGP_OFFSET))(a1);
		}

	};
