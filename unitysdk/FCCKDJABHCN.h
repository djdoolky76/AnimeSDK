#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/KJFIKOKBCCA.h"
class EFKHNCOGKGH;
class HIOEAKHGILF;
class NDDFLGNNMDK;
class PEEDLCHFAFL;
namespace Entitas { class IContext; }
namespace Entitas { class IEntity; }
namespace Entitas { template <typename T> class ICollector_1; }
namespace Entitas { template <typename T> class IGroup_1; }
namespace RPG::GameCore { class FiveDimCleanerBotMoveConfig; }

#define FCCKDJABHCN_AAJNAFJEDHB_OFFSET UNITYSDK_OFFSET(0x156B3BE0)
#define FCCKDJABHCN_AFPJNHKBCGI_OFFSET UNITYSDK_OFFSET(0x156B15C0)
#define FCCKDJABHCN_AJJEMAABGCC_OFFSET UNITYSDK_OFFSET(0x156B3790)
#define FCCKDJABHCN_BAKKMIKDENP_OFFSET UNITYSDK_OFFSET(0x156B33B0)
#define FCCKDJABHCN_BGBJGJMDABI_OFFSET UNITYSDK_OFFSET(0x156B2440)
#define FCCKDJABHCN_CTOR_OFFSET UNITYSDK_OFFSET(0x156B12B0)
#define FCCKDJABHCN_EFKMPINKCJJ_OFFSET UNITYSDK_OFFSET(0x156B25C0)
#define FCCKDJABHCN_EXECUTE_OFFSET UNITYSDK_OFFSET(0x156B1900)
#define FCCKDJABHCN_GBJMONJFKOJ_OFFSET UNITYSDK_OFFSET(0x156B1950)
#define FCCKDJABHCN_GLEPOBKLPKD_OFFSET UNITYSDK_OFFSET(0x156B2FC0)
#define FCCKDJABHCN_HAEPIKDACHP_OFFSET UNITYSDK_OFFSET(0x156B38E0)
#define FCCKDJABHCN_HNFINEHNPHE_OFFSET UNITYSDK_OFFSET(0x156B3D70)
#define FCCKDJABHCN_ILIHGFGHIIF_OFFSET UNITYSDK_OFFSET(0x156B1B60)
#define FCCKDJABHCN_IMGKBFMNOLA_OFFSET UNITYSDK_OFFSET(0x156B3A60)
#define FCCKDJABHCN_IMKOPMCOKNO_OFFSET UNITYSDK_OFFSET(0x156B35A0)
#define FCCKDJABHCN_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x156B1570)
#define FCCKDJABHCN_JNDDFDIFLCC_OFFSET UNITYSDK_OFFSET(0x156B1ED0)
#define FCCKDJABHCN_LATEEXECUTE_OFFSET UNITYSDK_OFFSET(0x156B1AD0)
#define FCCKDJABHCN_LHDJNNKECAI_OFFSET UNITYSDK_OFFSET(0x156B1BC0)
#define FCCKDJABHCN_MKBNJGMPLLN_OFFSET UNITYSDK_OFFSET(0x156B3640)
#define FCCKDJABHCN_NOKBMFGHMJG_OFFSET UNITYSDK_OFFSET(0x156B2F10)
#define FCCKDJABHCN_TEARDOWN_OFFSET UNITYSDK_OFFSET(0x156B2220)

inline static constexpr unsigned int FCCKDJABHCN_TypeDefinitionIndex = 77148;

	class FCCKDJABHCN : public ::System::Object
	{
	public:
		::Entitas::IGroup_1<::HIOEAKHGILF*>* AKMIPJMCHJA; // 0x10
		::PEEDLCHFAFL* PDENFEFCAGN; // 0x18
		::NDDFLGNNMDK* FKINCGODJEP; // 0x20
		::Entitas::ICollector_1<::HIOEAKHGILF*>* MANLFKNAFAH; // 0x28
		::Entitas::IGroup_1<::HIOEAKHGILF*>* LKCDPPOENAH; // 0x30
		::System::Boolean OEAJGHPCKAC; // 0x38
		::System::Boolean BJMOFKLEAII; // 0x39
		::System::Void _ctor(::NDDFLGNNMDK* a1, ::PEEDLCHFAFL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::NDDFLGNNMDK*, ::PEEDLCHFAFL*))((::PBYTE)hIl2Cpp + FCCKDJABHCN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCCKDJABHCN_INITIALIZE_OFFSET))(this);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCCKDJABHCN_EXECUTE_OFFSET))(this);
		}

		::System::Void LateExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCCKDJABHCN_LATEEXECUTE_OFFSET))(this);
		}

		::System::Void TearDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCCKDJABHCN_TEARDOWN_OFFSET))(this);
		}

		::System::Void BGBJGJMDABI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCCKDJABHCN_BGBJGJMDABI_OFFSET))(this);
		}

		::System::Void AFPJNHKBCGI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCCKDJABHCN_AFPJNHKBCGI_OFFSET))(this);
		}

		::System::Void LHDJNNKECAI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCCKDJABHCN_LHDJNNKECAI_OFFSET))(this);
		}

		::System::Void EFKMPINKCJJ(::HIOEAKHGILF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + FCCKDJABHCN_EFKMPINKCJJ_OFFSET))(this, a1);
		}

		::System::Void GLEPOBKLPKD(::EFKHNCOGKGH* a1, ::HIOEAKHGILF* a2)
		{
			return ((::System::Void(*)(::PVOID, ::EFKHNCOGKGH*, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + FCCKDJABHCN_GLEPOBKLPKD_OFFSET))(this, a1, a2);
		}

		::System::Void IMKOPMCOKNO(::EFKHNCOGKGH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EFKHNCOGKGH*))((::PBYTE)hIl2Cpp + FCCKDJABHCN_IMKOPMCOKNO_OFFSET))(this, a1);
		}

		::HIOEAKHGILF* BAKKMIKDENP(::HIOEAKHGILF* a1)
		{
			return ((::HIOEAKHGILF*(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + FCCKDJABHCN_BAKKMIKDENP_OFFSET))(this, a1);
		}

		::System::Void NOKBMFGHMJG(::HIOEAKHGILF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + FCCKDJABHCN_NOKBMFGHMJG_OFFSET))(this, a1);
		}

		::System::Void ILIHGFGHIIF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCCKDJABHCN_ILIHGFGHIIF_OFFSET))(this);
		}

		::System::Void GBJMONJFKOJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCCKDJABHCN_GBJMONJFKOJ_OFFSET))(this);
		}

		::System::Void JNDDFDIFLCC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCCKDJABHCN_JNDDFDIFLCC_OFFSET))(this);
		}

		::System::Void HAEPIKDACHP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCCKDJABHCN_HAEPIKDACHP_OFFSET))(this);
		}

		::System::Void IMGKBFMNOLA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCCKDJABHCN_IMGKBFMNOLA_OFFSET))(this);
		}

		::System::Void AAJNAFJEDHB(::Entitas::IContext* a1, ::Entitas::IEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IContext*, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + FCCKDJABHCN_AAJNAFJEDHB_OFFSET))(this, a1, a2);
		}

		::System::Void HNFINEHNPHE(::HIOEAKHGILF* a1, ::RPG::GameCore::FiveDimCleanerBotMoveConfig* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::RPG::GameCore::FiveDimCleanerBotMoveConfig*))((::PBYTE)hIl2Cpp + FCCKDJABHCN_HNFINEHNPHE_OFFSET))(this, a1, a2);
		}

		::KJFIKOKBCCA MKBNJGMPLLN()
		{
			return ((::KJFIKOKBCCA(*)(::PVOID))((::PBYTE)hIl2Cpp + FCCKDJABHCN_MKBNJGMPLLN_OFFSET))(this);
		}

		::KJFIKOKBCCA AJJEMAABGCC()
		{
			return ((::KJFIKOKBCCA(*)(::PVOID))((::PBYTE)hIl2Cpp + FCCKDJABHCN_AJJEMAABGCC_OFFSET))(this);
		}

	};
