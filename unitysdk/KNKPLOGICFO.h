#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KNKPLOGICFO_TimingMode.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define KNKPLOGICFO_BCKKLJNILIB_OFFSET UNITYSDK_OFFSET(0x1CB10F00)
#define KNKPLOGICFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1CB108A0)
#define KNKPLOGICFO_DGFPGHDBHEO_OFFSET UNITYSDK_OFFSET(0x1CB10AF0)
#define KNKPLOGICFO_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0x1CB10D40)
#define KNKPLOGICFO_HFKFNFKIEON_OFFSET UNITYSDK_OFFSET(0x1CB10A50)
#define KNKPLOGICFO_IIADCPNFCGP_OFFSET UNITYSDK_OFFSET(0x1CB10DD0)
#define KNKPLOGICFO_IMDMIPDAPHH_OFFSET UNITYSDK_OFFSET(0x1CB10900)
#define KNKPLOGICFO_JJBLMDLEOLM_OFFSET UNITYSDK_OFFSET(0x1CB10DC0)
#define KNKPLOGICFO_JLANKNHFKCN_1_OFFSET UNITYSDK_OFFSET(0x1CB10C60)
#define KNKPLOGICFO_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x1CB10A90)
#define KNKPLOGICFO_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x1CB108B0)
#define KNKPLOGICFO_LBNCGEDIKEA_OFFSET UNITYSDK_OFFSET(0x1CB10F20)
#define KNKPLOGICFO_LNENKMEHNFI_OFFSET UNITYSDK_OFFSET(0x1CB10EF0)
#define KNKPLOGICFO_LPDOKPMILBA_OFFSET UNITYSDK_OFFSET(0x1CB10EE0)
#define KNKPLOGICFO_OCNMIGCDPLN_OFFSET UNITYSDK_OFFSET(0x1CB10E60)
#define KNKPLOGICFO_OHGHKKHLCPD_OFFSET UNITYSDK_OFFSET(0x1CB10E50)
#define KNKPLOGICFO_OIGLFKLNHDJ_OFFSET UNITYSDK_OFFSET(0x1CB10F10)

inline static constexpr unsigned int KNKPLOGICFO_TypeDefinitionIndex = 36253;

	class KNKPLOGICFO : public ::System::Object
	{
	public:
		::System::Action_1<::System::Single>* GHFNNDPKDMK; // 0x10
		::System::Action* CLCPFHNMMKC; // 0x18
		::System::Single OLEIDKBKEOE; // 0x20
		::KNKPLOGICFO_TimingMode CIDDDEAMGMN; // 0x24
		::System::Double HGLNIHAKLOA; // 0x28
		::System::Single DLPEGGFADPG; // 0x30
		::System::Single HHINGCOFADB; // 0x34
		::System::Boolean GKOHAHKIMGN; // 0x38
		::System::Boolean CFPNPCHCHAI; // 0x39
		::System::Byte _padding0[0x2];
		::System::Single EEMMOONKNGN; // 0x3C
		::System::Void _ctor(::KNKPLOGICFO_TimingMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::KNKPLOGICFO_TimingMode))((::PBYTE)hIl2Cpp + KNKPLOGICFO_CTOR_OFFSET))(this, a1);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNKPLOGICFO_KHGIKBFDLFB_OFFSET))(this);
		}

		::System::Void HFKFNFKIEON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNKPLOGICFO_HFKFNFKIEON_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNKPLOGICFO_JLANKNHFKCN_OFFSET))(this);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNKPLOGICFO_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN_1(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KNKPLOGICFO_JLANKNHFKCN_1_OFFSET))(this, a1);
		}

		::System::Single DGFPGHDBHEO()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + KNKPLOGICFO_DGFPGHDBHEO_OFFSET))(this);
		}

		::System::Void IMDMIPDAPHH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNKPLOGICFO_IMDMIPDAPHH_OFFSET))(this);
		}

		::System::Single JJBLMDLEOLM()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + KNKPLOGICFO_JJBLMDLEOLM_OFFSET))(this);
		}

		::System::Void IIADCPNFCGP(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KNKPLOGICFO_IIADCPNFCGP_OFFSET))(this, a1);
		}

		::System::Single OHGHKKHLCPD()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + KNKPLOGICFO_OHGHKKHLCPD_OFFSET))(this);
		}

		::System::Void OCNMIGCDPLN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KNKPLOGICFO_OCNMIGCDPLN_OFFSET))(this, a1);
		}

		::System::Boolean LPDOKPMILBA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KNKPLOGICFO_LPDOKPMILBA_OFFSET))(this);
		}

		::System::Void LNENKMEHNFI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KNKPLOGICFO_LNENKMEHNFI_OFFSET))(this, a1);
		}

		::System::Boolean BCKKLJNILIB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KNKPLOGICFO_BCKKLJNILIB_OFFSET))(this);
		}

		::System::Void OIGLFKLNHDJ(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KNKPLOGICFO_OIGLFKLNHDJ_OFFSET))(this, a1);
		}

		::System::Single LBNCGEDIKEA()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + KNKPLOGICFO_LBNCGEDIKEA_OFFSET))(this);
		}

	};
