#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BCFDAHOHJEA.h"
namespace System { class String; }

#define KILIPGOLIKO_CCTOR_OFFSET UNITYSDK_OFFSET(0xB42D6E0)
#define KILIPGOLIKO_CTOR_OFFSET UNITYSDK_OFFSET(0xB42D6B0)
#define KILIPGOLIKO__ONBIND_OFFSET UNITYSDK_OFFSET(0xB42D390)

inline static constexpr unsigned int KILIPGOLIKO_TypeDefinitionIndex = 71497;

	class KILIPGOLIKO : public ::BCFDAHOHJEA
	{
	public:
		static ::System::String** StaticGet_JFCMCPFPDFP()
		{
			return (::System::String**)UnitySDK::FromName("", "KILIPGOLIKO")->GetStaticField(0x2BD90);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KILIPGOLIKO_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KILIPGOLIKO_CCTOR_OFFSET))();
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KILIPGOLIKO__ONBIND_OFFSET))(this);
		}

	};
