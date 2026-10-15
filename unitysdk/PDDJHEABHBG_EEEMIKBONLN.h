#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PDDJHEABHBG_OFGJIFKNJCA;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }

#define PDDJHEABHBG_EEEMIKBONLN_CGEJMGFOLMP_OFFSET UNITYSDK_OFFSET(0xC00DB50)
#define PDDJHEABHBG_EEEMIKBONLN_CTOR_OFFSET UNITYSDK_OFFSET(0xC00DA30)
#define PDDJHEABHBG_EEEMIKBONLN_ELLOGMLBGKM_OFFSET UNITYSDK_OFFSET(0xC00E4E0)
#define PDDJHEABHBG_EEEMIKBONLN_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xC00DA40)
#define PDDJHEABHBG_EEEMIKBONLN_LIBLNOGKPKN_OFFSET UNITYSDK_OFFSET(0xC00E5E0)

inline static constexpr unsigned int PDDJHEABHBG_EEEMIKBONLN_TypeDefinitionIndex = 60942;

	class PDDJHEABHBG_EEEMIKBONLN : public ::System::Object
	{
	public:
		::System::Collections::Generic::Stack_1<::System::Object*>* EKKEAAGGFHM; // 0x10
		::System::Int32 HDHPNOOMAGE; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDDJHEABHBG_EEEMIKBONLN_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PDDJHEABHBG_EEEMIKBONLN_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void CGEJMGFOLMP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDDJHEABHBG_EEEMIKBONLN_CGEJMGFOLMP_OFFSET))(this);
		}

		::PDDJHEABHBG_OFGJIFKNJCA* LIBLNOGKPKN()
		{
			return ((::PDDJHEABHBG_OFGJIFKNJCA*(*)(::PVOID))((::PBYTE)hIl2Cpp + PDDJHEABHBG_EEEMIKBONLN_LIBLNOGKPKN_OFFSET))(this);
		}

		::System::Void ELLOGMLBGKM(::PDDJHEABHBG_OFGJIFKNJCA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PDDJHEABHBG_OFGJIFKNJCA*))((::PBYTE)hIl2Cpp + PDDJHEABHBG_EEEMIKBONLN_ELLOGMLBGKM_OFFSET))(this, a1);
		}

	};
