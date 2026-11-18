#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class DeviceAdaptData; }
namespace System { class String; }

#define MOLEMOLE_DEVICESCREENADAPTPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B8C62D0)

namespace MoleMole
{
	inline static constexpr unsigned int DeviceScreenAdaptProfile_TypeDefinitionIndex = 41648;

	class DeviceScreenAdaptProfile : public ::System::Object
	{
	public:
		::System::String* screenId; // 0x10
		::System::Boolean subtractGlobalPadding; // 0x18
		::System::Byte _padding0[0x7];
		::MoleMole::DeviceAdaptData* data; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DEVICESCREENADAPTPROFILE__CTOR_OFFSET))(this);
		}
	};
}
