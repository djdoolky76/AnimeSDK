#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EOCNNALBNJD.h"
#include "unitysdk/System/Object.h"
class JAENDDMAHNP;
class LCFOLANHJFI;
class LGJMFGGOEHD;
class ODGFPKFBGOJ;
class OGODLCGIBNC;
namespace RPG::Client::Pet::BlindBox { class BlindBoxPetAppearance; }
namespace RPG::Client::Pet::BlindBox { class IBlindBoxPet; }
namespace RPG::GameCore { class ItemRow; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }

#define OFFGIKEAIFM_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xBE3FD60)
#define OFFGIKEAIFM_EHAHLJAIPNN_OFFSET UNITYSDK_OFFSET(0xBE3FD10)
#define OFFGIKEAIFM_GPKNNLCMLPI_OFFSET UNITYSDK_OFFSET(0xBE40520)
#define OFFGIKEAIFM_IJICOPBHCCO_OFFSET UNITYSDK_OFFSET(0xBE40660)
#define OFFGIKEAIFM_LHLALAKKKKJ_OFFSET UNITYSDK_OFFSET(0xBE40A90)
#define OFFGIKEAIFM_MCMHMFOIJAB_1_OFFSET UNITYSDK_OFFSET(0xBE40E40)
#define OFFGIKEAIFM_MCMHMFOIJAB_OFFSET UNITYSDK_OFFSET(0xBE40D50)
#define OFFGIKEAIFM_MPNPBHFCIEE_1_OFFSET UNITYSDK_OFFSET(0xBE41110)
#define OFFGIKEAIFM_MPNPBHFCIEE_OFFSET UNITYSDK_OFFSET(0xBE41020)
#define OFFGIKEAIFM_NLPBKFAGFGA_OFFSET UNITYSDK_OFFSET(0xBE40B70)
#define OFFGIKEAIFM_NMJMPMGHLGH_OFFSET UNITYSDK_OFFSET(0xBE40400)
#define OFFGIKEAIFM_OPAJGIJMHPN_OFFSET UNITYSDK_OFFSET(0xBE40900)
#define OFFGIKEAIFM_PGLJLODABLB_OFFSET UNITYSDK_OFFSET(0xBE407A0)

inline static constexpr unsigned int OFFGIKEAIFM_TypeDefinitionIndex = 75725;

	class OFFGIKEAIFM : public ::System::Object
	{
	public:
		static ::RPG::Client::Pet::BlindBox::IBlindBoxPet* EHAHLJAIPNN(::System::UInt32 a1)
		{
			return ((::RPG::Client::Pet::BlindBox::IBlindBoxPet*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + OFFGIKEAIFM_EHAHLJAIPNN_OFFSET))(a1);
		}

		static ::RPG::Client::Pet::BlindBox::IBlindBoxPet* BPLPBPMEODA(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::Pet::BlindBox::IBlindBoxPet*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + OFFGIKEAIFM_BPLPBPMEODA_OFFSET))(a1, a2);
		}

		static ::System::Boolean LHLALAKKKKJ(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::Client::Pet::BlindBox::IBlindBoxPet* a3)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::System::UInt32, ::RPG::Client::Pet::BlindBox::IBlindBoxPet*))((::PBYTE)hIl2Cpp + OFFGIKEAIFM_LHLALAKKKKJ_OFFSET))(a1, a2, a3);
		}

		static ::System::Void NLPBKFAGFGA(::System::Action_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::System::Action_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + OFFGIKEAIFM_NLPBKFAGFGA_OFFSET))(a1);
		}

		static ::System::Void MCMHMFOIJAB(::System::Action_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::System::Action_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + OFFGIKEAIFM_MCMHMFOIJAB_OFFSET))(a1);
		}

		static ::System::Void MCMHMFOIJAB_1(::ODGFPKFBGOJ* a1)
		{
			return ((::System::Void(*)(::ODGFPKFBGOJ*))((::PBYTE)hIl2Cpp + OFFGIKEAIFM_MCMHMFOIJAB_1_OFFSET))(a1);
		}

		static ::System::Void MPNPBHFCIEE(::System::Action_2<::System::UInt32, ::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::System::Action_2<::System::UInt32, ::System::UInt32>*))((::PBYTE)hIl2Cpp + OFFGIKEAIFM_MPNPBHFCIEE_OFFSET))(a1);
		}

		static ::System::Void MPNPBHFCIEE_1(::LGJMFGGOEHD* a1)
		{
			return ((::System::Void(*)(::LGJMFGGOEHD*))((::PBYTE)hIl2Cpp + OFFGIKEAIFM_MPNPBHFCIEE_1_OFFSET))(a1);
		}

		static ::JAENDDMAHNP* NMJMPMGHLGH(::System::UInt32 a1)
		{
			return ((::JAENDDMAHNP*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + OFFGIKEAIFM_NMJMPMGHLGH_OFFSET))(a1);
		}

		static ::LCFOLANHJFI* GPKNNLCMLPI(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::LCFOLANHJFI*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + OFFGIKEAIFM_GPKNNLCMLPI_OFFSET))(a1, a2);
		}

		static ::OGODLCGIBNC* IJICOPBHCCO(::System::UInt32 a1, ::EOCNNALBNJD a2)
		{
			return ((::OGODLCGIBNC*(*)(::System::UInt32, ::EOCNNALBNJD))((::PBYTE)hIl2Cpp + OFFGIKEAIFM_IJICOPBHCCO_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::ItemRow* PGLJLODABLB(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::ItemRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + OFFGIKEAIFM_PGLJLODABLB_OFFSET))(a1, a2);
		}

		static ::RPG::Client::Pet::BlindBox::BlindBoxPetAppearance* OPAJGIJMHPN(::JAENDDMAHNP* a1, ::LCFOLANHJFI* a2, ::OGODLCGIBNC* a3, ::RPG::GameCore::ItemRow* a4)
		{
			return ((::RPG::Client::Pet::BlindBox::BlindBoxPetAppearance*(*)(::JAENDDMAHNP*, ::LCFOLANHJFI*, ::OGODLCGIBNC*, ::RPG::GameCore::ItemRow*))((::PBYTE)hIl2Cpp + OFFGIKEAIFM_OPAJGIJMHPN_OFFSET))(a1, a2, a3, a4);
		}

	};
