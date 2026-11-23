#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B8FEC4A172DA263F.h"
#include "unitysdk/E2DE926113CB084F.h"
#include "unitysdk/E12F55A5FCCCF1EC.h"

class AB642D1382756991;
class E379DE61A548837D;
class FADE1581E70C25E3;
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define E172F500036A498C_A332C3E033D73499_OFFSET UNITYSDK_OFFSET(0x1E49EB0)
#define E172F500036A498C_A805E5DFB5B80414_OFFSET UNITYSDK_OFFSET(0x1E4A390)
#define E172F500036A498C_E4CAAC8474519344_OFFSET UNITYSDK_OFFSET(0x1E482D0)
#define E172F500036A498C_EFC474E11016B54A_OFFSET UNITYSDK_OFFSET(0x1E48350)
#define E172F500036A498C_F13D7FC78F4A164D_OFFSET UNITYSDK_OFFSET(0x1E4AB00)
#define E172F500036A498C_FEB20D1077AA88E4_OFFSET UNITYSDK_OFFSET(0x1E4A620)
#define E172F500036A498C__CTOR_OFFSET UNITYSDK_OFFSET(0x1E4AB80)

inline static constexpr unsigned int E172F500036A498C_TypeDefinitionIndex = 9516;

class E172F500036A498C : public ::B8FEC4A172DA263F
{
public:
	static ::System::Collections::Generic::Dictionary_2<::E2DE926113CB084F, ::System::Action_2<::FADE1581E70C25E3*, ::E379DE61A548837D*>*>** StaticGet_FFACDBC57F79CE44()
	{
		return (::System::Collections::Generic::Dictionary_2<::E2DE926113CB084F, ::System::Action_2<::FADE1581E70C25E3*, ::E379DE61A548837D*>*>**)Il2CppClass::FromTypeDefinitionIndex(E172F500036A498C_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	::System::Collections::Generic::List_1<::AB642D1382756991*>* FF8B4D47B36D4516; // 0x110

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E172F500036A498C__CTOR_OFFSET))(this);
	}

	::System::Void A332C3E033D73499()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E172F500036A498C_A332C3E033D73499_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::E2DE926113CB084F, ::System::Action_2<::FADE1581E70C25E3*, ::E379DE61A548837D*>*>* E4CAAC8474519344()
	{
		return ((::System::Collections::Generic::Dictionary_2<::E2DE926113CB084F, ::System::Action_2<::FADE1581E70C25E3*, ::E379DE61A548837D*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + E172F500036A498C_E4CAAC8474519344_OFFSET))(this);
	}

	::System::Void F13D7FC78F4A164D(::E12F55A5FCCCF1EC EB5670302F34D4B7)
	{
		return ((::System::Void(*)(::PVOID, ::E12F55A5FCCCF1EC))((::PBYTE)hIl2Cpp + E172F500036A498C_F13D7FC78F4A164D_OFFSET))(this, EB5670302F34D4B7);
	}

	::System::Void A805E5DFB5B80414()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E172F500036A498C_A805E5DFB5B80414_OFFSET))(this);
	}

	::System::Void FEB20D1077AA88E4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E172F500036A498C_FEB20D1077AA88E4_OFFSET))(this);
	}

	static ::System::Void EFC474E11016B54A()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + E172F500036A498C_EFC474E11016B54A_OFFSET))();
	}
};
