#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::NavMap { class ICartographer; }
namespace RPG::Client::NavMap { class ICartography; }
namespace RPG::Client::NavMap { class ISubNavMap; }
namespace RPG::Client::NavMap { class MappingInfoNode; }
namespace RPG::Client::NavMap { class SubTabData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FGIKCNGNAMA_ADOFDLAMLCE_1_OFFSET UNITYSDK_OFFSET(0x15764B80)
#define FGIKCNGNAMA_ADOFDLAMLCE_2_OFFSET UNITYSDK_OFFSET(0x15765770)
#define FGIKCNGNAMA_ADOFDLAMLCE_OFFSET UNITYSDK_OFFSET(0x15765330)
#define FGIKCNGNAMA_HKPBEPJHNOE_OFFSET UNITYSDK_OFFSET(0x157649F0)
#define FGIKCNGNAMA_KAKCFLLEMBN_OFFSET UNITYSDK_OFFSET(0x15765810)

inline static constexpr unsigned int FGIKCNGNAMA_TypeDefinitionIndex = 74580;

	class FGIKCNGNAMA : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::RPG::Client::NavMap::MappingInfoNode*>* HKPBEPJHNOE(::RPG::Client::NavMap::ICartographer* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::NavMap::MappingInfoNode*>*(*)(::RPG::Client::NavMap::ICartographer*))((::PBYTE)hIl2Cpp + FGIKCNGNAMA_HKPBEPJHNOE_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::NavMap::MappingInfoNode*>* ADOFDLAMLCE(::RPG::Client::NavMap::ISubNavMap* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::NavMap::MappingInfoNode*>*(*)(::RPG::Client::NavMap::ISubNavMap*))((::PBYTE)hIl2Cpp + FGIKCNGNAMA_ADOFDLAMLCE_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::NavMap::MappingInfoNode*>* ADOFDLAMLCE_1(::RPG::Client::NavMap::SubTabData* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::NavMap::MappingInfoNode*>*(*)(::RPG::Client::NavMap::SubTabData*))((::PBYTE)hIl2Cpp + FGIKCNGNAMA_ADOFDLAMLCE_1_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::NavMap::MappingInfoNode*>* ADOFDLAMLCE_2(::RPG::Client::NavMap::ICartography* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::NavMap::MappingInfoNode*>*(*)(::RPG::Client::NavMap::ICartography*))((::PBYTE)hIl2Cpp + FGIKCNGNAMA_ADOFDLAMLCE_2_OFFSET))(a1);
		}

		static ::System::Void KAKCFLLEMBN(::System::Collections::Generic::List_1<::RPG::Client::NavMap::MappingInfoNode*>* a1, ::RPG::Client::NavMap::ICartography* a2)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::RPG::Client::NavMap::MappingInfoNode*>*, ::RPG::Client::NavMap::ICartography*))((::PBYTE)hIl2Cpp + FGIKCNGNAMA_KAKCFLLEMBN_OFFSET))(a1, a2);
		}

	};
