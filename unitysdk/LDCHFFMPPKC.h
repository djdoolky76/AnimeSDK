#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MPKBDIJDMAP;
namespace MoleMole { class ITextureSheetConfig; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }

#define LDCHFFMPPKC_AGBDGENGCMD_OFFSET UNITYSDK_OFFSET(0x1997CDC0)
#define LDCHFFMPPKC_FBKGDOCLBLE_OFFSET UNITYSDK_OFFSET(0x1997CC80)
#define LDCHFFMPPKC_FKNCBJDPKAC_OFFSET UNITYSDK_OFFSET(0x1997D040)
#define LDCHFFMPPKC_HOPIOMOLANG_OFFSET UNITYSDK_OFFSET(0x1997CF00)

inline static constexpr unsigned int LDCHFFMPPKC_TypeDefinitionIndex = 80181;

class LDCHFFMPPKC : public ::System::Object
{
public:
	static ::MPKBDIJDMAP* FBKGDOCLBLE(::MPKBDIJDMAP* IMLLDOHDCNC, ::System::Action_2<::MPKBDIJDMAP*, ::MoleMole::ITextureSheetConfig*>* GJBHEJGENMI)
	{
		return ((::MPKBDIJDMAP*(*)(::MPKBDIJDMAP*, ::System::Action_2<::MPKBDIJDMAP*, ::MoleMole::ITextureSheetConfig*>*))((::PBYTE)hIl2Cpp + LDCHFFMPPKC_FBKGDOCLBLE_OFFSET))(IMLLDOHDCNC, GJBHEJGENMI);
	}

	static ::MPKBDIJDMAP* AGBDGENGCMD(::MPKBDIJDMAP* IMLLDOHDCNC, ::System::Action_1<::MPKBDIJDMAP*>* GJBHEJGENMI)
	{
		return ((::MPKBDIJDMAP*(*)(::MPKBDIJDMAP*, ::System::Action_1<::MPKBDIJDMAP*>*))((::PBYTE)hIl2Cpp + LDCHFFMPPKC_AGBDGENGCMD_OFFSET))(IMLLDOHDCNC, GJBHEJGENMI);
	}

	static ::MPKBDIJDMAP* HOPIOMOLANG(::MPKBDIJDMAP* IMLLDOHDCNC, ::System::Action_2<::MPKBDIJDMAP*, ::MoleMole::ITextureSheetConfig*>* GJBHEJGENMI)
	{
		return ((::MPKBDIJDMAP*(*)(::MPKBDIJDMAP*, ::System::Action_2<::MPKBDIJDMAP*, ::MoleMole::ITextureSheetConfig*>*))((::PBYTE)hIl2Cpp + LDCHFFMPPKC_HOPIOMOLANG_OFFSET))(IMLLDOHDCNC, GJBHEJGENMI);
	}

	static ::MPKBDIJDMAP* FKNCBJDPKAC(::MPKBDIJDMAP* IMLLDOHDCNC, ::System::Action_1<::MPKBDIJDMAP*>* GJBHEJGENMI)
	{
		return ((::MPKBDIJDMAP*(*)(::MPKBDIJDMAP*, ::System::Action_1<::MPKBDIJDMAP*>*))((::PBYTE)hIl2Cpp + LDCHFFMPPKC_FKNCBJDPKAC_OFFSET))(IMLLDOHDCNC, GJBHEJGENMI);
	}
};
