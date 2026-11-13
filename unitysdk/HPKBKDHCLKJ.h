#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Expression/Precedence.h"
#include "unitysdk/RPG/Expression/TokenType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/JJAABNBJMEH.h"
class CIKDHKHDCHK;
class DEGPLAGNABP;
class HEFMJGIINFM;
class KFOKECGIAJA;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HPKBKDHCLKJ_ACPIKBFFAJK_OFFSET UNITYSDK_OFFSET(0x1E6A09F0)
#define HPKBKDHCLKJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6A2330)
#define HPKBKDHCLKJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1E69FD10)
#define HPKBKDHCLKJ_DLKPFMBLMHM_OFFSET UNITYSDK_OFFSET(0x1E6A0C80)
#define HPKBKDHCLKJ_DONJFCFEDKF_OFFSET UNITYSDK_OFFSET(0x1E6A1330)
#define HPKBKDHCLKJ_ECHCDHPHJNL_OFFSET UNITYSDK_OFFSET(0x1E6A0FF0)
#define HPKBKDHCLKJ_FDLDFJCPNAP_OFFSET UNITYSDK_OFFSET(0x1E6A1A70)
#define HPKBKDHCLKJ_GIKHLIIJOAD_OFFSET UNITYSDK_OFFSET(0x1E6A1000)
#define HPKBKDHCLKJ_HEPACNFLHEK_OFFSET UNITYSDK_OFFSET(0x1E6A1080)
#define HPKBKDHCLKJ_HKCBKOMKBKC_OFFSET UNITYSDK_OFFSET(0x1E6A1250)
#define HPKBKDHCLKJ_JCFNPJLAKIE_OFFSET UNITYSDK_OFFSET(0x1E6A1430)
#define HPKBKDHCLKJ_KFJDCCNFFLO_OFFSET UNITYSDK_OFFSET(0x1E6A1E30)
#define HPKBKDHCLKJ_KNJENGHDDGE_OFFSET UNITYSDK_OFFSET(0x1E6A0F90)
#define HPKBKDHCLKJ_KPNCCPJADME_OFFSET UNITYSDK_OFFSET(0x1E6A15F0)
#define HPKBKDHCLKJ_LLPEHAGJHMG_OFFSET UNITYSDK_OFFSET(0x1E6A21F0)
#define HPKBKDHCLKJ_MHDLLMPCIOB_OFFSET UNITYSDK_OFFSET(0x1E6A0D30)
#define HPKBKDHCLKJ_MNBFBOHJIDB_OFFSET UNITYSDK_OFFSET(0x1E6A10D0)
#define HPKBKDHCLKJ_OBLLLLDEJPC_OFFSET UNITYSDK_OFFSET(0x1E6A1020)
#define HPKBKDHCLKJ_OKOODADKCFK_OFFSET UNITYSDK_OFFSET(0x1E6A0CD0)
#define HPKBKDHCLKJ_OLCABJODKHN_OFFSET UNITYSDK_OFFSET(0x1E6A1090)
#define HPKBKDHCLKJ_ONIFHAIEGFK_OFFSET UNITYSDK_OFFSET(0x1E6A0CC0)
#define HPKBKDHCLKJ_PBJCEMDAEKA_OFFSET UNITYSDK_OFFSET(0x1E6A2080)
#define HPKBKDHCLKJ_PPDKMFJCCBC_OFFSET UNITYSDK_OFFSET(0x1E6A11D0)

inline static constexpr unsigned int HPKBKDHCLKJ_TypeDefinitionIndex = 10383;

	class HPKBKDHCLKJ : public ::System::Object
	{
	public:
		::CIKDHKHDCHK* CGAEAJJBFCB; // 0x10
		::HEFMJGIINFM* NAMNBALBJPK; // 0x18
		::HEFMJGIINFM* DIOFGJKGHNF; // 0x20
		::KFOKECGIAJA* OEKFPIDMCME; // 0x28
		::System::Boolean FKELNMFMFNG; // 0x30
		::System::Boolean DOCDOJJGFJE; // 0x31
		::System::Boolean GBOOLKAMLNJ; // 0x32
		static ::System::Collections::Generic::Dictionary_2<::RPG::Expression::TokenType, ::DEGPLAGNABP*>** StaticGet_KMJGIIAAALL()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::Expression::TokenType, ::DEGPLAGNABP*>**)UnitySDK::FromName("", "HPKBKDHCLKJ")->GetStaticField(0x1C4F0);
		}

		::System::Void _ctor(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HPKBKDHCLKJ_CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HPKBKDHCLKJ_CCTOR_OFFSET))();
		}

		::JJAABNBJMEH ACPIKBFFAJK(::System::String* a1)
		{
			return ((::JJAABNBJMEH(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HPKBKDHCLKJ_ACPIKBFFAJK_OFFSET))(this, a1);
		}

		::System::Void ONIFHAIEGFK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPKBKDHCLKJ_ONIFHAIEGFK_OFFSET))(this);
		}

		::System::Void MHDLLMPCIOB(::RPG::Expression::Precedence a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Expression::Precedence))((::PBYTE)hIl2Cpp + HPKBKDHCLKJ_MHDLLMPCIOB_OFFSET))(this, a1);
		}

		::DEGPLAGNABP* KNJENGHDDGE(::RPG::Expression::TokenType a1)
		{
			return ((::DEGPLAGNABP*(*)(::PVOID, ::RPG::Expression::TokenType))((::PBYTE)hIl2Cpp + HPKBKDHCLKJ_KNJENGHDDGE_OFFSET))(this, a1);
		}

		::System::Void DLKPFMBLMHM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPKBKDHCLKJ_DLKPFMBLMHM_OFFSET))(this);
		}

		::System::Boolean GIKHLIIJOAD(::RPG::Expression::TokenType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Expression::TokenType))((::PBYTE)hIl2Cpp + HPKBKDHCLKJ_GIKHLIIJOAD_OFFSET))(this, a1);
		}

		::System::Boolean OKOODADKCFK(::RPG::Expression::TokenType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Expression::TokenType))((::PBYTE)hIl2Cpp + HPKBKDHCLKJ_OKOODADKCFK_OFFSET))(this, a1);
		}

		::System::Void OBLLLLDEJPC(::RPG::Expression::TokenType a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Expression::TokenType, ::System::String*))((::PBYTE)hIl2Cpp + HPKBKDHCLKJ_OBLLLLDEJPC_OFFSET))(this, a1, a2);
		}

		::System::Void OLCABJODKHN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPKBKDHCLKJ_OLCABJODKHN_OFFSET))(this);
		}

		::System::Void MNBFBOHJIDB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPKBKDHCLKJ_MNBFBOHJIDB_OFFSET))(this);
		}

		::System::Void PPDKMFJCCBC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPKBKDHCLKJ_PPDKMFJCCBC_OFFSET))(this);
		}

		::System::Void HKCBKOMKBKC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPKBKDHCLKJ_HKCBKOMKBKC_OFFSET))(this);
		}

		::System::Void JCFNPJLAKIE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPKBKDHCLKJ_JCFNPJLAKIE_OFFSET))(this);
		}

		::System::Void KPNCCPJADME()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPKBKDHCLKJ_KPNCCPJADME_OFFSET))(this);
		}

		::System::Void FDLDFJCPNAP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPKBKDHCLKJ_FDLDFJCPNAP_OFFSET))(this);
		}

		::System::Void KFJDCCNFFLO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPKBKDHCLKJ_KFJDCCNFFLO_OFFSET))(this);
		}

		::System::Void PBJCEMDAEKA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPKBKDHCLKJ_PBJCEMDAEKA_OFFSET))(this);
		}

		::System::Byte DONJFCFEDKF()
		{
			return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + HPKBKDHCLKJ_DONJFCFEDKF_OFFSET))(this);
		}

		::System::Void ECHCDHPHJNL(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HPKBKDHCLKJ_ECHCDHPHJNL_OFFSET))(this, a1);
		}

		::System::Void HEPACNFLHEK(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HPKBKDHCLKJ_HEPACNFLHEK_OFFSET))(this, a1);
		}

		::System::Void LLPEHAGJHMG(::HEFMJGIINFM* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HEFMJGIINFM*, ::System::String*))((::PBYTE)hIl2Cpp + HPKBKDHCLKJ_LLPEHAGJHMG_OFFSET))(this, a1, a2);
		}

	};
