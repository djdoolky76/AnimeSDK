#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/BE5668376C82998A.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MIHOYO_SDK_MIHOYOSDKLINKIMAGETEXT_F832A1794EC6789B__CTOR_OFFSET UNITYSDK_OFFSET(0x29D5E70)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoSDKLinkImageText_F832A1794EC6789B_TypeDefinitionIndex = 15743;

	class MiHoYoSDKLinkImageText_F832A1794EC6789B : public ::System::Object
	{
	public:
		::System::Int32 B23940C9E4420E32; // 0x10
		::System::Int32 F9A5522B0BD1B00F; // 0x14
		::System::Int32 B11388950C465AE2; // 0x18
		::System::Int32 B1CF9A8ED6D0B703; // 0x1C
		::System::String* F79B4D487F303AB2; // 0x20
		::System::Collections::Generic::List_1<::UnityEngine::BE5668376C82998A>* E03B8894D1CA82D8; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKLINKIMAGETEXT_F832A1794EC6789B__CTOR_OFFSET))(this);
		}
	};
}
