#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/JHHIMNANJHP.h"
#include "unitysdk/KEHLFNHAMLA.h"
#include "unitysdk/KJFIKOKBCCA.h"
#include "unitysdk/NJBLCLGHIOE.h"
class HIOEAKHGILF;
class IHAJEPBCCFP;
class NDDFLGNNMDK;
class PEEDLCHFAFL;
namespace Entitas { class IContext; }
namespace Entitas { class IEntity; }
namespace Entitas { template <typename T> class ICollector_1; }
namespace Entitas { template <typename T> class IGroup_1; }
namespace RPG::GameCore { class FiveDimSplineMoveConfig; }

#define CMFAIIHOFPL_AAFMGMJGGHB_OFFSET UNITYSDK_OFFSET(0xDA2CD80)
#define CMFAIIHOFPL_AAJNAFJEDHB_OFFSET UNITYSDK_OFFSET(0xDA2D9F0)
#define CMFAIIHOFPL_CTOR_OFFSET UNITYSDK_OFFSET(0xDA2BC40)
#define CMFAIIHOFPL_DEFHOKLPIAH_1_OFFSET UNITYSDK_OFFSET(0xDA2EAB0)
#define CMFAIIHOFPL_DEFHOKLPIAH_2_OFFSET UNITYSDK_OFFSET(0xDA2EC00)
#define CMFAIIHOFPL_DEFHOKLPIAH_OFFSET UNITYSDK_OFFSET(0xDA2E900)
#define CMFAIIHOFPL_DNMCCKHNIBN_OFFSET UNITYSDK_OFFSET(0xDA2C120)
#define CMFAIIHOFPL_DPFOPANAOGK_OFFSET UNITYSDK_OFFSET(0xDA2D7C0)
#define CMFAIIHOFPL_EAPLKBMLFHL_OFFSET UNITYSDK_OFFSET(0xDA2E570)
#define CMFAIIHOFPL_EEKCGDFDCEE_OFFSET UNITYSDK_OFFSET(0xDA2D550)
#define CMFAIIHOFPL_FOOGPALMCOG_OFFSET UNITYSDK_OFFSET(0xDA2EDC0)
#define CMFAIIHOFPL_GGKIBHAPKLJ_OFFSET UNITYSDK_OFFSET(0xDA2E4D0)
#define CMFAIIHOFPL_GJPFFNOFAIB_OFFSET UNITYSDK_OFFSET(0xDA2E770)
#define CMFAIIHOFPL_IAMNJHPDONJ_OFFSET UNITYSDK_OFFSET(0xDA2C980)
#define CMFAIIHOFPL_IGCCDPEHMBL_OFFSET UNITYSDK_OFFSET(0xDA2D820)
#define CMFAIIHOFPL_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xDA2BE70)
#define CMFAIIHOFPL_LATEEXECUTE_OFFSET UNITYSDK_OFFSET(0xDA2C0D0)
#define CMFAIIHOFPL_LDDGJEPNPNP_OFFSET UNITYSDK_OFFSET(0xDA2BEC0)
#define CMFAIIHOFPL_LIGIEPAAPFD_OFFSET UNITYSDK_OFFSET(0xDA2E000)
#define CMFAIIHOFPL_MEPHODBNAKL_OFFSET UNITYSDK_OFFSET(0xDA2D730)
#define CMFAIIHOFPL_NHCNNIOHJDI_OFFSET UNITYSDK_OFFSET(0xDA2E310)
#define CMFAIIHOFPL_NIHJDCKNOMB_OFFSET UNITYSDK_OFFSET(0xDA2EFD0)
#define CMFAIIHOFPL_NNPEIBBGEFI_1_OFFSET UNITYSDK_OFFSET(0xDA2DCA0)
#define CMFAIIHOFPL_NNPEIBBGEFI_OFFSET UNITYSDK_OFFSET(0xDA2C380)
#define CMFAIIHOFPL_OHHCPBOJKKG_OFFSET UNITYSDK_OFFSET(0xDA2F130)
#define CMFAIIHOFPL_OHOOABANHNF_OFFSET UNITYSDK_OFFSET(0xDA2ECF0)
#define CMFAIIHOFPL_PJIGFGDAALO_OFFSET UNITYSDK_OFFSET(0xDA2DAD0)
#define CMFAIIHOFPL_TEARDOWN_OFFSET UNITYSDK_OFFSET(0xDA2C750)

inline static constexpr unsigned int CMFAIIHOFPL_TypeDefinitionIndex = 77162;

	class CMFAIIHOFPL : public ::System::Object
	{
	public:
		::PEEDLCHFAFL* PDENFEFCAGN; // 0x10
		::Entitas::IGroup_1<::HIOEAKHGILF*>* BNBKEJONPIJ; // 0x18
		::Entitas::ICollector_1<::HIOEAKHGILF*>* CBLPDFPEJLO; // 0x20
		::NDDFLGNNMDK* FKINCGODJEP; // 0x28
		::System::Void _ctor(::NDDFLGNNMDK* a1, ::PEEDLCHFAFL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::NDDFLGNNMDK*, ::PEEDLCHFAFL*))((::PBYTE)hIl2Cpp + CMFAIIHOFPL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMFAIIHOFPL_INITIALIZE_OFFSET))(this);
		}

		::System::Void LateExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMFAIIHOFPL_LATEEXECUTE_OFFSET))(this);
		}

		::System::Void TearDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMFAIIHOFPL_TEARDOWN_OFFSET))(this);
		}

		::System::Void DNMCCKHNIBN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMFAIIHOFPL_DNMCCKHNIBN_OFFSET))(this);
		}

		::System::Void LDDGJEPNPNP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMFAIIHOFPL_LDDGJEPNPNP_OFFSET))(this);
		}

		::System::Void IAMNJHPDONJ(::HIOEAKHGILF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + CMFAIIHOFPL_IAMNJHPDONJ_OFFSET))(this, a1);
		}

		::System::Void AAFMGMJGGHB(::HIOEAKHGILF* a1, ::JHHIMNANJHP a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::JHHIMNANJHP))((::PBYTE)hIl2Cpp + CMFAIIHOFPL_AAFMGMJGGHB_OFFSET))(this, a1, a2);
		}

		::System::Void EEKCGDFDCEE(::RPG::GameCore::FiveDimSplineMoveConfig* a1, ::IHAJEPBCCFP* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FiveDimSplineMoveConfig*, ::IHAJEPBCCFP*))((::PBYTE)hIl2Cpp + CMFAIIHOFPL_EEKCGDFDCEE_OFFSET))(this, a1, a2);
		}

		::System::Void MEPHODBNAKL(::HIOEAKHGILF* a1, ::IHAJEPBCCFP* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::IHAJEPBCCFP*))((::PBYTE)hIl2Cpp + CMFAIIHOFPL_MEPHODBNAKL_OFFSET))(this, a1, a2);
		}

		::System::Void AAJNAFJEDHB(::Entitas::IContext* a1, ::Entitas::IEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IContext*, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + CMFAIIHOFPL_AAJNAFJEDHB_OFFSET))(this, a1, a2);
		}

		::System::Void NNPEIBBGEFI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMFAIIHOFPL_NNPEIBBGEFI_OFFSET))(this);
		}

		::System::Void NNPEIBBGEFI_1(::HIOEAKHGILF* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::System::Single))((::PBYTE)hIl2Cpp + CMFAIIHOFPL_NNPEIBBGEFI_1_OFFSET))(this, a1, a2);
		}

		::System::Void DPFOPANAOGK(::HIOEAKHGILF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + CMFAIIHOFPL_DPFOPANAOGK_OFFSET))(this, a1);
		}

		::System::Void LIGIEPAAPFD(::HIOEAKHGILF* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::System::Single))((::PBYTE)hIl2Cpp + CMFAIIHOFPL_LIGIEPAAPFD_OFFSET))(this, a1, a2);
		}

		::System::Void DEFHOKLPIAH(::HIOEAKHGILF* a1, ::IHAJEPBCCFP* a2, ::NJBLCLGHIOE a3, ::System::Single a4, ::System::Single a5)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::IHAJEPBCCFP*, ::NJBLCLGHIOE, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CMFAIIHOFPL_DEFHOKLPIAH_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void DEFHOKLPIAH_1(::HIOEAKHGILF* a1, ::IHAJEPBCCFP* a2, ::NJBLCLGHIOE a3)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::IHAJEPBCCFP*, ::NJBLCLGHIOE))((::PBYTE)hIl2Cpp + CMFAIIHOFPL_DEFHOKLPIAH_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void DEFHOKLPIAH_2(::HIOEAKHGILF* a1, ::KEHLFNHAMLA a2, ::KEHLFNHAMLA a3)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::KEHLFNHAMLA, ::KEHLFNHAMLA))((::PBYTE)hIl2Cpp + CMFAIIHOFPL_DEFHOKLPIAH_2_OFFSET))(this, a1, a2, a3);
		}

		::System::Void GGKIBHAPKLJ(::HIOEAKHGILF* a1, ::IHAJEPBCCFP* a2, ::RPG::GameCore::FiveDimSplineMoveConfig* a3)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::IHAJEPBCCFP*, ::RPG::GameCore::FiveDimSplineMoveConfig*))((::PBYTE)hIl2Cpp + CMFAIIHOFPL_GGKIBHAPKLJ_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean OHOOABANHNF(::IHAJEPBCCFP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IHAJEPBCCFP*))((::PBYTE)hIl2Cpp + CMFAIIHOFPL_OHOOABANHNF_OFFSET))(this, a1);
		}

		::System::Void EAPLKBMLFHL(::HIOEAKHGILF* a1, ::IHAJEPBCCFP* a2, ::RPG::GameCore::FiveDimSplineMoveConfig* a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::IHAJEPBCCFP*, ::RPG::GameCore::FiveDimSplineMoveConfig*, ::System::Boolean))((::PBYTE)hIl2Cpp + CMFAIIHOFPL_EAPLKBMLFHL_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean GJPFFNOFAIB(::HIOEAKHGILF* a1, ::IHAJEPBCCFP* a2, ::System::Single a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::HIOEAKHGILF*, ::IHAJEPBCCFP*, ::System::Single))((::PBYTE)hIl2Cpp + CMFAIIHOFPL_GJPFFNOFAIB_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean FOOGPALMCOG(::IHAJEPBCCFP* a1, ::System::Single a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::IHAJEPBCCFP*, ::System::Single))((::PBYTE)hIl2Cpp + CMFAIIHOFPL_FOOGPALMCOG_OFFSET))(this, a1, a2);
		}

		::System::Void NHCNNIOHJDI(::HIOEAKHGILF* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::System::Single))((::PBYTE)hIl2Cpp + CMFAIIHOFPL_NHCNNIOHJDI_OFFSET))(this, a1, a2);
		}

		::System::Void IGCCDPEHMBL(::HIOEAKHGILF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + CMFAIIHOFPL_IGCCDPEHMBL_OFFSET))(this, a1);
		}

		::System::Void PJIGFGDAALO(::HIOEAKHGILF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + CMFAIIHOFPL_PJIGFGDAALO_OFFSET))(this, a1);
		}

		::System::Void OHHCPBOJKKG(::HIOEAKHGILF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + CMFAIIHOFPL_OHHCPBOJKKG_OFFSET))(this, a1);
		}

		::KJFIKOKBCCA NIHJDCKNOMB(::HIOEAKHGILF* a1)
		{
			return ((::KJFIKOKBCCA(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + CMFAIIHOFPL_NIHJDCKNOMB_OFFSET))(this, a1);
		}

	};
