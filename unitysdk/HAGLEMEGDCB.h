#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/R3/Result.h"
#include "unitysdk/System/Object.h"
namespace System { template <typename T> class Action_1; }

#define HAGLEMEGDCB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FF1FCB0)

inline static constexpr unsigned int HAGLEMEGDCB_TypeDefinitionIndex = 45332;

	class HAGLEMEGDCB : public ::System::Object
	{
	public:
		static ::System::Action_1<::R3::Result>** StaticGet_JPKKNEJFEBJ()
		{
			return (::System::Action_1<::R3::Result>**)UnitySDK::FromName("", "HAGLEMEGDCB")->GetStaticField(0x62100);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HAGLEMEGDCB_CCTOR_OFFSET))();
		}

	};
