#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EJCAFDPKILE.h"
#include "unitysdk/RPG/Client/LittleGame/ComicDessert/ComicDessertDeviceID.h"
#include "unitysdk/RPG/Client/LittleGame/ComicDessert/FeverOperationKind.h"
#include "unitysdk/RPG/GameCore/IngredientKind.h"
#include "unitysdk/System/Object.h"
class HLJNBBHKKMI;
class IFKJDMIGAMG;
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JHKLFDOEELE_AKBBKOJOAFF_OFFSET UNITYSDK_OFFSET(0x173E2D60)
#define JHKLFDOEELE_CTOR_OFFSET UNITYSDK_OFFSET(0x173E2390)
#define JHKLFDOEELE_DBCJCOGGODF_OFFSET UNITYSDK_OFFSET(0x173E2740)
#define JHKLFDOEELE_FKJNMEHANCJ_OFFSET UNITYSDK_OFFSET(0x173E2AC0)
#define JHKLFDOEELE_JDPHCBIGODO_OFFSET UNITYSDK_OFFSET(0x173E2830)
#define JHKLFDOEELE_PAKJHBKAKPB_OFFSET UNITYSDK_OFFSET(0x173E2430)

inline static constexpr unsigned int JHKLFDOEELE_TypeDefinitionIndex = 79895;

	class JHKLFDOEELE : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::EJCAFDPKILE>* KHBICBDBAPC; // 0x10
		::HLJNBBHKKMI* PDENFEFCAGN; // 0x18
		::System::Void _ctor(::HLJNBBHKKMI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HLJNBBHKKMI*))((::PBYTE)hIl2Cpp + JHKLFDOEELE_CTOR_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::EJCAFDPKILE>* PAKJHBKAKPB(::IFKJDMIGAMG* a1)
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::EJCAFDPKILE>*(*)(::PVOID, ::IFKJDMIGAMG*))((::PBYTE)hIl2Cpp + JHKLFDOEELE_PAKJHBKAKPB_OFFSET))(this, a1);
		}

		::System::Void JDPHCBIGODO(::RPG::GameCore::IngredientKind a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::IngredientKind))((::PBYTE)hIl2Cpp + JHKLFDOEELE_JDPHCBIGODO_OFFSET))(this, a1);
		}

		::System::Void FKJNMEHANCJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHKLFDOEELE_FKJNMEHANCJ_OFFSET))(this);
		}

		::System::Void AKBBKOJOAFF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHKLFDOEELE_AKBBKOJOAFF_OFFSET))(this);
		}

		::System::Void DBCJCOGGODF(::RPG::Client::LittleGame::ComicDessert::FeverOperationKind a1, ::RPG::Client::LittleGame::ComicDessert::ComicDessertDeviceID a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ComicDessert::FeverOperationKind, ::RPG::Client::LittleGame::ComicDessert::ComicDessertDeviceID))((::PBYTE)hIl2Cpp + JHKLFDOEELE_DBCJCOGGODF_OFFSET))(this, a1, a2);
		}

	};
