#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define BFFDE238F0D117F3_BA0AFB830600D2A9_OFFSET UNITYSDK_OFFSET(0x16A7BC0)
#define BFFDE238F0D117F3_F0D2AFBD3CAE7F65_OFFSET UNITYSDK_OFFSET(0x389A450)
#define BFFDE238F0D117F3_FD792C24FE49920B_OFFSET UNITYSDK_OFFSET(0x389A460)
#define BFFDE238F0D117F3__CTOR_OFFSET UNITYSDK_OFFSET(0x2A239D0)

inline static constexpr unsigned int BFFDE238F0D117F3_TypeDefinitionIndex = 20946;

class BFFDE238F0D117F3 : public ::System::Object
{
public:
	::System::UInt32 A098F377A798CEF5; // 0x10

	::System::Void F0D2AFBD3CAE7F65()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFFDE238F0D117F3_F0D2AFBD3CAE7F65_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFFDE238F0D117F3__CTOR_OFFSET))(this);
	}

	::System::Void FD792C24FE49920B(::Il2CppArray<::System::Byte>* F6C2EBBDFCAEF915, ::System::Int32 BE9B161B3F3C2937, ::System::Int32 A70E5C58B2C7A692)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + BFFDE238F0D117F3_FD792C24FE49920B_OFFSET))(this, F6C2EBBDFCAEF915, BE9B161B3F3C2937, A70E5C58B2C7A692);
	}

	::System::Int64 BA0AFB830600D2A9()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + BFFDE238F0D117F3_BA0AFB830600D2A9_OFFSET))(this);
	}
};
