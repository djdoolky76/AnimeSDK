#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define EC7A3BCCD9AB342C_A19ED5213F271E00_OFFSET UNITYSDK_OFFSET(0x3E676B0)
#define EC7A3BCCD9AB342C_B1D7DA2BBCCDF180_OFFSET UNITYSDK_OFFSET(0x3E676C0)
#define EC7A3BCCD9AB342C_EA28CF291EBB2931_OFFSET UNITYSDK_OFFSET(0x3E674C0)
#define EC7A3BCCD9AB342C__CTOR_OFFSET UNITYSDK_OFFSET(0x3E67550)

inline static constexpr unsigned int EC7A3BCCD9AB342C_TypeDefinitionIndex = 14885;

class EC7A3BCCD9AB342C : public ::System::Object
{
public:
	::Il2CppArray<::System::Byte>* E053FF8A1666756C; // 0x10
	::System::Int32 A8FA03AB120F3647; // 0x18
	::System::Int32 F8117CF5374FC72E; // 0x1C
	::System::Int32 AB29FB3B3BF4FD92; // 0x20
	::System::Boolean E6F92EBF7F9880D0; // 0x24

	::System::Void _ctor(::Il2CppArray<::System::Byte>* F6C2EBBDFCAEF915, ::System::Int32 BE9B161B3F3C2937, ::System::Int32 F54AF627638DE3C9)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + EC7A3BCCD9AB342C__CTOR_OFFSET))(this, F6C2EBBDFCAEF915, BE9B161B3F3C2937, F54AF627638DE3C9);
	}

	::System::Int32 B1D7DA2BBCCDF180()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EC7A3BCCD9AB342C_B1D7DA2BBCCDF180_OFFSET))(this);
	}

	::System::String* EA28CF291EBB2931()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EC7A3BCCD9AB342C_EA28CF291EBB2931_OFFSET))(this);
	}

	::System::Int32 A19ED5213F271E00()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EC7A3BCCD9AB342C_A19ED5213F271E00_OFFSET))(this);
	}
};
