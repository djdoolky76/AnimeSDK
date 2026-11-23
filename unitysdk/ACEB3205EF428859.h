#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class E519989062D53DE5;
template <typename T1, typename T2> class EF802DCA1D23DE37;

#define ACEB3205EF428859_A4085FDC4204F755_OFFSET UNITYSDK_OFFSET(0x3BE5090)
#define ACEB3205EF428859_BCFA58B1EBA8D851_OFFSET UNITYSDK_OFFSET(0x3BE5460)
#define ACEB3205EF428859_F0A491C201FC1416_OFFSET UNITYSDK_OFFSET(0x3BE5320)
#define ACEB3205EF428859_F316EEAEC64503BE_OFFSET UNITYSDK_OFFSET(0x3BE5110)
#define ACEB3205EF428859__CCTOR_OFFSET UNITYSDK_OFFSET(0x3BE53D0)

inline static constexpr unsigned int ACEB3205EF428859_TypeDefinitionIndex = 11272;

class ACEB3205EF428859 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_A34535166BE9C696()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ACEB3205EF428859_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::EF802DCA1D23DE37<::System::Object*, ::E519989062D53DE5*>** StaticGet_BE4F072158E5B7A0()
	{
		return (::EF802DCA1D23DE37<::System::Object*, ::E519989062D53DE5*>**)Il2CppClass::FromTypeDefinitionIndex(ACEB3205EF428859_TypeDefinitionIndex)->GetStaticField(0x8);
	}

	static ::System::Int32 A4085FDC4204F755(::System::Int32 E262985ECEC300A1)
	{
		return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + ACEB3205EF428859_A4085FDC4204F755_OFFSET))(E262985ECEC300A1);
	}

	static ::EF802DCA1D23DE37<::System::Object*, ::E519989062D53DE5*>* BCFA58B1EBA8D851()
	{
		return ((::EF802DCA1D23DE37<::System::Object*, ::E519989062D53DE5*>*(*)())((::PBYTE)hIl2Cpp + ACEB3205EF428859_BCFA58B1EBA8D851_OFFSET))();
	}

	static ::System::Int32 F316EEAEC64503BE(::System::Int32 BDD0BFB63061789A)
	{
		return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + ACEB3205EF428859_F316EEAEC64503BE_OFFSET))(BDD0BFB63061789A);
	}

	static ::System::Boolean F0A491C201FC1416(::System::Int32 FD28E19D9B79CB25)
	{
		return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + ACEB3205EF428859_F0A491C201FC1416_OFFSET))(FD28E19D9B79CB25);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ACEB3205EF428859__CCTOR_OFFSET))();
	}
};
