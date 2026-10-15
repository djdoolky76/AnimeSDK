#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class MapDistrictDef; }
namespace RPG::Client { class MapEntityDef; }
namespace RPG::Client { class MapNpcDef; }
namespace RPG::Client { class MapPropDef; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CPFGNNGMPDJ_CTOR_OFFSET UNITYSDK_OFFSET(0xDCD3150)
#define CPFGNNGMPDJ_ICADPILMFPK_OFFSET UNITYSDK_OFFSET(0xDCD2E30)
#define CPFGNNGMPDJ_MCCNMAAOPNG_OFFSET UNITYSDK_OFFSET(0xDCD2FD0)
#define CPFGNNGMPDJ_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0xDCD2ED0)

inline static constexpr unsigned int CPFGNNGMPDJ_TypeDefinitionIndex = 62107;

	class CPFGNNGMPDJ : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::MapPropDef*>* BPPKNKJBABP; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::MapNpcDef*>* GAPILEHAEGN; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::MapDistrictDef*>* ABMOPLPFDOM; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::MapNpcDef*>* EPCMNACKPLF; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPFGNNGMPDJ_CTOR_OFFSET))(this);
		}

		::System::Boolean ICADPILMFPK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CPFGNNGMPDJ_ICADPILMFPK_OFFSET))(this);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPFGNNGMPDJ_PJPFIHFAHGO_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MapEntityDef*>* MCCNMAAOPNG()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MapEntityDef*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPFGNNGMPDJ_MCCNMAAOPNG_OFFSET))(this);
		}

	};
