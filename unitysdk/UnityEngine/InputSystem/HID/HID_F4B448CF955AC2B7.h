#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::InputSystem::HID
{
	inline static constexpr unsigned int HID_F4B448CF955AC2B7_TypeDefinitionIndex = 14580;

	enum class HID_F4B448CF955AC2B7 : ::System::Int32
	{
		Undefined = 0,
		GenericDesktop = 1,
		Simulation = 2,
		VRControls = 3,
		SportControls = 4,
		GameControls = 5,
		GenericDeviceControls = 6,
		Keyboard = 7,
		LEDs = 8,
		Button = 9,
		Ordinal = 10,
		Telephony = 11,
		Consumer = 12,
		Digitizer = 13,
		PID = 15,
		Unicode = 16,
		AlphanumericDisplay = 20,
		MedicalInstruments = 64,
		Monitor = 128,
		Power = 132,
		BarCodeScanner = 140,
		MagneticStripeReader = 142,
		Camera = 144,
		Arcade = 145,
		VendorDefined = 65280,
	};
}
