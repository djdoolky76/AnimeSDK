#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CFGFAHEKNPD.h"
class NKIJFPHFJCO;
class OFMDPNPMFCE_CIGNMHOJIPG;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define KGGELNKBOIK_AMKBPBEAGFJ_OFFSET UNITYSDK_OFFSET(0x1C56C8A0)
#define KGGELNKBOIK_BIIMMHHPPCP_OFFSET UNITYSDK_OFFSET(0x1C56C730)
#define KGGELNKBOIK_BOFKKNEEJAM_OFFSET UNITYSDK_OFFSET(0x1C56C6E0)
#define KGGELNKBOIK_CTOR_OFFSET UNITYSDK_OFFSET(0x1C56C3A0)
#define KGGELNKBOIK_EDBDAAKMDFI_OFFSET UNITYSDK_OFFSET(0x1C56C8F0)
#define KGGELNKBOIK_EDMOBLMKHNJ_OFFSET UNITYSDK_OFFSET(0x1C56C5E0)
#define KGGELNKBOIK_LDAMHBBILAD_OFFSET UNITYSDK_OFFSET(0x1C56C340)
#define KGGELNKBOIK_NCLOMPDLJPB_OFFSET UNITYSDK_OFFSET(0x1C56C470)

inline static constexpr unsigned int KGGELNKBOIK_TypeDefinitionIndex = 41772;

	class KGGELNKBOIK : public ::CFGFAHEKNPD
	{
	public:
		::System::Collections::Generic::HashSet_1<::NKIJFPHFJCO*>* DFOLEAEBAIL; // 0x18
		::OFMDPNPMFCE_CIGNMHOJIPG* HFCAFAMBDKK; // 0x20
		::System::Void _ctor(::OFMDPNPMFCE_CIGNMHOJIPG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OFMDPNPMFCE_CIGNMHOJIPG*))((::PBYTE)hIl2Cpp + KGGELNKBOIK_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean LDAMHBBILAD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KGGELNKBOIK_LDAMHBBILAD_OFFSET))(this);
		}

		::System::Boolean NCLOMPDLJPB(::NKIJFPHFJCO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NKIJFPHFJCO*))((::PBYTE)hIl2Cpp + KGGELNKBOIK_NCLOMPDLJPB_OFFSET))(this, a1);
		}

		::System::Boolean BOFKKNEEJAM(::NKIJFPHFJCO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NKIJFPHFJCO*))((::PBYTE)hIl2Cpp + KGGELNKBOIK_BOFKKNEEJAM_OFFSET))(this, a1);
		}

		::System::Boolean AMKBPBEAGFJ(::NKIJFPHFJCO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NKIJFPHFJCO*))((::PBYTE)hIl2Cpp + KGGELNKBOIK_AMKBPBEAGFJ_OFFSET))(this, a1);
		}

		::System::Boolean BIIMMHHPPCP(::NKIJFPHFJCO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NKIJFPHFJCO*))((::PBYTE)hIl2Cpp + KGGELNKBOIK_BIIMMHHPPCP_OFFSET))(this, a1);
		}

		::System::Boolean EDBDAAKMDFI(::NKIJFPHFJCO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NKIJFPHFJCO*))((::PBYTE)hIl2Cpp + KGGELNKBOIK_EDBDAAKMDFI_OFFSET))(this, a1);
		}

		::System::Void EDMOBLMKHNJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGGELNKBOIK_EDMOBLMKHNJ_OFFSET))(this);
		}

	};
