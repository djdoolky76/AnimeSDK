#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E76753C9B1BFB5E1.h"

namespace System { class String; }

#define A140715C2245D99D_ABCCDEE2C452619A_OFFSET UNITYSDK_OFFSET(0x3B3F310)
#define A140715C2245D99D_AF86DE32DAD6C65E_OFFSET UNITYSDK_OFFSET(0x16BD320)
#define A140715C2245D99D_B59079FDA370300B_OFFSET UNITYSDK_OFFSET(0x3B3F110)
#define A140715C2245D99D_E6A4EDFB781D1DCC_OFFSET UNITYSDK_OFFSET(0x3B3F2A0)
#define A140715C2245D99D_F031F2E355964E9B_OFFSET UNITYSDK_OFFSET(0x3B3F5C0)
#define A140715C2245D99D_F939E6395B9B54E9_OFFSET UNITYSDK_OFFSET(0x3B3F640)
#define A140715C2245D99D__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3B3F450)
#define A140715C2245D99D__CTOR_OFFSET UNITYSDK_OFFSET(0x3B3F510)

inline static constexpr unsigned int A140715C2245D99D_TypeDefinitionIndex = 19335;

class A140715C2245D99D : public ::E76753C9B1BFB5E1
{
public:
	::Il2CppArray<::System::Byte>* FB94E6CA353C661E; // 0x18
	::System::String* AFFF6982F296BD21; // 0x20
	::Il2CppArray<::System::Byte>* B7F69C9E58B393D3; // 0x28

	::System::Void _ctor(::Il2CppArray<::System::Byte>* B083BE7841B347C4)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + A140715C2245D99D__CTOR_OFFSET))(this, B083BE7841B347C4);
	}

	::System::Void _ctor_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A140715C2245D99D__CTOR_1_OFFSET))(this);
	}

	::System::Void E6A4EDFB781D1DCC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A140715C2245D99D_E6A4EDFB781D1DCC_OFFSET))(this);
	}

	::Il2CppArray<::System::Byte>* ABCCDEE2C452619A()
	{
		return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + A140715C2245D99D_ABCCDEE2C452619A_OFFSET))(this);
	}

	::Il2CppArray<::System::Byte>* F031F2E355964E9B()
	{
		return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + A140715C2245D99D_F031F2E355964E9B_OFFSET))(this);
	}

	::System::Void B59079FDA370300B(::Il2CppArray<::System::Byte>* B083BE7841B347C4)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + A140715C2245D99D_B59079FDA370300B_OFFSET))(this, B083BE7841B347C4);
	}

	::Il2CppArray<::System::Byte>* F939E6395B9B54E9()
	{
		return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + A140715C2245D99D_F939E6395B9B54E9_OFFSET))(this);
	}

	::System::String* AF86DE32DAD6C65E()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + A140715C2245D99D_AF86DE32DAD6C65E_OFFSET))(this);
	}
};
