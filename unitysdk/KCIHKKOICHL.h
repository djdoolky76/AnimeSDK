#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/KCIHKKOICHL_BHGAOMIOGJD.h"

namespace BehaviorDesigner::Runtime { class ExternalBehavior; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Threading { class AutoResetEvent; }

#define KCIHKKOICHL_BHHNIGDJKFE_OFFSET UNITYSDK_OFFSET(0x14FCD8F0)
#define KCIHKKOICHL_CLLPBGEFFIJ_OFFSET UNITYSDK_OFFSET(0x14FCD800)
#define KCIHKKOICHL_GGPNFNJKFIA_OFFSET UNITYSDK_OFFSET(0x14FCDAC0)
#define KCIHKKOICHL_HGAOOMCOPKH_OFFSET UNITYSDK_OFFSET(0x14FCD990)
#define KCIHKKOICHL_JEHFBABMHOA_OFFSET UNITYSDK_OFFSET(0x14FCDC40)
#define KCIHKKOICHL_NAJDHAJCEKO_OFFSET UNITYSDK_OFFSET(0x14FCDBD0)
#define KCIHKKOICHL_NBMBDOGPALC_OFFSET UNITYSDK_OFFSET(0x14FCD660)

inline static constexpr unsigned int KCIHKKOICHL_TypeDefinitionIndex = 61178;

class KCIHKKOICHL : public ::System::Object
{
public:
	static ::System::Void NBMBDOGPALC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KCIHKKOICHL_NBMBDOGPALC_OFFSET))();
	}

	static ::System::Void CLLPBGEFFIJ()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KCIHKKOICHL_CLLPBGEFFIJ_OFFSET))();
	}

	static ::KCIHKKOICHL_BHGAOMIOGJD BHHNIGDJKFE(::System::String* CJBJONJDOLI)
	{
		return ((::KCIHKKOICHL_BHGAOMIOGJD(*)(::System::String*))((::PBYTE)hIl2Cpp + KCIHKKOICHL_BHHNIGDJKFE_OFFSET))(CJBJONJDOLI);
	}

	static ::System::Void HGAOOMCOPKH()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KCIHKKOICHL_HGAOOMCOPKH_OFFSET))();
	}

	static ::BehaviorDesigner::Runtime::ExternalBehavior* GGPNFNJKFIA(::System::String* CJBJONJDOLI)
	{
		return ((::BehaviorDesigner::Runtime::ExternalBehavior*(*)(::System::String*))((::PBYTE)hIl2Cpp + KCIHKKOICHL_GGPNFNJKFIA_OFFSET))(CJBJONJDOLI);
	}

	static ::System::Void NAJDHAJCEKO(::System::String* CJBJONJDOLI, ::System::Action_1<::System::Object*>* DMPEOJCCCLO)
	{
		return ((::System::Void(*)(::System::String*, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + KCIHKKOICHL_NAJDHAJCEKO_OFFSET))(CJBJONJDOLI, DMPEOJCCCLO);
	}

	static ::System::Void JEHFBABMHOA(::System::String* CJBJONJDOLI, ::System::Threading::AutoResetEvent* GNKPIJJJNOB)
	{
		return ((::System::Void(*)(::System::String*, ::System::Threading::AutoResetEvent*))((::PBYTE)hIl2Cpp + KCIHKKOICHL_JEHFBABMHOA_OFFSET))(CJBJONJDOLI, GNKPIJJJNOB);
	}
};
