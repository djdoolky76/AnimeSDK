#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FF1237522147A967;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MIHOYO_SDK_NETWORKRESPONSEMODELEX__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int NetworkResponseModelEx_TypeDefinitionIndex = 12743;

	class NetworkResponseModelEx : public ::System::Object
	{
	public:
		::System::Int32 retcode; // 0x10
		::System::Byte _padding0[0x4];
		::System::String* message; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* headers; // 0x20
		::FF1237522147A967* data; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKRESPONSEMODELEX__CTOR_OFFSET))(this);
		}
	};
}
