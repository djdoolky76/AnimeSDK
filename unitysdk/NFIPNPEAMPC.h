#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BLIPPJCIEPA.h"
#include "unitysdk/System/Object.h"

class BKMLGPFOAHH;
class DDOHKLAENIB;
class IBENDELLLAO;
class PMKFHAMHEEP;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NFIPNPEAMPC_APAPFICMNJN_OFFSET UNITYSDK_OFFSET(0xE737F40)
#define NFIPNPEAMPC_APEJBNPLFPO_OFFSET UNITYSDK_OFFSET(0xE737FD0)
#define NFIPNPEAMPC_CCPLPMMEMOG_OFFSET UNITYSDK_OFFSET(0xE737DA0)
#define NFIPNPEAMPC_IKGNIMEBNPF_OFFSET UNITYSDK_OFFSET(0xE737B30)
#define NFIPNPEAMPC_JELOIKLIGPO_OFFSET UNITYSDK_OFFSET(0xE736E80)
#define NFIPNPEAMPC_LPMGPKLCLKP_OFFSET UNITYSDK_OFFSET(0xE737510)
#define NFIPNPEAMPC_MAAAKGOLLPH_OFFSET UNITYSDK_OFFSET(0xE737820)
#define NFIPNPEAMPC_MCCLENHNACI_OFFSET UNITYSDK_OFFSET(0xE7372F0)
#define NFIPNPEAMPC_PCDEEPDHBIJ_OFFSET UNITYSDK_OFFSET(0xE738420)
#define NFIPNPEAMPC_PDDEOKENDNL_OFFSET UNITYSDK_OFFSET(0xE736CB0)
#define NFIPNPEAMPC__CTOR_OFFSET UNITYSDK_OFFSET(0xE736C20)

inline static constexpr unsigned int NFIPNPEAMPC_TypeDefinitionIndex = 47653;

class NFIPNPEAMPC : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::PMKFHAMHEEP*>* CGMMFEHGLCG; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFIPNPEAMPC__CTOR_OFFSET))(this);
	}

	::System::Void PDDEOKENDNL(::BKMLGPFOAHH* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::BKMLGPFOAHH*))((::PBYTE)hIl2Cpp + NFIPNPEAMPC_PDDEOKENDNL_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void MCCLENHNACI(::System::Int32 OIKFFGKDHME, ::System::Boolean IODMBPECBHP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + NFIPNPEAMPC_MCCLENHNACI_OFFSET))(this, OIKFFGKDHME, IODMBPECBHP);
	}

	::System::Void LPMGPKLCLKP(::DDOHKLAENIB* OFBDJCHNGOI)
	{
		return ((::System::Void(*)(::PVOID, ::DDOHKLAENIB*))((::PBYTE)hIl2Cpp + NFIPNPEAMPC_LPMGPKLCLKP_OFFSET))(this, OFBDJCHNGOI);
	}

	::System::Void MAAAKGOLLPH(::System::Collections::Generic::List_1<::System::Int32>* LHAGMAKDGNK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + NFIPNPEAMPC_MAAAKGOLLPH_OFFSET))(this, LHAGMAKDGNK);
	}

	::System::Collections::Generic::HashSet_1<::System::UInt32>* IKGNIMEBNPF()
	{
		return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NFIPNPEAMPC_IKGNIMEBNPF_OFFSET))(this);
	}

	::IBENDELLLAO* CCPLPMMEMOG(::BLIPPJCIEPA OBNIAHNMHPF)
	{
		return ((::IBENDELLLAO*(*)(::PVOID, ::BLIPPJCIEPA))((::PBYTE)hIl2Cpp + NFIPNPEAMPC_CCPLPMMEMOG_OFFSET))(this, OBNIAHNMHPF);
	}

	::System::Int32 APAPFICMNJN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NFIPNPEAMPC_APAPFICMNJN_OFFSET))(this);
	}

	::System::Void JELOIKLIGPO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFIPNPEAMPC_JELOIKLIGPO_OFFSET))(this);
	}

	::System::Void APEJBNPLFPO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFIPNPEAMPC_APEJBNPLFPO_OFFSET))(this);
	}

	::PMKFHAMHEEP* PCDEEPDHBIJ(::System::UInt32 NODNILGBMFG)
	{
		return ((::PMKFHAMHEEP*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NFIPNPEAMPC_PCDEEPDHBIJ_OFFSET))(this, NODNILGBMFG);
	}
};
