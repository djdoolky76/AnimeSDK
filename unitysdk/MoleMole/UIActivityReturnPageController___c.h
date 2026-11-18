#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BEDKNLNHIAI;
class IANDOOLAALI_DLAAJNDJPLO;
class OAEFGCLEHHO;
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIACTIVITYRETURNPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19B99A60)
#define MOLEMOLE_UIACTIVITYRETURNPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19B99AA0)
#define MOLEMOLE_UIACTIVITYRETURNPAGECONTROLLER___C__INITRETURNPAGEITEMLIST_B__17_0_OFFSET UNITYSDK_OFFSET(0x19B99AC0)
#define MOLEMOLE_UIACTIVITYRETURNPAGECONTROLLER___C__ONGETSURVEYLINK_B__5_0_OFFSET UNITYSDK_OFFSET(0x19B99AB0)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityReturnPageController___c_TypeDefinitionIndex = 59713;

	class UIActivityReturnPageController___c : public ::System::Object
	{
	public:
		static ::IANDOOLAALI_DLAAJNDJPLO** StaticGet___9__5_0()
		{
			return (::IANDOOLAALI_DLAAJNDJPLO**)Il2CppClass::FromTypeDefinitionIndex(UIActivityReturnPageController___c_TypeDefinitionIndex)->GetStaticField(0x521A0);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIActivityReturnPageController___c_TypeDefinitionIndex)->GetStaticField(0x521A8);
		}
		static ::System::Comparison_1<::BEDKNLNHIAI*>** StaticGet___9__17_0()
		{
			return (::System::Comparison_1<::BEDKNLNHIAI*>**)Il2CppClass::FromTypeDefinitionIndex(UIActivityReturnPageController___c_TypeDefinitionIndex)->GetStaticField(0x521B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRETURNPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRETURNPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnGetSurveyLink_b__5_0(::OAEFGCLEHHO* rcvMessage)
		{
			return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRETURNPAGECONTROLLER___C__ONGETSURVEYLINK_B__5_0_OFFSET))(this, rcvMessage);
		}

		::System::Int32 _InitReturnPageItemList_b__17_0(::BEDKNLNHIAI* a, ::BEDKNLNHIAI* b)
		{
			return ((::System::Int32(*)(::PVOID, ::BEDKNLNHIAI*, ::BEDKNLNHIAI*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRETURNPAGECONTROLLER___C__INITRETURNPAGEITEMLIST_B__17_0_OFFSET))(this, a, b);
		}
	};
}
