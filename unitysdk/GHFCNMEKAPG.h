#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BCFDAHOHJEA.h"
namespace System { class String; }

#define GHFCNMEKAPG_CCTOR_OFFSET UNITYSDK_OFFSET(0x15A0D200)
#define GHFCNMEKAPG_CTOR_OFFSET UNITYSDK_OFFSET(0x15A0D1D0)
#define GHFCNMEKAPG__ONBIND_OFFSET UNITYSDK_OFFSET(0x15A0CEB0)

inline static constexpr unsigned int GHFCNMEKAPG_TypeDefinitionIndex = 71498;

	class GHFCNMEKAPG : public ::BCFDAHOHJEA
	{
	public:
		static ::System::String** StaticGet_JFCMCPFPDFP()
		{
			return (::System::String**)UnitySDK::FromName("", "GHFCNMEKAPG")->GetStaticField(0x2BDA0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHFCNMEKAPG_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GHFCNMEKAPG_CCTOR_OFFSET))();
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHFCNMEKAPG__ONBIND_OFFSET))(this);
		}

	};
