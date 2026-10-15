#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DAOENPMCFON.h"
#include "unitysdk/UnityEngine/Vector3.h"
class DAOENPMCFON;
namespace RPG::Client::ParkourGame { class ParkourSkillConfig; }
namespace RPG::Client::ParkourGame { class ParkourSkillConfig_Random; }
namespace System { class Nullable; }

#define JBGKFCDMBAJ_BEDJBAHNAEO_OFFSET UNITYSDK_OFFSET(0x1656EB30)
#define JBGKFCDMBAJ_CEDHDEKHHFD_OFFSET UNITYSDK_OFFSET(0x1656F140)
#define JBGKFCDMBAJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1656F500)
#define JBGKFCDMBAJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1656E990)
#define JBGKFCDMBAJ_FMHKLHAKMKO_OFFSET UNITYSDK_OFFSET(0x1656E910)
#define JBGKFCDMBAJ_IPAMHBBNLAF_OFFSET UNITYSDK_OFFSET(0x1656F280)
#define JBGKFCDMBAJ_JGBFDBBNLAF_OFFSET UNITYSDK_OFFSET(0x1656EAD0)
#define JBGKFCDMBAJ_KAJBAPMLIGF_OFFSET UNITYSDK_OFFSET(0x1656F430)
#define JBGKFCDMBAJ_LJGLBCHPGAD_OFFSET UNITYSDK_OFFSET(0x1656F210)
#define JBGKFCDMBAJ_LOOKHHBPEPA_OFFSET UNITYSDK_OFFSET(0x1656F360)
#define JBGKFCDMBAJ_MFFAANJABBI_OFFSET UNITYSDK_OFFSET(0x1656E650)

inline static constexpr unsigned int JBGKFCDMBAJ_TypeDefinitionIndex = 74184;

	class JBGKFCDMBAJ : public ::DAOENPMCFON
	{
	public:
		::DAOENPMCFON* CKMLCIAJNDG; // 0x70
		::System::Single GOJHDLCPGFC; // 0x78
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBGKFCDMBAJ_CTOR_OFFSET))(this);
		}

		::System::Void MFFAANJABBI(::RPG::Client::ParkourGame::ParkourSkillConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ParkourGame::ParkourSkillConfig*))((::PBYTE)hIl2Cpp + JBGKFCDMBAJ_MFFAANJABBI_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBGKFCDMBAJ_DISPOSE_OFFSET))(this);
		}

		::System::Void JGBFDBBNLAF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBGKFCDMBAJ_JGBFDBBNLAF_OFFSET))(this);
		}

		::System::Void BEDJBAHNAEO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBGKFCDMBAJ_BEDJBAHNAEO_OFFSET))(this);
		}

		::System::Void LJGLBCHPGAD(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + JBGKFCDMBAJ_LJGLBCHPGAD_OFFSET))(this, a1);
		}

		::System::UInt32 CEDHDEKHHFD()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JBGKFCDMBAJ_CEDHDEKHHFD_OFFSET))(this);
		}

		::RPG::Client::ParkourGame::ParkourSkillConfig_Random* FMHKLHAKMKO()
		{
			return ((::RPG::Client::ParkourGame::ParkourSkillConfig_Random*(*)(::PVOID))((::PBYTE)hIl2Cpp + JBGKFCDMBAJ_FMHKLHAKMKO_OFFSET))(this);
		}

		::System::Nullable* IPAMHBBNLAF()
		{
			return ((::System::Nullable*(*)(::PVOID))((::PBYTE)hIl2Cpp + JBGKFCDMBAJ_IPAMHBBNLAF_OFFSET))(this);
		}

		::System::Boolean LOOKHHBPEPA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JBGKFCDMBAJ_LOOKHHBPEPA_OFFSET))(this);
		}

		::System::Boolean KAJBAPMLIGF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JBGKFCDMBAJ_KAJBAPMLIGF_OFFSET))(this);
		}

	};
