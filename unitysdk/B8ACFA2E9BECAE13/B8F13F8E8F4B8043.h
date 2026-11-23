#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define B8ACFA2E9BECAE13_B8F13F8E8F4B8043_B9A5BC696BEE68B7_OFFSET UNITYSDK_OFFSET(0x4183EA0)

namespace B8ACFA2E9BECAE13
{
	inline static constexpr unsigned int B8F13F8E8F4B8043_TypeDefinitionIndex = 17653;

	struct alignas(8) B8F13F8E8F4B8043
	{
		::System::String* E3A985C4EDF2D43D; // 0x10
		::System::String* AA3ABF3ABA2AA5F3; // 0x18
		::System::String* A2777C49A0A3DD15; // 0x20
		::System::Boolean FFBCFF3E3641B75D; // 0x28
		::System::Boolean B2EAAAAF87A5834C; // 0x29
		::System::Boolean ECF2413797816193; // 0x2A
		::System::Boolean AB08C1202F437ABF; // 0x2B

		::System::Void B9A5BC696BEE68B7(::System::Boolean F1FF611CEA920AAD, ::System::String* E952B805189D73F0, ::System::String* B0CE993A27906F03, ::System::String* A2B456E9ABA9482E)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + B8ACFA2E9BECAE13_B8F13F8E8F4B8043_B9A5BC696BEE68B7_OFFSET))(this, F1FF611CEA920AAD, E952B805189D73F0, B0CE993A27906F03, A2B456E9ABA9482E);
		}
	};
}
