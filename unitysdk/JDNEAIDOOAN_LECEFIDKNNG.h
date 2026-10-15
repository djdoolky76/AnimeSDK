#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class CBAJOJJBMMA;
class GHMBKJFBPII;
class KJLLEKDIBHE;
namespace System { class String; }

#define JDNEAIDOOAN_LECEFIDKNNG_CTOR_OFFSET UNITYSDK_OFFSET(0x1660B570)

	class JDNEAIDOOAN_LECEFIDKNNG : public ::System::Object
	{
	public:
		::GHMBKJFBPII* BAPIOIOIDIP; // 0x10
		::CBAJOJJBMMA* JHNNPEOCOHK; // 0x18
		::KJLLEKDIBHE* MBAHIICKFCB; // 0x20
		::System::String* MBCACNKDMFG; // 0x28
		::System::Boolean BIPAOOKIONG; // 0x30
		::System::Boolean MHPNBPODMPD; // 0x31
		::System::Byte _padding0[0x2];
		::UnityEngine::Vector3 BBFOLEOPPPL; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDNEAIDOOAN_LECEFIDKNNG_CTOR_OFFSET))(this);
		}

	};
