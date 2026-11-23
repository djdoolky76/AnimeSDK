#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class A625D585357F45FC_E21EEC6E68BB6AF2;
class A625D585357F45FC_E2A179F371447913;
class B1DF25493F639BCE;
class BAD914528AA19877;
class F7499DF1533C7100;
namespace System { class Action; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Reflection { class F60CD5AA5C2080DF; }
namespace System::Reflection { class MethodInfo; }

#define FCF0D1E65E0610A4_E16FC28579FC5836_OFFSET UNITYSDK_OFFSET(0x38BD720)
#define FCF0D1E65E0610A4_E4C7FEC0E16C6E06_OFFSET UNITYSDK_OFFSET(0x38BC680)
#define FCF0D1E65E0610A4_E6FFCC95791B7633_OFFSET UNITYSDK_OFFSET(0x38BA3C0)
#define FCF0D1E65E0610A4_EECF8E0B60D14DD3_OFFSET UNITYSDK_OFFSET(0x38BCA40)
#define FCF0D1E65E0610A4__CCTOR_OFFSET UNITYSDK_OFFSET(0x38BC600)

inline static constexpr unsigned int FCF0D1E65E0610A4_TypeDefinitionIndex = 20323;

class FCF0D1E65E0610A4 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::Reflection::F60CD5AA5C2080DF*, ::System::Action*>** StaticGet_F595EA31CF828FA6()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Reflection::F60CD5AA5C2080DF*, ::System::Action*>**)Il2CppClass::FromTypeDefinitionIndex(FCF0D1E65E0610A4_TypeDefinitionIndex)->GetStaticField(0x0);
	}

	static ::BAD914528AA19877* EECF8E0B60D14DD3(::A625D585357F45FC_E2A179F371447913* A1DE5DEAE6B0EFAF, ::Il2CppArray<::System::Type*>* B73EE6F07E44C422)
	{
		return ((::BAD914528AA19877*(*)(::A625D585357F45FC_E2A179F371447913*, ::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + FCF0D1E65E0610A4_EECF8E0B60D14DD3_OFFSET))(A1DE5DEAE6B0EFAF, B73EE6F07E44C422);
	}

	static ::System::Int32 E4C7FEC0E16C6E06(::System::Collections::Generic::List_1<::System::Type*>* AAF96D5E612D0AB7, ::BAD914528AA19877* EA8FABEC6D125B33)
	{
		return ((::System::Int32(*)(::System::Collections::Generic::List_1<::System::Type*>*, ::BAD914528AA19877*))((::PBYTE)hIl2Cpp + FCF0D1E65E0610A4_E4C7FEC0E16C6E06_OFFSET))(AAF96D5E612D0AB7, EA8FABEC6D125B33);
	}

	static ::F7499DF1533C7100* E6FFCC95791B7633(::B1DF25493F639BCE* BC92BE65F028CD67, ::System::String* F289395D8EE56768, ::System::Boolean ECC0E88B0ABF3545)
	{
		return ((::F7499DF1533C7100*(*)(::B1DF25493F639BCE*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + FCF0D1E65E0610A4_E6FFCC95791B7633_OFFSET))(BC92BE65F028CD67, F289395D8EE56768, ECC0E88B0ABF3545);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FCF0D1E65E0610A4__CCTOR_OFFSET))();
	}

	static ::Il2CppArray<::System::Int32>* E16FC28579FC5836(::A625D585357F45FC_E21EEC6E68BB6AF2* B29880F033C1F232, ::System::Collections::Generic::Dictionary_2<::System::Reflection::MethodInfo*, ::System::Int32>* F4E0963937DA8435, ::Il2CppArray<::System::Type*>* B73EE6F07E44C422, ::System::Int32 F3CE11767C371B2D)
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::A625D585357F45FC_E21EEC6E68BB6AF2*, ::System::Collections::Generic::Dictionary_2<::System::Reflection::MethodInfo*, ::System::Int32>*, ::Il2CppArray<::System::Type*>*, ::System::Int32))((::PBYTE)hIl2Cpp + FCF0D1E65E0610A4_E16FC28579FC5836_OFFSET))(B29880F033C1F232, F4E0963937DA8435, B73EE6F07E44C422, F3CE11767C371B2D);
	}
};
