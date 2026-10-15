#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/R3/Result.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }

#define HAGLEMEGDCB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EC6F2D0)

	class HAGLEMEGDCB : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_JPKKNEJFEBJ()
		{
			return (::System::Action**)UnitySDK::FromName("", "HAGLEMEGDCB")->GetStaticField(0x4B230);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HAGLEMEGDCB_CCTOR_OFFSET))();
		}

	};
