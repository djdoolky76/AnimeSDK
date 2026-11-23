#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/A8F601FB69ED2B23.h"
#include "unitysdk/E2DE926113CB084F.h"

class AACFC915B3A87430;
class AB642D1382756991;
class E379DE61A548837D;
class FADE1581E70C25E3;
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define F8F4620C5F6D7B58_A332C3E033D73499_OFFSET UNITYSDK_OFFSET(0x1680A20)
#define F8F4620C5F6D7B58_E4CAAC8474519344_OFFSET UNITYSDK_OFFSET(0x1680890)
#define F8F4620C5F6D7B58_EFC474E11016B54A_OFFSET UNITYSDK_OFFSET(0x1680910)
#define F8F4620C5F6D7B58_FA932BDDB515D35C_OFFSET UNITYSDK_OFFSET(0x1680800)
#define F8F4620C5F6D7B58_FEB20D1077AA88E4_OFFSET UNITYSDK_OFFSET(0x1680A70)
#define F8F4620C5F6D7B58__CTOR_OFFSET UNITYSDK_OFFSET(0x1680AC0)

inline static constexpr unsigned int F8F4620C5F6D7B58_TypeDefinitionIndex = 415;

class F8F4620C5F6D7B58 : public ::A8F601FB69ED2B23
{
public:
	static ::System::Collections::Generic::Dictionary_2<::E2DE926113CB084F, ::System::Action_2<::FADE1581E70C25E3*, ::E379DE61A548837D*>*>** StaticGet_FFACDBC57F79CE44()
	{
		return (::System::Collections::Generic::Dictionary_2<::E2DE926113CB084F, ::System::Action_2<::FADE1581E70C25E3*, ::E379DE61A548837D*>*>**)Il2CppClass::FromTypeDefinitionIndex(F8F4620C5F6D7B58_TypeDefinitionIndex)->GetStaticField(0x0);
	}

	static ::System::Void EFC474E11016B54A()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + F8F4620C5F6D7B58_EFC474E11016B54A_OFFSET))();
	}

	::System::Void FEB20D1077AA88E4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F8F4620C5F6D7B58_FEB20D1077AA88E4_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::E2DE926113CB084F, ::System::Action_2<::FADE1581E70C25E3*, ::E379DE61A548837D*>*>* E4CAAC8474519344()
	{
		return ((::System::Collections::Generic::Dictionary_2<::E2DE926113CB084F, ::System::Action_2<::FADE1581E70C25E3*, ::E379DE61A548837D*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + F8F4620C5F6D7B58_E4CAAC8474519344_OFFSET))(this);
	}

	::System::Void FA932BDDB515D35C(::AB642D1382756991* EEF688477002B28B, ::AACFC915B3A87430* ACDE58E97E37D13C)
	{
		return ((::System::Void(*)(::PVOID, ::AB642D1382756991*, ::AACFC915B3A87430*))((::PBYTE)hIl2Cpp + F8F4620C5F6D7B58_FA932BDDB515D35C_OFFSET))(this, EEF688477002B28B, ACDE58E97E37D13C);
	}

	::System::Void A332C3E033D73499()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F8F4620C5F6D7B58_A332C3E033D73499_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F8F4620C5F6D7B58__CTOR_OFFSET))(this);
	}
};
