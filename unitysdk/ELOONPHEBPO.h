#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JMLLJAOFDGD.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define ELOONPHEBPO_BIKHPDLBMFA_OFFSET UNITYSDK_OFFSET(0x14276F60)
#define ELOONPHEBPO_DECMGICKDLH_OFFSET UNITYSDK_OFFSET(0x14276AD0)
#define ELOONPHEBPO_EJHKKKPFCKE_OFFSET UNITYSDK_OFFSET(0x14276B40)
#define ELOONPHEBPO_KFHPPBIFOMG_OFFSET UNITYSDK_OFFSET(0x14276AE0)
#define ELOONPHEBPO_NLIPLBAFEKH_OFFSET UNITYSDK_OFFSET(0x14276E00)
#define ELOONPHEBPO__CTOR_OFFSET UNITYSDK_OFFSET(0x14276AF0)

inline static constexpr unsigned int ELOONPHEBPO_TypeDefinitionIndex = 78309;

class ELOONPHEBPO : public ::JMLLJAOFDGD
{
public:
	::System::Action_2<::System::Int32, ::System::String*>* EJGDHCIBCJH; // 0x30
	::System::String* _BLBIAMKGHJL_k__BackingField; // 0x38
	::System::String* BNNPDDOBGNP; // 0x40

	::System::Void _ctor(::System::Action_2<::System::Int32, ::System::String*>* EJGDHCIBCJH, ::System::String* BNNPDDOBGNP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_2<::System::Int32, ::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + ELOONPHEBPO__CTOR_OFFSET))(this, EJGDHCIBCJH, BNNPDDOBGNP);
	}

	::System::String* DECMGICKDLH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELOONPHEBPO_DECMGICKDLH_OFFSET))(this);
	}

	::System::Void KFHPPBIFOMG(::System::String* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ELOONPHEBPO_KFHPPBIFOMG_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void EJHKKKPFCKE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELOONPHEBPO_EJHKKKPFCKE_OFFSET))(this);
	}

	::System::Void NLIPLBAFEKH(::System::String* DKPGLAFDLBC)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ELOONPHEBPO_NLIPLBAFEKH_OFFSET))(this, DKPGLAFDLBC);
	}

	::System::Void BIKHPDLBMFA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELOONPHEBPO_BIKHPDLBMFA_OFFSET))(this);
	}
};
