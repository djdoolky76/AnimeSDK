#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriAtomOutputDeviceObserver_F2C7FE65B8B40838.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }

#define CRIWARE_CRIATOMOUTPUTDEVICEOBSERVER_FB7E65D7E4C1B393_INVOKE_OFFSET UNITYSDK_OFFSET(0x1FE7F90)
#define CRIWARE_CRIATOMOUTPUTDEVICEOBSERVER_FB7E65D7E4C1B393__CTOR_OFFSET UNITYSDK_OFFSET(0x2AB2E40)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomOutputDeviceObserver_FB7E65D7E4C1B393_TypeDefinitionIndex = 19171;

	class CriAtomOutputDeviceObserver_FB7E65D7E4C1B393 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMOUTPUTDEVICEOBSERVER_FB7E65D7E4C1B393__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}

		::System::Void Invoke(::System::Boolean B6A61B525B517806, ::CriWare::CriAtomOutputDeviceObserver_F2C7FE65B8B40838 E8C3534D5186D9C8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::CriWare::CriAtomOutputDeviceObserver_F2C7FE65B8B40838))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMOUTPUTDEVICEOBSERVER_FB7E65D7E4C1B393_INVOKE_OFFSET))(this, B6A61B525B517806, E8C3534D5186D9C8);
		}
	};
}
