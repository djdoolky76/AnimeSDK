#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }

#define A4B00041083B883B_A5F6417957FEB820_B5591EE46666C0B7_OFFSET UNITYSDK_OFFSET(0x41235F0)
#define A4B00041083B883B_A5F6417957FEB820_F3FD1047CF6F993D_OFFSET UNITYSDK_OFFSET(0x4123460)

namespace A4B00041083B883B
{
	inline static constexpr unsigned int A5F6417957FEB820_TypeDefinitionIndex = 17103;

	class A5F6417957FEB820 : public ::System::Object
	{
	public:
		static ::System::Boolean B5591EE46666C0B7(::System::Type* F634C8CDF92D8244, ::System::String*& B84A4D8260C22648, ::System::String*& EEEC0EBD984F08C2, ::System::String*& FB6493F8788CE54A)
		{
			return ((::System::Boolean(*)(::System::Type*, ::System::String*&, ::System::String*&, ::System::String*&))((::PBYTE)hIl2Cpp + A4B00041083B883B_A5F6417957FEB820_B5591EE46666C0B7_OFFSET))(F634C8CDF92D8244, B84A4D8260C22648, EEEC0EBD984F08C2, FB6493F8788CE54A);
		}

		static ::System::Boolean F3FD1047CF6F993D(::System::Type* F634C8CDF92D8244, ::System::String*& B476B7AD17F6C7E5, ::System::String*& EEEC0EBD984F08C2, ::System::String*& E638E67D3A0124A7)
		{
			return ((::System::Boolean(*)(::System::Type*, ::System::String*&, ::System::String*&, ::System::String*&))((::PBYTE)hIl2Cpp + A4B00041083B883B_A5F6417957FEB820_F3FD1047CF6F993D_OFFSET))(F634C8CDF92D8244, B476B7AD17F6C7E5, EEEC0EBD984F08C2, E638E67D3A0124A7);
		}
	};
}
