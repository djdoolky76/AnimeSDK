#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Text { class StringBuilder; }

#define CCJBNDBHCJF_BBOHLCKDEPN_OFFSET UNITYSDK_OFFSET(0x128C56F0)
#define CCJBNDBHCJF_ICGDJIMKPPE_OFFSET UNITYSDK_OFFSET(0x128C5800)
#define CCJBNDBHCJF_JBEJMMKDNKP_OFFSET UNITYSDK_OFFSET(0x128C5550)
#define CCJBNDBHCJF_MCOEGBNBKEB_OFFSET UNITYSDK_OFFSET(0x128C5470)
#define CCJBNDBHCJF_MOKLHPMOOLC_OFFSET UNITYSDK_OFFSET(0x128C5280)
#define CCJBNDBHCJF_NNCLBBEFAII_OFFSET UNITYSDK_OFFSET(0x128C54E0)
#define CCJBNDBHCJF__CCTOR_OFFSET UNITYSDK_OFFSET(0x128C5160)

inline static constexpr unsigned int CCJBNDBHCJF_TypeDefinitionIndex = 41851;

class CCJBNDBHCJF : public ::System::Object
{
public:
	static ::System::Text::StringBuilder** StaticGet_ELEPNLJLMJA()
	{
		return (::System::Text::StringBuilder**)Il2CppClass::FromTypeDefinitionIndex(CCJBNDBHCJF_TypeDefinitionIndex)->GetStaticField(0x3D550);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::String*>** StaticGet_IHOEKLHFFFE()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(CCJBNDBHCJF_TypeDefinitionIndex)->GetStaticField(0x3D558);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CCJBNDBHCJF__CCTOR_OFFSET))();
	}

	static ::System::String* MOKLHPMOOLC(::System::Type* OBNIAHNMHPF)
	{
		return ((::System::String*(*)(::System::Type*))((::PBYTE)hIl2Cpp + CCJBNDBHCJF_MOKLHPMOOLC_OFFSET))(OBNIAHNMHPF);
	}

	static ::System::String* MCOEGBNBKEB(::System::String* EMIKCAHJLGB)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CCJBNDBHCJF_MCOEGBNBKEB_OFFSET))(EMIKCAHJLGB);
	}

	static ::System::Void NNCLBBEFAII(::System::String*& EMIKCAHJLGB)
	{
		return ((::System::Void(*)(::System::String*&))((::PBYTE)hIl2Cpp + CCJBNDBHCJF_NNCLBBEFAII_OFFSET))(EMIKCAHJLGB);
	}

	static ::System::String* JBEJMMKDNKP(::Il2CppArray<::System::String*>* KOIBHLHLMFC)
	{
		return ((::System::String*(*)(::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + CCJBNDBHCJF_JBEJMMKDNKP_OFFSET))(KOIBHLHLMFC);
	}

	static ::System::String* BBOHLCKDEPN(::System::String* INPMBOAGOCP, ::Il2CppArray<::System::Object*>* KOIBHLHLMFC)
	{
		return ((::System::String*(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CCJBNDBHCJF_BBOHLCKDEPN_OFFSET))(INPMBOAGOCP, KOIBHLHLMFC);
	}

	static ::System::String* ICGDJIMKPPE(::System::Type* OBNIAHNMHPF)
	{
		return ((::System::String*(*)(::System::Type*))((::PBYTE)hIl2Cpp + CCJBNDBHCJF_ICGDJIMKPPE_OFFSET))(OBNIAHNMHPF);
	}
};
