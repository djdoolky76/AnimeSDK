#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector2.h"

#define HGCDFKINFPA_BDBDBFJOIMF_OFFSET UNITYSDK_OFFSET(0x3C2AA50)
#define HGCDFKINFPA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C637790)
#define HGCDFKINFPA_DHLFOMCKGGO_OFFSET UNITYSDK_OFFSET(0x1C6373E0)
#define HGCDFKINFPA_HMFJIGOGKLJ_OFFSET UNITYSDK_OFFSET(0x1C637730)
#define HGCDFKINFPA_MOOENEIANFA_OFFSET UNITYSDK_OFFSET(0x3C2AAA0)
#define HGCDFKINFPA_OBIIJABDNPC_OFFSET UNITYSDK_OFFSET(0x3C2AA00)

inline static constexpr unsigned int HGCDFKINFPA_TypeDefinitionIndex = 36556;

	struct alignas(4) HGCDFKINFPA
	{
		::RPG::MVector2 EFNAJMADAHM; // 0x10
		::RPG::MVector2 NKAACMGNNPK; // 0x18
		static ::HGCDFKINFPA* StaticGet_NCHDGCKDJCK()
		{
			return (::HGCDFKINFPA*)UnitySDK::FromName("", "HGCDFKINFPA")->GetStaticField(0x710);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HGCDFKINFPA_CCTOR_OFFSET))();
		}

		::System::Single OBIIJABDNPC()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HGCDFKINFPA_OBIIJABDNPC_OFFSET))(this);
		}

		::System::Single BDBDBFJOIMF()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HGCDFKINFPA_BDBDBFJOIMF_OFFSET))(this);
		}

		::RPG::MVector2 MOOENEIANFA()
		{
			return ((::RPG::MVector2(*)(::PVOID))((::PBYTE)hIl2Cpp + HGCDFKINFPA_MOOENEIANFA_OFFSET))(this);
		}

		/*
		static ::HGCDFKINFPA DHLFOMCKGGO(::HGCDFKINFPA a1, ::HGCDFKINFPA a2)
		{
			return ((::HGCDFKINFPA(*)(::HGCDFKINFPA, ::HGCDFKINFPA))((::PBYTE)hIl2Cpp + HGCDFKINFPA_DHLFOMCKGGO_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::HGCDFKINFPA HMFJIGOGKLJ()
		{
			return ((::HGCDFKINFPA(*)())((::PBYTE)hIl2Cpp + HGCDFKINFPA_HMFJIGOGKLJ_OFFSET))();
		}
		*/

	};
