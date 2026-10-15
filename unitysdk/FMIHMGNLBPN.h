#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMIHMGNLBPN_State.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
namespace RPG::Client { class PlanetFesAssistantController; }
namespace RPG::GameCore { class PlanetFesAssistantMessageRow; }

#define FMIHMGNLBPN_CPNIHGIMJBG_OFFSET UNITYSDK_OFFSET(0x15850A40)
#define FMIHMGNLBPN_CTOR_OFFSET UNITYSDK_OFFSET(0x15850BA0)
#define FMIHMGNLBPN_FALAHNPFBMH_OFFSET UNITYSDK_OFFSET(0x15850AE0)
#define FMIHMGNLBPN_FGCMFDHNDBP_OFFSET UNITYSDK_OFFSET(0x15850B50)
#define FMIHMGNLBPN_HNPOGLCAHPK_OFFSET UNITYSDK_OFFSET(0x158504B0)
#define FMIHMGNLBPN_IIAPEDAHFNO_OFFSET UNITYSDK_OFFSET(0x15850610)
#define FMIHMGNLBPN_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x15850650)
#define FMIHMGNLBPN_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x158509F0)
#define FMIHMGNLBPN_KPIECNCBFKM_OFFSET UNITYSDK_OFFSET(0x15850A90)
#define FMIHMGNLBPN_LCKCABJFHEA_OFFSET UNITYSDK_OFFSET(0x15850400)
#define FMIHMGNLBPN_MNBBCAMDGDI_OFFSET UNITYSDK_OFFSET(0x15850500)
#define FMIHMGNLBPN_OACBGCFADMP_OFFSET UNITYSDK_OFFSET(0x15850440)
#define FMIHMGNLBPN_ODDMLJINFDE_OFFSET UNITYSDK_OFFSET(0x15850940)
#define FMIHMGNLBPN_PGNKECAMPOK_OFFSET UNITYSDK_OFFSET(0x15850380)

inline static constexpr unsigned int FMIHMGNLBPN_TypeDefinitionIndex = 66508;

	class FMIHMGNLBPN : public ::System::Object
	{
	public:
		::RPG::Client::PlanetFesAssistantController* CPIIOIPAAKK; // 0x10
		::RPG::GameCore::PlanetFesAssistantMessageRow* IBPBJBOKKMF; // 0x18
		::System::Single BPMNMDJIPLE; // 0x20
		::System::Single FMGFLCNOMNO; // 0x24
		::FMIHMGNLBPN_State DLNIGFGLPLJ; // 0x28
		::System::Single GNGJKHOHCOA; // 0x2C
		::System::Single PBLGHIGPEIP; // 0x30
		// static const ::System::Object GALNNFEMEEJ; // 0x0
		// static const ::System::Object AEIJHDLACDI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMIHMGNLBPN_CTOR_OFFSET))(this);
		}

		::System::Void PGNKECAMPOK(::RPG::GameCore::PlanetFesAssistantMessageRow* a1, ::RPG::Client::PlanetFesAssistantController* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PlanetFesAssistantMessageRow*, ::RPG::Client::PlanetFesAssistantController*))((::PBYTE)hIl2Cpp + FMIHMGNLBPN_PGNKECAMPOK_OFFSET))(this, a1, a2);
		}

		::FMIHMGNLBPN_State LCKCABJFHEA()
		{
			return ((::FMIHMGNLBPN_State(*)(::PVOID))((::PBYTE)hIl2Cpp + FMIHMGNLBPN_LCKCABJFHEA_OFFSET))(this);
		}

		::RPG::Client::TextID OACBGCFADMP()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + FMIHMGNLBPN_OACBGCFADMP_OFFSET))(this);
		}

		::System::Int32 HNPOGLCAHPK()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FMIHMGNLBPN_HNPOGLCAHPK_OFFSET))(this);
		}

		::System::Boolean MNBBCAMDGDI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FMIHMGNLBPN_MNBBCAMDGDI_OFFSET))(this);
		}

		::System::Boolean IIAPEDAHFNO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FMIHMGNLBPN_IIAPEDAHFNO_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FMIHMGNLBPN_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Boolean CPNIHGIMJBG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FMIHMGNLBPN_CPNIHGIMJBG_OFFSET))(this);
		}

		::System::Void KPIECNCBFKM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMIHMGNLBPN_KPIECNCBFKM_OFFSET))(this);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMIHMGNLBPN_KHGIKBFDLFB_OFFSET))(this);
		}

		::System::Single FALAHNPFBMH()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FMIHMGNLBPN_FALAHNPFBMH_OFFSET))(this);
		}

		::System::Boolean ODDMLJINFDE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FMIHMGNLBPN_ODDMLJINFDE_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* FGCMFDHNDBP()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FMIHMGNLBPN_FGCMFDHNDBP_OFFSET))(this);
		}

	};
