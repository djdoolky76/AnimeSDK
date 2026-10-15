#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BCFDAHOHJEA.h"
namespace System { class String; }

#define MPBOKMEEHGH_CCTOR_OFFSET UNITYSDK_OFFSET(0xBA337F0)
#define MPBOKMEEHGH_CTOR_OFFSET UNITYSDK_OFFSET(0xBA337C0)
#define MPBOKMEEHGH__ONBIND_OFFSET UNITYSDK_OFFSET(0xBA33470)

inline static constexpr unsigned int MPBOKMEEHGH_TypeDefinitionIndex = 71496;

	class MPBOKMEEHGH : public ::BCFDAHOHJEA
	{
	public:
		static ::System::String** StaticGet_JFCMCPFPDFP()
		{
			return (::System::String**)UnitySDK::FromName("", "MPBOKMEEHGH")->GetStaticField(0x17B80);
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
