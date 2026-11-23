#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace MiHoYo::SDK { class PopImageModel; }
namespace System { class Object; }

#define MIHOYO_SDK_POPIMAGE_EE6D8A8F58A135DB_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CF4AC0)
#define MIHOYO_SDK_POPIMAGE_EE6D8A8F58A135DB__CTOR_OFFSET UNITYSDK_OFFSET(0x1FE7D60)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int PopImage_EE6D8A8F58A135DB_TypeDefinitionIndex = 12355;

	class PopImage_EE6D8A8F58A135DB : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_POPIMAGE_EE6D8A8F58A135DB__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}

		::System::Void Invoke(::MiHoYo::SDK::PopImageModel* E0BB02EDCCFC0E4E)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PopImageModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_POPIMAGE_EE6D8A8F58A135DB_INVOKE_OFFSET))(this, E0BB02EDCCFC0E4E);
		}
	};
}
