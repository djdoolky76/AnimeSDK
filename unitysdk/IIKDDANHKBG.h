#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
namespace System { class Object; }

#define IIKDDANHKBG_AKAMIKMOPMD_OFFSET UNITYSDK_OFFSET(0x16432FE0)
#define IIKDDANHKBG_BNLJFBIHAAA_OFFSET UNITYSDK_OFFSET(0x16433080)
#define IIKDDANHKBG_CTOR_OFFSET UNITYSDK_OFFSET(0x164333F0)
#define IIKDDANHKBG_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16432440)
#define IIKDDANHKBG_EADGHOPAFFA_OFFSET UNITYSDK_OFFSET(0x16432910)
#define IIKDDANHKBG_EPINMEGPEPC_OFFSET UNITYSDK_OFFSET(0x16432F90)
#define IIKDDANHKBG_GICGDNMDLKI_OFFSET UNITYSDK_OFFSET(0x16432960)
#define IIKDDANHKBG_GIEOEOPDOBE_OFFSET UNITYSDK_OFFSET(0x164324C0)
#define IIKDDANHKBG_IOENPBCHCBL_OFFSET UNITYSDK_OFFSET(0x16433190)
#define IIKDDANHKBG_JNJIDFCJILF_OFFSET UNITYSDK_OFFSET(0x164330D0)
#define IIKDDANHKBG_JPPADFCCBNP_OFFSET UNITYSDK_OFFSET(0x16432580)
#define IIKDDANHKBG_LPANHHJJNIP_OFFSET UNITYSDK_OFFSET(0x16433120)
#define IIKDDANHKBG_OKMAEFDNKJL_OFFSET UNITYSDK_OFFSET(0x16433030)
#define IIKDDANHKBG_START_OFFSET UNITYSDK_OFFSET(0x16432180)
#define IIKDDANHKBG_STOP_OFFSET UNITYSDK_OFFSET(0x164323A0)

inline static constexpr unsigned int IIKDDANHKBG_TypeDefinitionIndex = 62146;

	class IIKDDANHKBG : public ::System::Object
	{
	public:
		::System::Boolean ECNGKFLFLEO; // 0x10
		::System::Boolean AJOBCCICDFJ; // 0x11
		::System::Boolean FCNABKLEPEK; // 0x12
		::System::Boolean NIPIGNGJLCM; // 0x13
		// static const ::System::Object IJCFOCKHJKJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIKDDANHKBG_CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIKDDANHKBG_START_OFFSET))(this);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIKDDANHKBG_STOP_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIKDDANHKBG_DISPOSE_OFFSET))(this);
		}

		::System::Boolean GIEOEOPDOBE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IIKDDANHKBG_GIEOEOPDOBE_OFFSET))(this);
		}

		::System::Void EADGHOPAFFA(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IIKDDANHKBG_EADGHOPAFFA_OFFSET))(this, a1);
		}

		::System::Void EPINMEGPEPC(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IIKDDANHKBG_EPINMEGPEPC_OFFSET))(this, a1);
		}

		::System::Void AKAMIKMOPMD(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IIKDDANHKBG_AKAMIKMOPMD_OFFSET))(this, a1);
		}

		::System::Void OKMAEFDNKJL(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IIKDDANHKBG_OKMAEFDNKJL_OFFSET))(this, a1);
		}

		::System::Void BNLJFBIHAAA(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IIKDDANHKBG_BNLJFBIHAAA_OFFSET))(this, a1);
		}

		::System::Void JNJIDFCJILF(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IIKDDANHKBG_JNJIDFCJILF_OFFSET))(this, a1);
		}

		::System::Void LPANHHJJNIP(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IIKDDANHKBG_LPANHHJJNIP_OFFSET))(this, a1);
		}

		::System::Void GICGDNMDLKI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIKDDANHKBG_GICGDNMDLKI_OFFSET))(this);
		}

		::System::Boolean JPPADFCCBNP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IIKDDANHKBG_JPPADFCCBNP_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint IOENPBCHCBL()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + IIKDDANHKBG_IOENPBCHCBL_OFFSET))(this);
		}

	};
