#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LEMPCCICHAA.h"
class KAKADGHNMFK;
namespace System { class String; }

#define IGJNPBGEBHE_APGKFOIOKMF_OFFSET UNITYSDK_OFFSET(0x1640FCF0)
#define IGJNPBGEBHE_CTOR_OFFSET UNITYSDK_OFFSET(0x1640FE10)
#define IGJNPBGEBHE_KAJOBJFIAMJ_OFFSET UNITYSDK_OFFSET(0x1640FCA0)
#define IGJNPBGEBHE_MHKBGJFJBBH_OFFSET UNITYSDK_OFFSET(0x1640FD60)

	class IGJNPBGEBHE : public ::LEMPCCICHAA
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGJNPBGEBHE_CTOR_OFFSET))(this);
		}

		::System::String* KAJOBJFIAMJ()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IGJNPBGEBHE_KAJOBJFIAMJ_OFFSET))(this);
		}

		::System::Void APGKFOIOKMF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGJNPBGEBHE_APGKFOIOKMF_OFFSET))(this);
		}

		::System::Void MHKBGJFJBBH(::KAKADGHNMFK* a1, ::KAKADGHNMFK* a2)
		{
			return ((::System::Void(*)(::PVOID, ::KAKADGHNMFK*, ::KAKADGHNMFK*))((::PBYTE)hIl2Cpp + IGJNPBGEBHE_MHKBGJFJBBH_OFFSET))(this, a1, a2);
		}

	};
