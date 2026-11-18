#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BFLFEIIEBAJ;
class HHDCEJNLLBG;
class OKMKPBHHEOG;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GHDMLFODHFB_KGNEJKNNODJ_OFFSET UNITYSDK_OFFSET(0x1E8B3ED0)
#define GHDMLFODHFB_KPNHMEHFGJO_OFFSET UNITYSDK_OFFSET(0x1E8B4150)
#define GHDMLFODHFB__CTOR_OFFSET UNITYSDK_OFFSET(0x1E8B3EC0)

inline static constexpr unsigned int GHDMLFODHFB_TypeDefinitionIndex = 94680;

class GHDMLFODHFB : public ::System::Object
{
public:
	::OKMKPBHHEOG* OBAAIPFJKNH; // 0x10
	::BFLFEIIEBAJ* FPBCKHKKGNP; // 0x18

	::System::Void _ctor(::BFLFEIIEBAJ* FPBCKHKKGNP, ::OKMKPBHHEOG* OBAAIPFJKNH)
	{
		return ((::System::Void(*)(::PVOID, ::BFLFEIIEBAJ*, ::OKMKPBHHEOG*))((::PBYTE)hIl2Cpp + GHDMLFODHFB__CTOR_OFFSET))(this, FPBCKHKKGNP, OBAAIPFJKNH);
	}

	::HHDCEJNLLBG* KGNEJKNNODJ(::System::Int32 MGMDLMBEDJF, ::System::Boolean ANLJEKFCBNO, ::System::UInt32 JGDOIBLCMCL)
	{
		return ((::HHDCEJNLLBG*(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::UInt32))((::PBYTE)hIl2Cpp + GHDMLFODHFB_KGNEJKNNODJ_OFFSET))(this, MGMDLMBEDJF, ANLJEKFCBNO, JGDOIBLCMCL);
	}

	::System::Collections::Generic::List_1<::HHDCEJNLLBG*>* KPNHMEHFGJO(::System::UInt32 JGDOIBLCMCL)
	{
		return ((::System::Collections::Generic::List_1<::HHDCEJNLLBG*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GHDMLFODHFB_KPNHMEHFGJO_OFFSET))(this, JGDOIBLCMCL);
	}
};
