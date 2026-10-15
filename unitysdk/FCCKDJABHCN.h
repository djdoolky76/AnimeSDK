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

#define FCCKDJABHCN_AAJNAFJEDHB_OFFSET UNITYSDK_OFFSET(0x156A7CE0)
#define FCCKDJABHCN_AFPJNHKBCGI_OFFSET UNITYSDK_OFFSET(0x156A5710)
#define FCCKDJABHCN_AJJEMAABGCC_OFFSET UNITYSDK_OFFSET(0x156A7890)
#define FCCKDJABHCN_BAKKMIKDENP_OFFSET UNITYSDK_OFFSET(0x156A74B0)
#define FCCKDJABHCN_BGBJGJMDABI_OFFSET UNITYSDK_OFFSET(0x156A6590)
#define FCCKDJABHCN_CTOR_OFFSET UNITYSDK_OFFSET(0x156A5400)
#define FCCKDJABHCN_EFKMPINKCJJ_OFFSET UNITYSDK_OFFSET(0x156A6710)
#define FCCKDJABHCN_EXECUTE_OFFSET UNITYSDK_OFFSET(0x156A5A50)
#define FCCKDJABHCN_GBJMONJFKOJ_OFFSET UNITYSDK_OFFSET(0x156A5AA0)
#define FCCKDJABHCN_GLEPOBKLPKD_OFFSET UNITYSDK_OFFSET(0x156A70F0)
#define FCCKDJABHCN_HAEPIKDACHP_OFFSET UNITYSDK_OFFSET(0x156A79E0)
#define FCCKDJABHCN_HNFINEHNPHE_OFFSET UNITYSDK_OFFSET(0x156A7E70)
#define FCCKDJABHCN_ILIHGFGHIIF_OFFSET UNITYSDK_OFFSET(0x156A5CB0)
#define FCCKDJABHCN_IMGKBFMNOLA_OFFSET UNITYSDK_OFFSET(0x156A7B60)
#define FCCKDJABHCN_IMKOPMCOKNO_OFFSET UNITYSDK_OFFSET(0x156A76A0)
#define FCCKDJABHCN_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x156A56C0)
#define FCCKDJABHCN_JNDDFDIFLCC_OFFSET UNITYSDK_OFFSET(0x156A6020)
#define FCCKDJABHCN_LATEEXECUTE_OFFSET UNITYSDK_OFFSET(0x156A5C20)
#define FCCKDJABHCN_LHDJNNKECAI_OFFSET UNITYSDK_OFFSET(0x156A5D10)
#define FCCKDJABHCN_MKBNJGMPLLN_OFFSET UNITYSDK_OFFSET(0x156A7740)
#define FCCKDJABHCN_NOKBMFGHMJG_OFFSET UNITYSDK_OFFSET(0x156A7040)
#define FCCKDJABHCN_TEARDOWN_OFFSET UNITYSDK_OFFSET(0x156A6370)

inline static constexpr unsigned int FCCKDJABHCN_TypeDefinitionIndex = 77147;

	class FCCKDJABHCN : public ::System::Object
	{
	public:
		::PEEDLCHFAFL* PDENFEFCAGN; // 0x10
		::Entitas::ICollector_1<::HIOEAKHGILF*>* MANLFKNAFAH; // 0x18
		::Entitas::IGroup_1<::HIOEAKHGILF*>* LKCDPPOENAH; // 0x20
		::Entitas::IGroup_1<::HIOEAKHGILF*>* AKMIPJMCHJA; // 0x28
		::NDDFLGNNMDK* FKINCGODJEP; // 0x30
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
