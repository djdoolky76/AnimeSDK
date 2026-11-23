#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_GLOBALIZATION_EA43799D136158DC__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3C956B0)
#define SYSTEM_GLOBALIZATION_EA43799D136158DC__CTOR_OFFSET UNITYSDK_OFFSET(0x3C957C0)

namespace System::Globalization
{
	inline static constexpr unsigned int EA43799D136158DC_TypeDefinitionIndex = 11711;

	class EA43799D136158DC : public ::System::Object
	{
	public:
		::System::Int32 BE9B7D8E3577587B; // 0x10
		::System::Byte _padding0[0x4];
		::System::Int64 FE39195F7A26D505; // 0x18
		::System::Int32 F1F62826AAEE5BA0; // 0x20
		::System::Int32 A075EEFC0BDACC00; // 0x24
		::System::Int32 E5BB2F1D6380C3B9; // 0x28
		::System::Byte _padding1[0x4];
		::System::String* E20ED67AC4116E73; // 0x30
		::System::String* AD049BE2B5EFE4C2; // 0x38
		::System::String* A72729F7499B9982; // 0x40

		::System::Void _ctor(::System::Int32 B79113851010426D, ::System::Int32 E2673F71D384DC1B, ::System::Int32 B13696EA9BA90DAC, ::System::Int32 EB5A7FD7B84D9D60, ::System::Int32 ABE7284CC31E7F40, ::System::Int32 A7A712E9F758195C, ::System::Int32 F45700BEB1D1FA6E)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_EA43799D136158DC__CTOR_OFFSET))(this, B79113851010426D, E2673F71D384DC1B, B13696EA9BA90DAC, EB5A7FD7B84D9D60, ABE7284CC31E7F40, A7A712E9F758195C, F45700BEB1D1FA6E);
		}

		::System::Void _ctor_1(::System::Int32 B79113851010426D, ::System::Int32 E2673F71D384DC1B, ::System::Int32 B13696EA9BA90DAC, ::System::Int32 EB5A7FD7B84D9D60, ::System::Int32 ABE7284CC31E7F40, ::System::Int32 A7A712E9F758195C, ::System::Int32 F45700BEB1D1FA6E, ::System::String* F0A8CABA5F6391C0, ::System::String* A569E874DBF1E83A, ::System::String* AEB9FA967DDBD0B4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_EA43799D136158DC__CTOR_1_OFFSET))(this, B79113851010426D, E2673F71D384DC1B, B13696EA9BA90DAC, EB5A7FD7B84D9D60, ABE7284CC31E7F40, A7A712E9F758195C, F45700BEB1D1FA6E, F0A8CABA5F6391C0, A569E874DBF1E83A, AEB9FA967DDBD0B4);
		}
	};
}
