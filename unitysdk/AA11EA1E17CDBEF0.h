#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BFB0551D4A561A7E.h"
#include "unitysdk/E2DE926113CB084F.h"

class E379DE61A548837D;
class E456CE81EECE1E51;
class FADE1581E70C25E3;
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AA11EA1E17CDBEF0_A332C3E033D73499_OFFSET UNITYSDK_OFFSET(0x1817380)
#define AA11EA1E17CDBEF0_BF513E23478C4137_OFFSET UNITYSDK_OFFSET(0x1817400)
#define AA11EA1E17CDBEF0_E4CAAC8474519344_OFFSET UNITYSDK_OFFSET(0x1816FC0)
#define AA11EA1E17CDBEF0_E6FD0AE935646116_OFFSET UNITYSDK_OFFSET(0x1817040)
#define AA11EA1E17CDBEF0_EFC474E11016B54A_OFFSET UNITYSDK_OFFSET(0x1817150)
#define AA11EA1E17CDBEF0_FEB20D1077AA88E4_OFFSET UNITYSDK_OFFSET(0x1817510)
#define AA11EA1E17CDBEF0__CTOR_OFFSET UNITYSDK_OFFSET(0x1817590)

inline static constexpr unsigned int AA11EA1E17CDBEF0_TypeDefinitionIndex = 1109;

class AA11EA1E17CDBEF0 : public ::BFB0551D4A561A7E
{
public:
	static ::System::Collections::Generic::Dictionary_2<::E2DE926113CB084F, ::System::Action_2<::FADE1581E70C25E3*, ::E379DE61A548837D*>*>** StaticGet_FFACDBC57F79CE44()
	{
		return (::System::Collections::Generic::Dictionary_2<::E2DE926113CB084F, ::System::Action_2<::FADE1581E70C25E3*, ::E379DE61A548837D*>*>**)Il2CppClass::FromTypeDefinitionIndex(AA11EA1E17CDBEF0_TypeDefinitionIndex)->GetStaticField(0x0);
	}

	static ::System::Void EFC474E11016B54A()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AA11EA1E17CDBEF0_EFC474E11016B54A_OFFSET))();
	}

	::System::Collections::Generic::Dictionary_2<::E2DE926113CB084F, ::System::Action_2<::FADE1581E70C25E3*, ::E379DE61A548837D*>*>* E4CAAC8474519344()
	{
		return ((::System::Collections::Generic::Dictionary_2<::E2DE926113CB084F, ::System::Action_2<::FADE1581E70C25E3*, ::E379DE61A548837D*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AA11EA1E17CDBEF0_E4CAAC8474519344_OFFSET))(this);
	}

	::System::Void A332C3E033D73499()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AA11EA1E17CDBEF0_A332C3E033D73499_OFFSET))(this);
	}

	::System::Void E6FD0AE935646116(::E456CE81EECE1E51* AF56F86C59FD37AD)
	{
		return ((::System::Void(*)(::PVOID, ::E456CE81EECE1E51*))((::PBYTE)hIl2Cpp + AA11EA1E17CDBEF0_E6FD0AE935646116_OFFSET))(this, AF56F86C59FD37AD);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AA11EA1E17CDBEF0__CTOR_OFFSET))(this);
	}

	::System::Void FEB20D1077AA88E4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AA11EA1E17CDBEF0_FEB20D1077AA88E4_OFFSET))(this);
	}

	::System::Void BF513E23478C4137()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AA11EA1E17CDBEF0_BF513E23478C4137_OFFSET))(this);
	}
};
