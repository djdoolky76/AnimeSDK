#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define BKODOECEABC_BPABEFPJLKO_OFFSET UNITYSDK_OFFSET(0x14EE3B80)
#define BKODOECEABC_ODEEJCPBCMM_OFFSET UNITYSDK_OFFSET(0x14EE3C10)
#define BKODOECEABC_PLFAEIECIPC_OFFSET UNITYSDK_OFFSET(0x14EE3AA0)
#define BKODOECEABC_PMHCOODEDDN_OFFSET UNITYSDK_OFFSET(0x14EE3B20)

inline static constexpr unsigned int BKODOECEABC_TypeDefinitionIndex = 64864;

class BKODOECEABC : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_CFPDDFGJMNF()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(BKODOECEABC_TypeDefinitionIndex)->GetStaticField(0xA500);
	}
	static ::System::Single* StaticGet_GGOPFLNDJGB()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(BKODOECEABC_TypeDefinitionIndex)->GetStaticField(0xA504);
	}
	static ::System::Boolean* StaticGet_CIFLENFEEGN()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(BKODOECEABC_TypeDefinitionIndex)->GetStaticField(0xA508);
	}
	static ::System::Boolean* StaticGet_EGPJAJCCEHJ()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(BKODOECEABC_TypeDefinitionIndex)->GetStaticField(0xA509);
	}
	static ::System::Int32* StaticGet_PNADMIEKJGE()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(BKODOECEABC_TypeDefinitionIndex)->GetStaticField(0xA50C);
	}
	static ::System::Single* StaticGet_EHMOIJFCPJD()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(BKODOECEABC_TypeDefinitionIndex)->GetStaticField(0xA510);
	}

	static ::System::Void PLFAEIECIPC(::System::String* FKDONKGGAIF)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + BKODOECEABC_PLFAEIECIPC_OFFSET))(FKDONKGGAIF);
	}

	static ::System::Void PMHCOODEDDN(::System::String* FKDONKGGAIF)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + BKODOECEABC_PMHCOODEDDN_OFFSET))(FKDONKGGAIF);
	}

	static ::System::Void BPABEFPJLKO(::System::String* FKDONKGGAIF)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + BKODOECEABC_BPABEFPJLKO_OFFSET))(FKDONKGGAIF);
	}

	static ::System::Void ODEEJCPBCMM(::System::Int32 BOBGEDKOMCM, ::System::Int32 HLPPGDOIPDF)
	{
		return ((::System::Void(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + BKODOECEABC_ODEEJCPBCMM_OFFSET))(BOBGEDKOMCM, HLPPGDOIPDF);
	}
};
