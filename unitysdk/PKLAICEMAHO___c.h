#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HGIDAMPAOGK;
namespace System { template <typename T1, typename T2> class Func_2; }

#define PKLAICEMAHO___C_DILFBDBCKDO_OFFSET UNITYSDK_OFFSET(0x150D1C50)
#define PKLAICEMAHO___C_PAFMOCHBLKJ_OFFSET UNITYSDK_OFFSET(0x150D1C80)
#define PKLAICEMAHO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x150D1C00)
#define PKLAICEMAHO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x150D1C40)

inline static constexpr unsigned int PKLAICEMAHO___c_TypeDefinitionIndex = 89077;

class PKLAICEMAHO___c : public ::System::Object
{
public:
	static ::System::Func_2<::HGIDAMPAOGK*, ::System::Boolean>** StaticGet___9__0_0()
	{
		return (::System::Func_2<::HGIDAMPAOGK*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(PKLAICEMAHO___c_TypeDefinitionIndex)->GetStaticField(0x4FE50);
	}
	static ::System::Func_2<::HGIDAMPAOGK*, ::System::Int64>** StaticGet___9__1_0()
	{
		return (::System::Func_2<::HGIDAMPAOGK*, ::System::Int64>**)Il2CppClass::FromTypeDefinitionIndex(PKLAICEMAHO___c_TypeDefinitionIndex)->GetStaticField(0x4FE58);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(PKLAICEMAHO___c_TypeDefinitionIndex)->GetStaticField(0x4FE60);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PKLAICEMAHO___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKLAICEMAHO___C__CTOR_OFFSET))(this);
	}

	::System::Int64 DILFBDBCKDO(::HGIDAMPAOGK* DPGFPHIMDEL)
	{
		return ((::System::Int64(*)(::PVOID, ::HGIDAMPAOGK*))((::PBYTE)hIl2Cpp + PKLAICEMAHO___C_DILFBDBCKDO_OFFSET))(this, DPGFPHIMDEL);
	}

	::System::Boolean PAFMOCHBLKJ(::HGIDAMPAOGK* DPGFPHIMDEL)
	{
		return ((::System::Boolean(*)(::PVOID, ::HGIDAMPAOGK*))((::PBYTE)hIl2Cpp + PKLAICEMAHO___C_PAFMOCHBLKJ_OFFSET))(this, DPGFPHIMDEL);
	}
};
