#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OFFIEGMGMHE;
namespace System { template <typename T> class Comparison_1; }

#define BCFAELFOBJB___C_BILBGLNLKKO_OFFSET UNITYSDK_OFFSET(0x113D6450)
#define BCFAELFOBJB___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x113D6400)
#define BCFAELFOBJB___C__CTOR_OFFSET UNITYSDK_OFFSET(0x113D6440)

inline static constexpr unsigned int BCFAELFOBJB___c_TypeDefinitionIndex = 39144;

class BCFAELFOBJB___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(BCFAELFOBJB___c_TypeDefinitionIndex)->GetStaticField(0x3A410);
	}
	static ::System::Comparison_1<::OFFIEGMGMHE*>** StaticGet___9__4_0()
	{
		return (::System::Comparison_1<::OFFIEGMGMHE*>**)Il2CppClass::FromTypeDefinitionIndex(BCFAELFOBJB___c_TypeDefinitionIndex)->GetStaticField(0x3A418);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BCFAELFOBJB___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCFAELFOBJB___C__CTOR_OFFSET))(this);
	}

	::System::Int32 BILBGLNLKKO(::OFFIEGMGMHE* DPGFPHIMDEL, ::OFFIEGMGMHE* DLJPLHKELCO)
	{
		return ((::System::Int32(*)(::PVOID, ::OFFIEGMGMHE*, ::OFFIEGMGMHE*))((::PBYTE)hIl2Cpp + BCFAELFOBJB___C_BILBGLNLKKO_OFFSET))(this, DPGFPHIMDEL, DLJPLHKELCO);
	}
};
