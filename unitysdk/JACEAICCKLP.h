#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class IDisposable; }

#define JACEAICCKLP_BPDIGKDIJKN_OFFSET UNITYSDK_OFFSET(0x165409B0)
#define JACEAICCKLP_CCTOR_OFFSET UNITYSDK_OFFSET(0x16540A40)

inline static constexpr unsigned int JACEAICCKLP_TypeDefinitionIndex = 49963;

	class JACEAICCKLP : public ::System::Object
	{
	public:
		static ::System::IDisposable** StaticGet_COAHELMPGLI()
		{
			return (::System::IDisposable**)UnitySDK::FromName("", "JACEAICCKLP")->GetStaticField(0x6DF60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JACEAICCKLP_CCTOR_OFFSET))();
		}

		static ::System::Boolean BPDIGKDIJKN(::System::IDisposable* a1)
		{
			return ((::System::Boolean(*)(::System::IDisposable*))((::PBYTE)hIl2Cpp + JACEAICCKLP_BPDIGKDIJKN_OFFSET))(a1);
		}

	};
