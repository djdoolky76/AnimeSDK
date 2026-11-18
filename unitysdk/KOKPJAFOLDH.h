#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"

class ENGKPGFGGLM;
class KGDNHPPNKEN;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KOKPJAFOLDH_DKKIMAHIPED_OFFSET UNITYSDK_OFFSET(0x1A2DEC30)
#define KOKPJAFOLDH_EABPGPBIHMO_OFFSET UNITYSDK_OFFSET(0x1A2DEFE0)
#define KOKPJAFOLDH_HKHOHFIODDP_OFFSET UNITYSDK_OFFSET(0x1A2DF770)
#define KOKPJAFOLDH_IKKDHPMACDO_OFFSET UNITYSDK_OFFSET(0x1A2DEF70)
#define KOKPJAFOLDH_KOLPCLEMHGJ_OFFSET UNITYSDK_OFFSET(0x1A2DF070)
#define KOKPJAFOLDH_LECEINHEGKD_OFFSET UNITYSDK_OFFSET(0x1A2DF3B0)
#define KOKPJAFOLDH_MJFHPEBFAID_OFFSET UNITYSDK_OFFSET(0x1A2DF880)
#define KOKPJAFOLDH_NOINIGMMOBE_OFFSET UNITYSDK_OFFSET(0x1A2DEDB0)
#define KOKPJAFOLDH_NPKOJLALOBC_OFFSET UNITYSDK_OFFSET(0x1A2DF6E0)
#define KOKPJAFOLDH__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2DEEE0)

inline static constexpr unsigned int KOKPJAFOLDH_TypeDefinitionIndex = 43191;

class KOKPJAFOLDH
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::KGDNHPPNKEN*>* OFIMPHKMGAF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOKPJAFOLDH__CTOR_OFFSET))(this);
	}

	::System::Void DKKIMAHIPED()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOKPJAFOLDH_DKKIMAHIPED_OFFSET))(this);
	}

	::System::Void NOINIGMMOBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOKPJAFOLDH_NOINIGMMOBE_OFFSET))(this);
	}

	::System::Boolean IKKDHPMACDO(::System::Double EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + KOKPJAFOLDH_IKKDHPMACDO_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void EABPGPBIHMO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOKPJAFOLDH_EABPGPBIHMO_OFFSET))(this);
	}

	::System::Void KOLPCLEMHGJ(::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::PVOID, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + KOKPJAFOLDH_KOLPCLEMHGJ_OFFSET))(this, FFNKDGGHBPP);
	}

	::System::Void NPKOJLALOBC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOKPJAFOLDH_NPKOJLALOBC_OFFSET))(this);
	}

	::System::Boolean HKHOHFIODDP(::System::UInt32 NJNCGJLHLKC, ::KGDNHPPNKEN*& LJBPECKCCEA)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::KGDNHPPNKEN*&))((::PBYTE)hIl2Cpp + KOKPJAFOLDH_HKHOHFIODDP_OFFSET))(this, NJNCGJLHLKC, LJBPECKCCEA);
	}

	::System::Boolean MJFHPEBFAID(::MoleMole::EntityHandle HPADNAEINPK, ::MoleMole::EntityHandle& IOMGEDDACGA, ::System::Boolean& LCDBOOKMABF)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::EntityHandle, ::MoleMole::EntityHandle&, ::System::Boolean&))((::PBYTE)hIl2Cpp + KOKPJAFOLDH_MJFHPEBFAID_OFFSET))(this, HPADNAEINPK, IOMGEDDACGA, LCDBOOKMABF);
	}

	::System::Void LECEINHEGKD(::MoleMole::EntityHandle HPADNAEINPK, ::System::Double EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle, ::System::Double))((::PBYTE)hIl2Cpp + KOKPJAFOLDH_LECEINHEGKD_OFFSET))(this, HPADNAEINPK, EGEGIMGMJHN);
	}
};
