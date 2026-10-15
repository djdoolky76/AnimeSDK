#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ANOBOGENEMP;
class IMFPIFAMEHE;
namespace RPG::Client::Pet { class IPet; }
namespace RPG::Client::Pet { class SimplePetAppearance; }
namespace RPG::GameCore { class ItemRow; }
namespace System { class Action; }

#define LPCLKDJLGKC_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xB818750)
#define LPCLKDJLGKC_LHLALAKKKKJ_OFFSET UNITYSDK_OFFSET(0xB818DC0)
#define LPCLKDJLGKC_MCMHMFOIJAB_1_OFFSET UNITYSDK_OFFSET(0xB819170)
#define LPCLKDJLGKC_MCMHMFOIJAB_OFFSET UNITYSDK_OFFSET(0xB819080)
#define LPCLKDJLGKC_NLPBKFAGFGA_OFFSET UNITYSDK_OFFSET(0xB818EA0)
#define LPCLKDJLGKC_NMJMPMGHLGH_OFFSET UNITYSDK_OFFSET(0xB818A50)
#define LPCLKDJLGKC_OPAJGIJMHPN_OFFSET UNITYSDK_OFFSET(0xB818CB0)
#define LPCLKDJLGKC_PGLJLODABLB_OFFSET UNITYSDK_OFFSET(0xB818B50)

inline static constexpr unsigned int LPCLKDJLGKC_TypeDefinitionIndex = 75669;

	class LPCLKDJLGKC : public ::System::Object
	{
	public:
		static ::RPG::Client::Pet::IPet* BPLPBPMEODA(::System::UInt32 a1)
		{
			return ((::RPG::Client::Pet::IPet*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + LPCLKDJLGKC_BPLPBPMEODA_OFFSET))(a1);
		}

		static ::System::Boolean LHLALAKKKKJ(::System::UInt32 a1, ::RPG::Client::Pet::IPet* a2)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::RPG::Client::Pet::IPet*))((::PBYTE)hIl2Cpp + LPCLKDJLGKC_LHLALAKKKKJ_OFFSET))(a1, a2);
		}

		static ::System::Void NLPBKFAGFGA(::System::Action* a1)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + LPCLKDJLGKC_NLPBKFAGFGA_OFFSET))(a1);
		}

		static ::System::Void MCMHMFOIJAB(::System::Action* a1)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + LPCLKDJLGKC_MCMHMFOIJAB_OFFSET))(a1);
		}

		static ::System::Void MCMHMFOIJAB_1(::ANOBOGENEMP* a1)
		{
			return ((::System::Void(*)(::ANOBOGENEMP*))((::PBYTE)hIl2Cpp + LPCLKDJLGKC_MCMHMFOIJAB_1_OFFSET))(a1);
		}

		static ::RPG::Client::Pet::SimplePetAppearance* OPAJGIJMHPN(::IMFPIFAMEHE* a1, ::RPG::GameCore::ItemRow* a2)
		{
			return ((::RPG::Client::Pet::SimplePetAppearance*(*)(::IMFPIFAMEHE*, ::RPG::GameCore::ItemRow*))((::PBYTE)hIl2Cpp + LPCLKDJLGKC_OPAJGIJMHPN_OFFSET))(a1, a2);
		}

		static ::IMFPIFAMEHE* NMJMPMGHLGH(::System::UInt32 a1)
		{
			return ((::IMFPIFAMEHE*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + LPCLKDJLGKC_NMJMPMGHLGH_OFFSET))(a1);
		}

		static ::RPG::GameCore::ItemRow* PGLJLODABLB(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::ItemRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + LPCLKDJLGKC_PGLJLODABLB_OFFSET))(a1, a2);
		}

	};
