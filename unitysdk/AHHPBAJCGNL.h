#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ILBLENPMJED.h"
#include "unitysdk/RPG/GameCore/EntityRelationMemberType.h"
#include "unitysdk/RPG/GameCore/EntityRelationType.h"
#include "unitysdk/System/Object.h"
class AGFIJHNPHOJ;
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AHHPBAJCGNL_ACDGPABGIFE_OFFSET UNITYSDK_OFFSET(0xEB7D5A0)
#define AHHPBAJCGNL_AEFAFKBFGJI_OFFSET UNITYSDK_OFFSET(0xEB7DB00)
#define AHHPBAJCGNL_CGBIIJDILKC_OFFSET UNITYSDK_OFFSET(0xEB7DC90)
#define AHHPBAJCGNL_CLEAR_OFFSET UNITYSDK_OFFSET(0xEB7D3F0)
#define AHHPBAJCGNL_CTOR_OFFSET UNITYSDK_OFFSET(0xEB7DD50)
#define AHHPBAJCGNL_DGLGGFMADDD_OFFSET UNITYSDK_OFFSET(0xEB7DCE0)
#define AHHPBAJCGNL_GDGNJOOLBLI_OFFSET UNITYSDK_OFFSET(0xEB7D600)
#define AHHPBAJCGNL_GNNPFBBMFLA_OFFSET UNITYSDK_OFFSET(0xEB7DCF0)
#define AHHPBAJCGNL_ICJGMELMLGO_OFFSET UNITYSDK_OFFSET(0xEB7D470)
#define AHHPBAJCGNL_ILLNHBFACKF_OFFSET UNITYSDK_OFFSET(0xEB7D4E0)
#define AHHPBAJCGNL_KDGBMLINFLK_OFFSET UNITYSDK_OFFSET(0xEB7D540)
#define AHHPBAJCGNL_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xEB7D360)
#define AHHPBAJCGNL_ONLKDCCEONA_OFFSET UNITYSDK_OFFSET(0xEB7DBC0)

inline static constexpr unsigned int AHHPBAJCGNL_TypeDefinitionIndex = 55025;

	class AHHPBAJCGNL : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::ILBLENPMJED>* LFBKPAJPBPA; // 0x10
		::AGFIJHNPHOJ* IEGBIPMGBPA; // 0x18
		::RPG::GameCore::EntityRelationType HJEGLHKGFFG; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHHPBAJCGNL_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::AGFIJHNPHOJ* a1, ::RPG::GameCore::EntityRelationType a2)
		{
			return ((::System::Void(*)(::PVOID, ::AGFIJHNPHOJ*, ::RPG::GameCore::EntityRelationType))((::PBYTE)hIl2Cpp + AHHPBAJCGNL_KPJGDHLENIP_OFFSET))(this, a1, a2);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHHPBAJCGNL_CLEAR_OFFSET))(this);
		}

		::System::Void ICJGMELMLGO(::RPG::GameCore::EntityRelationMemberType a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EntityRelationMemberType, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + AHHPBAJCGNL_ICJGMELMLGO_OFFSET))(this, a1, a2);
		}

		::System::Void ILLNHBFACKF(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + AHHPBAJCGNL_ILLNHBFACKF_OFFSET))(this, a1);
		}

		::System::Void KDGBMLINFLK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHHPBAJCGNL_KDGBMLINFLK_OFFSET))(this);
		}

		::System::Void ACDGPABGIFE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHHPBAJCGNL_ACDGPABGIFE_OFFSET))(this);
		}

		::System::Void GDGNJOOLBLI(::RPG::GameCore::EntityRelationMemberType a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EntityRelationMemberType, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + AHHPBAJCGNL_GDGNJOOLBLI_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::EntityRelationMemberType AEFAFKBFGJI(::RPG::GameCore::GameEntity* a1)
		{
			return ((::RPG::GameCore::EntityRelationMemberType(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + AHHPBAJCGNL_AEFAFKBFGJI_OFFSET))(this, a1);
		}

		::System::Int32 ONLKDCCEONA(::RPG::GameCore::EntityRelationMemberType a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::EntityRelationMemberType))((::PBYTE)hIl2Cpp + AHHPBAJCGNL_ONLKDCCEONA_OFFSET))(this, a1);
		}

		::System::Void CGBIIJDILKC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHHPBAJCGNL_CGBIIJDILKC_OFFSET))(this);
		}

		::RPG::GameCore::EntityRelationType DGLGGFMADDD()
		{
			return ((::RPG::GameCore::EntityRelationType(*)(::PVOID))((::PBYTE)hIl2Cpp + AHHPBAJCGNL_DGLGGFMADDD_OFFSET))(this);
		}

		::System::Boolean GNNPFBBMFLA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AHHPBAJCGNL_GNNPFBBMFLA_OFFSET))(this);
		}

	};
