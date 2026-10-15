#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ParkourGame/EParkourBuffFlag.h"
#include "unitysdk/System/Object.h"
class CFALFIPEHJH;
namespace RPG::Client::ParkourGame { class ParkourSkillConfig_SuperStar; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MEHEPKNJPOA_CMLIEFECNHM_OFFSET UNITYSDK_OFFSET(0xB8C8A20)
#define MEHEPKNJPOA_CTOR_OFFSET UNITYSDK_OFFSET(0xB8C7830)
#define MEHEPKNJPOA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB8C7890)
#define MEHEPKNJPOA_INDNLDHCJOM_OFFSET UNITYSDK_OFFSET(0xB8C8100)
#define MEHEPKNJPOA_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xB8C7A70)
#define MEHEPKNJPOA_JNLCHMMJPMD_OFFSET UNITYSDK_OFFSET(0xB8C7F70)
#define MEHEPKNJPOA_MKGGPLPGIAP_OFFSET UNITYSDK_OFFSET(0xB8C7ED0)
#define MEHEPKNJPOA_NCOJMACEAEJ_OFFSET UNITYSDK_OFFSET(0xB8C7F20)
#define MEHEPKNJPOA_OOILILCENMK_OFFSET UNITYSDK_OFFSET(0xB8C7D90)

inline static constexpr unsigned int MEHEPKNJPOA_TypeDefinitionIndex = 74173;

	class MEHEPKNJPOA : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* JMFEAGMLOEA; // 0x10
		::CFALFIPEHJH* CFKHNPGEAJA; // 0x18
		::RPG::Client::ParkourGame::EParkourBuffFlag LCCPMHGAIOD; // 0x20
		::System::Void _ctor(::CFALFIPEHJH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CFALFIPEHJH*))((::PBYTE)hIl2Cpp + MEHEPKNJPOA_CTOR_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEHEPKNJPOA_DISPOSE_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MEHEPKNJPOA_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Boolean MKGGPLPGIAP(::RPG::Client::ParkourGame::EParkourBuffFlag a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ParkourGame::EParkourBuffFlag))((::PBYTE)hIl2Cpp + MEHEPKNJPOA_MKGGPLPGIAP_OFFSET))(this, a1);
		}

		::System::Boolean NCOJMACEAEJ(::RPG::Client::ParkourGame::EParkourBuffFlag a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ParkourGame::EParkourBuffFlag))((::PBYTE)hIl2Cpp + MEHEPKNJPOA_NCOJMACEAEJ_OFFSET))(this, a1);
		}

		::System::Void JNLCHMMJPMD(::RPG::Client::ParkourGame::ParkourSkillConfig_SuperStar* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ParkourGame::ParkourSkillConfig_SuperStar*))((::PBYTE)hIl2Cpp + MEHEPKNJPOA_JNLCHMMJPMD_OFFSET))(this, a1);
		}

		::System::Void CMLIEFECNHM(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MEHEPKNJPOA_CMLIEFECNHM_OFFSET))(this, a1);
		}

		::System::Void INDNLDHCJOM(::RPG::Client::ParkourGame::EParkourBuffFlag a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ParkourGame::EParkourBuffFlag))((::PBYTE)hIl2Cpp + MEHEPKNJPOA_INDNLDHCJOM_OFFSET))(this, a1);
		}

		::System::Void OOILILCENMK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEHEPKNJPOA_OOILILCENMK_OFFSET))(this);
		}

	};
