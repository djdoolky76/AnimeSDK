#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EC5D719339F97B2C_A225E5AF25FF9881_OFFSET UNITYSDK_OFFSET(0x2225080)
#define EC5D719339F97B2C_A45261C18E70DAA8_OFFSET UNITYSDK_OFFSET(0x2224BA0)
#define EC5D719339F97B2C_B318CC7627FE11D4_OFFSET UNITYSDK_OFFSET(0x22254D0)
#define EC5D719339F97B2C_E8471CA0B20BB511_OFFSET UNITYSDK_OFFSET(0x22253A0)
#define EC5D719339F97B2C_EF6617D81DD47AFB_OFFSET UNITYSDK_OFFSET(0x2224B20)
#define EC5D719339F97B2C__CCTOR_OFFSET UNITYSDK_OFFSET(0x22252B0)
#define EC5D719339F97B2C__CTOR_OFFSET UNITYSDK_OFFSET(0x2225300)

inline static constexpr unsigned int EC5D719339F97B2C_TypeDefinitionIndex = 9109;

class EC5D719339F97B2C : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_ACA585A607CF731F()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EC5D719339F97B2C_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Int32* StaticGet_E09FAAC0D831E227()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EC5D719339F97B2C_TypeDefinitionIndex)->GetStaticField(0x4);
	}
	::Il2CppArray<::System::UInt64>* E7936C9B5642E444; // 0x10
	::System::Int32 AA292D26F1CE96C4; // 0x18

	::System::Void A225E5AF25FF9881()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EC5D719339F97B2C_A225E5AF25FF9881_OFFSET))(this);
	}

	::System::UInt64 B318CC7627FE11D4()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + EC5D719339F97B2C_B318CC7627FE11D4_OFFSET))(this);
	}

	::System::UInt64 EF6617D81DD47AFB(::System::UInt64 F6CA7498820BE9F0)
	{
		return ((::System::UInt64(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + EC5D719339F97B2C_EF6617D81DD47AFB_OFFSET))(this, F6CA7498820BE9F0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EC5D719339F97B2C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EC5D719339F97B2C__CTOR_OFFSET))(this);
	}

	::System::Void A45261C18E70DAA8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EC5D719339F97B2C_A45261C18E70DAA8_OFFSET))(this);
	}

	::System::Void E8471CA0B20BB511(::System::UInt64 AF9A63638B456161)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + EC5D719339F97B2C_E8471CA0B20BB511_OFFSET))(this, AF9A63638B456161);
	}
};
