#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E2DE926113CB084F.h"
#include "unitysdk/F96A0AC7B53BE96B.h"

class E379DE61A548837D;
class E3EBC54DD7CB1278;
class FADE1581E70C25E3;
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define B9B24BB3AE2EBC99_A01056361253C11B_OFFSET UNITYSDK_OFFSET(0x1C025F0)
#define B9B24BB3AE2EBC99_A332C3E033D73499_OFFSET UNITYSDK_OFFSET(0x1C032A0)
#define B9B24BB3AE2EBC99_E4CAAC8474519344_OFFSET UNITYSDK_OFFSET(0x1C026A0)
#define B9B24BB3AE2EBC99_EFC474E11016B54A_OFFSET UNITYSDK_OFFSET(0x1C02720)
#define B9B24BB3AE2EBC99_FEB20D1077AA88E4_OFFSET UNITYSDK_OFFSET(0x1C034D0)
#define B9B24BB3AE2EBC99__CTOR_OFFSET UNITYSDK_OFFSET(0x1C03700)

inline static constexpr unsigned int B9B24BB3AE2EBC99_TypeDefinitionIndex = 368;

class B9B24BB3AE2EBC99 : public ::F96A0AC7B53BE96B
{
public:
	static ::System::Collections::Generic::Dictionary_2<::E2DE926113CB084F, ::System::Action_2<::FADE1581E70C25E3*, ::E379DE61A548837D*>*>** StaticGet_FFACDBC57F79CE44()
	{
		return (::System::Collections::Generic::Dictionary_2<::E2DE926113CB084F, ::System::Action_2<::FADE1581E70C25E3*, ::E379DE61A548837D*>*>**)Il2CppClass::FromTypeDefinitionIndex(B9B24BB3AE2EBC99_TypeDefinitionIndex)->GetStaticField(0x0);
	}

	::System::Void A332C3E033D73499()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B9B24BB3AE2EBC99_A332C3E033D73499_OFFSET))(this);
	}

	::E3EBC54DD7CB1278* A01056361253C11B(::System::UInt32 BC184AAB30730354)
	{
		return ((::E3EBC54DD7CB1278*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + B9B24BB3AE2EBC99_A01056361253C11B_OFFSET))(this, BC184AAB30730354);
	}

	::System::Collections::Generic::Dictionary_2<::E2DE926113CB084F, ::System::Action_2<::FADE1581E70C25E3*, ::E379DE61A548837D*>*>* E4CAAC8474519344()
	{
		return ((::System::Collections::Generic::Dictionary_2<::E2DE926113CB084F, ::System::Action_2<::FADE1581E70C25E3*, ::E379DE61A548837D*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + B9B24BB3AE2EBC99_E4CAAC8474519344_OFFSET))(this);
	}

	::System::Void FEB20D1077AA88E4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B9B24BB3AE2EBC99_FEB20D1077AA88E4_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B9B24BB3AE2EBC99__CTOR_OFFSET))(this);
	}

	static ::System::Void EFC474E11016B54A()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + B9B24BB3AE2EBC99_EFC474E11016B54A_OFFSET))();
	}
};
