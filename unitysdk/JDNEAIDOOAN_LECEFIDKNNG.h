#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class CBAJOJJBMMA;
class GHMBKJFBPII;
class KJLLEKDIBHE;
namespace System { class String; }

#define JDNEAIDOOAN_LECEFIDKNNG_CTOR_OFFSET UNITYSDK_OFFSET(0x13053CE0)

inline static constexpr unsigned int JDNEAIDOOAN_LECEFIDKNNG_TypeDefinitionIndex = 50005;

	class JDNEAIDOOAN_LECEFIDKNNG : public ::System::Object
	{
	public:
		::System::String* MBCACNKDMFG; // 0x10
		::KJLLEKDIBHE* MBAHIICKFCB; // 0x18
		::CBAJOJJBMMA* JHNNPEOCOHK; // 0x20
		::GHMBKJFBPII* BAPIOIOIDIP; // 0x28
		::UnityEngine::Vector3 BBFOLEOPPPL; // 0x30
		::System::Boolean MHPNBPODMPD; // 0x3C
		::System::Boolean BIPAOOKIONG; // 0x3D
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDNEAIDOOAN_LECEFIDKNNG_CTOR_OFFSET))(this);
		}

	};
