#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LFNHCACMDBJ;
class NIMHLHECACH;

#define LFNHCACMDBJ_CCTOR_OFFSET UNITYSDK_OFFSET(0xB685AE0)
#define LFNHCACMDBJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB6859B0)
#define LFNHCACMDBJ_GGBLHEHJBDO_OFFSET UNITYSDK_OFFSET(0xB685930)
#define LFNHCACMDBJ_MBABPIHGAJN_OFFSET UNITYSDK_OFFSET(0xB6859C0)

inline static constexpr unsigned int LFNHCACMDBJ_TypeDefinitionIndex = 75277;

	class LFNHCACMDBJ : public ::System::Object
	{
	public:
		static ::LFNHCACMDBJ** StaticGet_EMLNOINPICJ()
		{
			return (::LFNHCACMDBJ**)UnitySDK::FromName("", "LFNHCACMDBJ")->GetStaticField(0x5BBF0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFNHCACMDBJ_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LFNHCACMDBJ_CCTOR_OFFSET))();
		}

		static ::LFNHCACMDBJ* GGBLHEHJBDO()
		{
			return ((::LFNHCACMDBJ*(*)())((::PBYTE)hIl2Cpp + LFNHCACMDBJ_GGBLHEHJBDO_OFFSET))();
		}

		::System::Void MBABPIHGAJN(::NIMHLHECACH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NIMHLHECACH*))((::PBYTE)hIl2Cpp + LFNHCACMDBJ_MBABPIHGAJN_OFFSET))(this, a1);
		}

	};
