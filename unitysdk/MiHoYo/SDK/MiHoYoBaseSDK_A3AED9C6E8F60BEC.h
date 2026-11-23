#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
template <typename T> class FCECB52A00C1344E;

#define MIHOYO_SDK_MIHOYOBASESDK_A3AED9C6E8F60BEC__CTOR_OFFSET UNITYSDK_OFFSET(0x29E7350)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoBaseSDK_A3AED9C6E8F60BEC_TypeDefinitionIndex = 15804;

	class MiHoYoBaseSDK_A3AED9C6E8F60BEC : public ::System::Object
	{
	public:
		::FCECB52A00C1344E<::System::String*>* BED1A6A9FB460BBB; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* B1D914D1D7404EA9; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOBASESDK_A3AED9C6E8F60BEC__CTOR_OFFSET))(this);
		}
	};
}
