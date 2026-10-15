#pragma once
#include "unitysdk/unitysdk.h"
namespace R3 { template <typename T> class Observable_1; }
namespace R3 { template <typename T> class Observer_1; }
namespace System { class IDisposable; }

#define R3_RETURNBOOLEAN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C424D80)
#define R3_RETURNBOOLEAN_CTOR_OFFSET UNITYSDK_OFFSET(0x1C424CE0)
#define R3_RETURNBOOLEAN_SUBSCRIBECORE_OFFSET UNITYSDK_OFFSET(0x1C424D00)

namespace R3
{
	inline static constexpr unsigned int ReturnBoolean_TypeDefinitionIndex = 35918;

	class ReturnBoolean
	{
	public:
		::System::Boolean value; // 0x10
		static ::R3::Observable_1<::System::Boolean>** StaticGet_False()
		{
			return (::R3::Observable_1<::System::Boolean>**)UnitySDK::FromName("R3", "ReturnBoolean")->GetStaticField(0xA30);
		}

		static ::R3::Observable_1<::System::Boolean>** StaticGet_True()
		{
			return (::R3::Observable_1<::System::Boolean>**)UnitySDK::FromName("R3", "ReturnBoolean")->GetStaticField(0xA38);
		}

		::System::Void _ctor(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + R3_RETURNBOOLEAN_CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + R3_RETURNBOOLEAN_CCTOR_OFFSET))();
		}

		::System::IDisposable* SubscribeCore(::R3::Observer_1<::System::Boolean>* a1)
		{
			return ((::System::IDisposable*(*)(::PVOID, ::R3::Observer_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + R3_RETURNBOOLEAN_SUBSCRIBECORE_OFFSET))(this, a1);
		}

	};
}
