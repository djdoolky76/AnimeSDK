#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class COIKBJKDCBM;
class HGIDAMPAOGK;
namespace System { template <typename T> class Comparison_1; }

#define KGFFOPIAMLK___C_AOKOGABBHCL_OFFSET UNITYSDK_OFFSET(0x1770B290)
#define KGFFOPIAMLK___C_HCCBFCIOAAO_OFFSET UNITYSDK_OFFSET(0x1770B2D0)
#define KGFFOPIAMLK___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1770B240)
#define KGFFOPIAMLK___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1770B280)

inline static constexpr unsigned int KGFFOPIAMLK___c_TypeDefinitionIndex = 47532;

class KGFFOPIAMLK___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::COIKBJKDCBM*>** StaticGet___9__2_0()
	{
		return (::System::Comparison_1<::COIKBJKDCBM*>**)Il2CppClass::FromTypeDefinitionIndex(KGFFOPIAMLK___c_TypeDefinitionIndex)->GetStaticField(0x38200);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(KGFFOPIAMLK___c_TypeDefinitionIndex)->GetStaticField(0x38208);
	}
	static ::System::Comparison_1<::HGIDAMPAOGK*>** StaticGet___9__0_0()
	{
		return (::System::Comparison_1<::HGIDAMPAOGK*>**)Il2CppClass::FromTypeDefinitionIndex(KGFFOPIAMLK___c_TypeDefinitionIndex)->GetStaticField(0x38210);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KGFFOPIAMLK___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGFFOPIAMLK___C__CTOR_OFFSET))(this);
	}

	::System::Int32 AOKOGABBHCL(::COIKBJKDCBM* EJCBEJMGFAJ, ::COIKBJKDCBM* EBFCACIEKBC)
	{
		return ((::System::Int32(*)(::PVOID, ::COIKBJKDCBM*, ::COIKBJKDCBM*))((::PBYTE)hIl2Cpp + KGFFOPIAMLK___C_AOKOGABBHCL_OFFSET))(this, EJCBEJMGFAJ, EBFCACIEKBC);
	}

	::System::Int32 HCCBFCIOAAO(::HGIDAMPAOGK* EJCBEJMGFAJ, ::HGIDAMPAOGK* EBFCACIEKBC)
	{
		return ((::System::Int32(*)(::PVOID, ::HGIDAMPAOGK*, ::HGIDAMPAOGK*))((::PBYTE)hIl2Cpp + KGFFOPIAMLK___C_HCCBFCIOAAO_OFFSET))(this, EJCBEJMGFAJ, EBFCACIEKBC);
	}
};
