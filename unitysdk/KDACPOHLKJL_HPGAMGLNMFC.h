#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define KDACPOHLKJL_HPGAMGLNMFC_EXECUTE_OFFSET UNITYSDK_OFFSET(0x767EE0)

inline static constexpr unsigned int KDACPOHLKJL_HPGAMGLNMFC_TypeDefinitionIndex = 65699;

struct alignas(8) KDACPOHLKJL_HPGAMGLNMFC
{
	::System::Boolean FAHODHFIFOI; // 0x10
	::System::Byte _padding0[0x7];
	::System::Object* LGLNPFAGFFN; // 0x18
	::System::Byte _padding1[0x10];
	::System::Object* LINOEAHLFOM; // 0x30
	::System::Byte _padding2[0x10];
	::System::Object* CPHHPIFPKFK; // 0x48
	::System::Byte _padding3[0x10];
	::System::Object* BELPDGKDPGP; // 0x60

	::System::Void Execute(::System::Int32 ABHBKFJKINO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KDACPOHLKJL_HPGAMGLNMFC_EXECUTE_OFFSET))(this, ABHBKFJKINO);
	}
};
