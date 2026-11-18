#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HGIDAMPAOGK;
class PNPFJKPGEHF;
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Comparison_1; }

#define JJGDMNGJBIP___C_CNAGCOPAKBM_OFFSET UNITYSDK_OFFSET(0x13848360)
#define JJGDMNGJBIP___C_GDEECKMCJEP_OFFSET UNITYSDK_OFFSET(0x138483B0)
#define JJGDMNGJBIP___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13848310)
#define JJGDMNGJBIP___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13848350)

inline static constexpr unsigned int JJGDMNGJBIP___c_TypeDefinitionIndex = 68396;

class JJGDMNGJBIP___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::HGIDAMPAOGK*>** StaticGet___9__24_0()
	{
		return (::System::Comparison_1<::HGIDAMPAOGK*>**)Il2CppClass::FromTypeDefinitionIndex(JJGDMNGJBIP___c_TypeDefinitionIndex)->GetStaticField(0x3E320);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(JJGDMNGJBIP___c_TypeDefinitionIndex)->GetStaticField(0x3E328);
	}
	static ::System::Action_1<::PNPFJKPGEHF*>** StaticGet___9__51_0()
	{
		return (::System::Action_1<::PNPFJKPGEHF*>**)Il2CppClass::FromTypeDefinitionIndex(JJGDMNGJBIP___c_TypeDefinitionIndex)->GetStaticField(0x3E330);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JJGDMNGJBIP___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJGDMNGJBIP___C__CTOR_OFFSET))(this);
	}

	::System::Void CNAGCOPAKBM(::PNPFJKPGEHF* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::PNPFJKPGEHF*))((::PBYTE)hIl2Cpp + JJGDMNGJBIP___C_CNAGCOPAKBM_OFFSET))(this, GLAOEHCGCFO);
	}

	::System::Int32 GDEECKMCJEP(::HGIDAMPAOGK* EJCBEJMGFAJ, ::HGIDAMPAOGK* EBFCACIEKBC)
	{
		return ((::System::Int32(*)(::PVOID, ::HGIDAMPAOGK*, ::HGIDAMPAOGK*))((::PBYTE)hIl2Cpp + JJGDMNGJBIP___C_GDEECKMCJEP_OFFSET))(this, EJCBEJMGFAJ, EBFCACIEKBC);
	}
};
