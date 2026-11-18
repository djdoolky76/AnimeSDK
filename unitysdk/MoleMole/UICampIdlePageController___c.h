#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

class FMDGDHCHEGP;
class IANDOOLAALI_DLAAJNDJPLO;
class IJOMBKFKJNM;
class OAEFGCLEHHO;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Predicate_1; }

#define MOLEMOLE_UICAMPIDLEPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1966BFF0)
#define MOLEMOLE_UICAMPIDLEPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1966C030)
#define MOLEMOLE_UICAMPIDLEPAGECONTROLLER___C__ONCLICKSTARTBATTLE_B__35_2_OFFSET UNITYSDK_OFFSET(0x1966C040)
#define MOLEMOLE_UICAMPIDLEPAGECONTROLLER___C__REFRESHCURRENTQA_B__182_1_OFFSET UNITYSDK_OFFSET(0x1966C080)
#define MOLEMOLE_UICAMPIDLEPAGECONTROLLER___C__REFRESHCURRENTQA_B__182_3_OFFSET UNITYSDK_OFFSET(0x1966C0A0)
#define MOLEMOLE_UICAMPIDLEPAGECONTROLLER___C__REFRESHOUTERINFO_B__115_0_OFFSET UNITYSDK_OFFSET(0x1966C050)

namespace MoleMole
{
	inline static constexpr unsigned int UICampIdlePageController___c_TypeDefinitionIndex = 38825;

	class UICampIdlePageController___c : public ::System::Object
	{
	public:
		static ::System::Predicate_1<::FMDGDHCHEGP*>** StaticGet___9__182_1()
		{
			return (::System::Predicate_1<::FMDGDHCHEGP*>**)Il2CppClass::FromTypeDefinitionIndex(UICampIdlePageController___c_TypeDefinitionIndex)->GetStaticField(0x42000);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UICampIdlePageController___c_TypeDefinitionIndex)->GetStaticField(0x42008);
		}
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::IJOMBKFKJNM*>, ::System::Boolean>** StaticGet___9__115_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::IJOMBKFKJNM*>, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UICampIdlePageController___c_TypeDefinitionIndex)->GetStaticField(0x42010);
		}
		static ::IANDOOLAALI_DLAAJNDJPLO** StaticGet___9__182_3()
		{
			return (::IANDOOLAALI_DLAAJNDJPLO**)Il2CppClass::FromTypeDefinitionIndex(UICampIdlePageController___c_TypeDefinitionIndex)->GetStaticField(0x42018);
		}
		static ::System::Func_2<::System::Int32, ::System::Boolean>** StaticGet___9__35_2()
		{
			return (::System::Func_2<::System::Int32, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UICampIdlePageController___c_TypeDefinitionIndex)->GetStaticField(0x42020);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMPIDLEPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMPIDLEPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _OnClickStartBattle_b__35_2(::System::Int32 i)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMPIDLEPAGECONTROLLER___C__ONCLICKSTARTBATTLE_B__35_2_OFFSET))(this, i);
		}

		::System::Boolean _RefreshOuterInfo_b__115_0(::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::IJOMBKFKJNM*> x)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::IJOMBKFKJNM*>))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMPIDLEPAGECONTROLLER___C__REFRESHOUTERINFO_B__115_0_OFFSET))(this, x);
		}

		::System::Boolean _RefreshCurrentQA_b__182_1(::FMDGDHCHEGP* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::FMDGDHCHEGP*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMPIDLEPAGECONTROLLER___C__REFRESHCURRENTQA_B__182_1_OFFSET))(this, x);
		}

		::System::Void _RefreshCurrentQA_b__182_3(::OAEFGCLEHHO* _)
		{
			return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMPIDLEPAGECONTROLLER___C__REFRESHCURRENTQA_B__182_3_OFFSET))(this, _);
		}
	};
}
