#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define HIHBNHMEGPH_FKFCHJDMNMO_OFFSET UNITYSDK_OFFSET(0x17A4AD70)
#define HIHBNHMEGPH_METHOD_1_OFFSET UNITYSDK_OFFSET(0x17A4A2C0)
#define HIHBNHMEGPH_METHOD_2_1_OFFSET UNITYSDK_OFFSET(0x17A4A830)
#define HIHBNHMEGPH__CCTOR_OFFSET UNITYSDK_OFFSET(0x17A4A2B0)

inline static constexpr unsigned int HIHBNHMEGPH_TypeDefinitionIndex = 84090;

class HIHBNHMEGPH : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Byte>** StaticGet_MPCBLHPOHDK()
	{
		return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(HIHBNHMEGPH_TypeDefinitionIndex)->GetStaticField(0x3D250);
	}
	static ::Il2CppArray<::System::Byte>** StaticGet_GDPEOFOLBCO()
	{
		return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(HIHBNHMEGPH_TypeDefinitionIndex)->GetStaticField(0x3D258);
	}
	static ::System::Boolean* StaticGet_OAHGABPHAGB()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(HIHBNHMEGPH_TypeDefinitionIndex)->GetStaticField(0xE040);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HIHBNHMEGPH__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1(::System::UInt64 GONODCOMIAA)
	{
		return ((::System::Void(*)(::System::UInt64))((::PBYTE)hIl2Cpp + HIHBNHMEGPH_METHOD_1_OFFSET))(GONODCOMIAA);
	}

	static ::System::Void Method_2_1()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HIHBNHMEGPH_METHOD_2_1_OFFSET))();
	}

	static ::System::Void FKFCHJDMNMO(::Il2CppArray<::System::Byte>* LIAJIEKIFJD, ::System::Int32 BOGPAHGJOJK, ::System::Int32 KMKBJKOEBMF)
	{
		return ((::System::Void(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + HIHBNHMEGPH_FKFCHJDMNMO_OFFSET))(LIAJIEKIFJD, BOGPAHGJOJK, KMKBJKOEBMF);
	}
};
