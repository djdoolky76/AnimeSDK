#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E2DE926113CB084F.h"
#include "unitysdk/F4E164DE63E7AD99.h"

class E379DE61A548837D;
class FADE1581E70C25E3;
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BF22AB269318D2CB_A332C3E033D73499_OFFSET UNITYSDK_OFFSET(0x26DB130)
#define BF22AB269318D2CB_E4CAAC8474519344_OFFSET UNITYSDK_OFFSET(0x26DAE60)
#define BF22AB269318D2CB_E721874F8CEF553A_OFFSET UNITYSDK_OFFSET(0x26DAFF0)
#define BF22AB269318D2CB_EFC474E11016B54A_OFFSET UNITYSDK_OFFSET(0x26DAEE0)
#define BF22AB269318D2CB_F148CB80B7853B2B_OFFSET UNITYSDK_OFFSET(0x26DB090)
#define BF22AB269318D2CB_FEB20D1077AA88E4_OFFSET UNITYSDK_OFFSET(0x26DB180)
#define BF22AB269318D2CB__CTOR_OFFSET UNITYSDK_OFFSET(0x26DB1D0)

inline static constexpr unsigned int BF22AB269318D2CB_TypeDefinitionIndex = 2655;

class BF22AB269318D2CB : public ::F4E164DE63E7AD99
{
public:
	static ::System::Collections::Generic::Dictionary_2<::E2DE926113CB084F, ::System::Action_2<::FADE1581E70C25E3*, ::E379DE61A548837D*>*>** StaticGet_FFACDBC57F79CE44()
	{
		return (::System::Collections::Generic::Dictionary_2<::E2DE926113CB084F, ::System::Action_2<::FADE1581E70C25E3*, ::E379DE61A548837D*>*>**)Il2CppClass::FromTypeDefinitionIndex(BF22AB269318D2CB_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::BF22AB269318D2CB** StaticGet_F2EC524D6D748B5F()
	{
		return (::BF22AB269318D2CB**)Il2CppClass::FromTypeDefinitionIndex(BF22AB269318D2CB_TypeDefinitionIndex)->GetStaticField(0x8);
	}

	::System::Void E721874F8CEF553A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BF22AB269318D2CB_E721874F8CEF553A_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::E2DE926113CB084F, ::System::Action_2<::FADE1581E70C25E3*, ::E379DE61A548837D*>*>* E4CAAC8474519344()
	{
		return ((::System::Collections::Generic::Dictionary_2<::E2DE926113CB084F, ::System::Action_2<::FADE1581E70C25E3*, ::E379DE61A548837D*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BF22AB269318D2CB_E4CAAC8474519344_OFFSET))(this);
	}

	::System::Void F148CB80B7853B2B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BF22AB269318D2CB_F148CB80B7853B2B_OFFSET))(this);
	}

	::System::Void FEB20D1077AA88E4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BF22AB269318D2CB_FEB20D1077AA88E4_OFFSET))(this);
	}

	static ::System::Void EFC474E11016B54A()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BF22AB269318D2CB_EFC474E11016B54A_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BF22AB269318D2CB__CTOR_OFFSET))(this);
	}

	::System::Void A332C3E033D73499()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BF22AB269318D2CB_A332C3E033D73499_OFFSET))(this);
	}
};
