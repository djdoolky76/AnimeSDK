#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BCFDAHOHJEA.h"
namespace System { class String; }

#define MPBOKMEEHGH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1B220B30)
#define MPBOKMEEHGH_CTOR_OFFSET UNITYSDK_OFFSET(0x1B220B00)
#define MPBOKMEEHGH__ONBIND_OFFSET UNITYSDK_OFFSET(0x1B2206F0)

inline static constexpr unsigned int MPBOKMEEHGH_TypeDefinitionIndex = 73481;

	class MPBOKMEEHGH : public ::BCFDAHOHJEA
	{
	public:
		static ::System::String** StaticGet_JFCMCPFPDFP()
		{
			return (::System::String**)UnitySDK::FromName("", "MPBOKMEEHGH")->GetStaticField(0x11930);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPBOKMEEHGH_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MPBOKMEEHGH_CCTOR_OFFSET))();
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPBOKMEEHGH__ONBIND_OFFSET))(this);
		}

	};
