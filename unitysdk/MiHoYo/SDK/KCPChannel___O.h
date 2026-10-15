#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK { class KcpOutput; }

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int KCPChannel___O_TypeDefinitionIndex = 46128;

	class KCPChannel___O : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::KcpOutput** StaticGet__0___KcpOutput()
		{
			return (::MiHoYo::SDK::KcpOutput**)UnitySDK::FromName("MiHoYo.SDK", "<>O")->GetStaticField(0x262D0);
		}

	};
}
