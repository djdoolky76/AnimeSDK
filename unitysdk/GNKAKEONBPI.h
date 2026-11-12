#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AKNLHDIFKPD.h"
#include "unitysdk/BPJOJLFMLED.h"
#include "unitysdk/NHFNHPGEPNB.h"
#include "unitysdk/RPG/Client/LittleGame/ComicDessert/RefreshState.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GNKAKEONBPI_ACGBIOICLEO_OFFSET UNITYSDK_OFFSET(0x16A9A5B0)
#define GNKAKEONBPI_BELPIEBHPIP_OFFSET UNITYSDK_OFFSET(0x16A98B80)
#define GNKAKEONBPI_CFGMEFOKIEM_OFFSET UNITYSDK_OFFSET(0x16A98C40)
#define GNKAKEONBPI_CTOR_OFFSET UNITYSDK_OFFSET(0x16A9A7E0)
#define GNKAKEONBPI_DLFNNCJLMBJ_OFFSET UNITYSDK_OFFSET(0x16A99ED0)
#define GNKAKEONBPI_DNAFJKMOEAF_OFFSET UNITYSDK_OFFSET(0x16A99DE0)
#define GNKAKEONBPI_EBMLOICOEOC_OFFSET UNITYSDK_OFFSET(0x16A99FB0)
#define GNKAKEONBPI_EFGOHPLDLAE_OFFSET UNITYSDK_OFFSET(0x16A9A760)
#define GNKAKEONBPI_EJACOFEBELP_OFFSET UNITYSDK_OFFSET(0x16A98B70)
#define GNKAKEONBPI_GET_SETPOOLSELECTED_OFFSET UNITYSDK_OFFSET(0x16A98BA0)
#define GNKAKEONBPI_GET__CURRENTSTATE_OFFSET UNITYSDK_OFFSET(0x16A98BE0)
#define GNKAKEONBPI_GET__ELAPSEDSINCELASTSPAWN_OFFSET UNITYSDK_OFFSET(0x16A98C20)
#define GNKAKEONBPI_GET__MINREFRESHINTERVAL_OFFSET UNITYSDK_OFFSET(0x16A98C00)
#define GNKAKEONBPI_HFKFNFKIEON_OFFSET UNITYSDK_OFFSET(0x16A9A560)
#define GNKAKEONBPI_MDFDNADFMBG_OFFSET UNITYSDK_OFFSET(0x16A9A700)
#define GNKAKEONBPI_NAJOPNMPHPF_OFFSET UNITYSDK_OFFSET(0x16A998B0)
#define GNKAKEONBPI_NAPABDDAFAA_OFFSET UNITYSDK_OFFSET(0x16A98BD0)
#define GNKAKEONBPI_NJDMJODMLFF_OFFSET UNITYSDK_OFFSET(0x16A98B90)
#define GNKAKEONBPI_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0x16A9A470)
#define GNKAKEONBPI_PFFBGMGAFPD_OFFSET UNITYSDK_OFFSET(0x16A98D50)
#define GNKAKEONBPI_PMBMIAIMFHK_OFFSET UNITYSDK_OFFSET(0x16A98BC0)
#define GNKAKEONBPI_SET_SETPOOLSELECTED_OFFSET UNITYSDK_OFFSET(0x16A98BB0)
#define GNKAKEONBPI_SET__CURRENTSTATE_OFFSET UNITYSDK_OFFSET(0x16A98BF0)
#define GNKAKEONBPI_SET__ELAPSEDSINCELASTSPAWN_OFFSET UNITYSDK_OFFSET(0x16A98C30)
#define GNKAKEONBPI_SET__MINREFRESHINTERVAL_OFFSET UNITYSDK_OFFSET(0x16A98C10)

inline static constexpr unsigned int GNKAKEONBPI_TypeDefinitionIndex = 79957;

	class GNKAKEONBPI : public ::System::Object
	{
	public:
		::System::Nullable_1<::NHFNHPGEPNB> NDDNHJDHJEM; // 0x10
		::System::Byte _padding0[0x20];
		::Il2CppArray<::BPJOJLFMLED>* MFGEADHPLHO; // 0x38
		::System::Collections::Generic::List_1<::AKNLHDIFKPD>* CGHJMFMFLMN; // 0x40
		::System::Nullable_1<::NHFNHPGEPNB> KFAHEBLNPHC; // 0x48
		::System::Byte _padding1[0x20];
		::System::Single __MinRefreshInterval_k__BackingField; // 0x70
		::RPG::Client::LittleGame::ComicDessert::RefreshState __CurrentState_k__BackingField; // 0x74
		::System::Single __ElapsedSinceLastSpawn_k__BackingField; // 0x78
		::System::UInt32 _SetPoolSelected_k__BackingField; // 0x7C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNKAKEONBPI_CTOR_OFFSET))(this);
		}

		::System::Boolean EJACOFEBELP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GNKAKEONBPI_EJACOFEBELP_OFFSET))(this);
		}

		::System::Boolean BELPIEBHPIP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GNKAKEONBPI_BELPIEBHPIP_OFFSET))(this);
		}

		::RPG::Client::LittleGame::ComicDessert::RefreshState NJDMJODMLFF()
		{
			return ((::RPG::Client::LittleGame::ComicDessert::RefreshState(*)(::PVOID))((::PBYTE)hIl2Cpp + GNKAKEONBPI_NJDMJODMLFF_OFFSET))(this);
		}

		::System::UInt32 get_SetPoolSelected()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GNKAKEONBPI_GET_SETPOOLSELECTED_OFFSET))(this);
		}

		::System::Void set_SetPoolSelected(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GNKAKEONBPI_SET_SETPOOLSELECTED_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::BPJOJLFMLED>* PMBMIAIMFHK()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::BPJOJLFMLED>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNKAKEONBPI_PMBMIAIMFHK_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::AKNLHDIFKPD>* NAPABDDAFAA()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::AKNLHDIFKPD>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNKAKEONBPI_NAPABDDAFAA_OFFSET))(this);
		}

		::RPG::Client::LittleGame::ComicDessert::RefreshState get__CurrentState()
		{
			return ((::RPG::Client::LittleGame::ComicDessert::RefreshState(*)(::PVOID))((::PBYTE)hIl2Cpp + GNKAKEONBPI_GET__CURRENTSTATE_OFFSET))(this);
		}

		::System::Void set__CurrentState(::RPG::Client::LittleGame::ComicDessert::RefreshState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ComicDessert::RefreshState))((::PBYTE)hIl2Cpp + GNKAKEONBPI_SET__CURRENTSTATE_OFFSET))(this, a1);
		}

		::System::Single get__MinRefreshInterval()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + GNKAKEONBPI_GET__MINREFRESHINTERVAL_OFFSET))(this);
		}

		::System::Void set__MinRefreshInterval(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GNKAKEONBPI_SET__MINREFRESHINTERVAL_OFFSET))(this, a1);
		}

		::System::Single get__ElapsedSinceLastSpawn()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + GNKAKEONBPI_GET__ELAPSEDSINCELASTSPAWN_OFFSET))(this);
		}

		::System::Void set__ElapsedSinceLastSpawn(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GNKAKEONBPI_SET__ELAPSEDSINCELASTSPAWN_OFFSET))(this, a1);
		}

		::System::Boolean CFGMEFOKIEM(::System::Collections::Generic::IReadOnlyList_1<::System::Single>* a1, ::System::UInt32 a2, ::System::Collections::Generic::IReadOnlyList_1<::AKNLHDIFKPD>* a3, ::System::Single a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::System::Single>*, ::System::UInt32, ::System::Collections::Generic::IReadOnlyList_1<::AKNLHDIFKPD>*, ::System::Single))((::PBYTE)hIl2Cpp + GNKAKEONBPI_CFGMEFOKIEM_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean DNAFJKMOEAF(::NHFNHPGEPNB a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NHFNHPGEPNB))((::PBYTE)hIl2Cpp + GNKAKEONBPI_DNAFJKMOEAF_OFFSET))(this, a1);
		}

		::System::Void DLFNNCJLMBJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNKAKEONBPI_DLFNNCJLMBJ_OFFSET))(this);
		}

		::System::Boolean PFFBGMGAFPD(::System::Collections::Generic::IReadOnlyList_1<::System::Single>* a1, ::System::UInt32 a2, ::System::Collections::Generic::IReadOnlyList_1<::AKNLHDIFKPD>* a3, ::System::Single a4, ::NHFNHPGEPNB a5)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::System::Single>*, ::System::UInt32, ::System::Collections::Generic::IReadOnlyList_1<::AKNLHDIFKPD>*, ::System::Single, ::NHFNHPGEPNB))((::PBYTE)hIl2Cpp + GNKAKEONBPI_PFFBGMGAFPD_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void NAJOPNMPHPF(::NHFNHPGEPNB a1)
		{
			return ((::System::Void(*)(::PVOID, ::NHFNHPGEPNB))((::PBYTE)hIl2Cpp + GNKAKEONBPI_NAJOPNMPHPF_OFFSET))(this, a1);
		}

		::System::Boolean EBMLOICOEOC(::System::Collections::Generic::IReadOnlyList_1<::System::Single>* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::System::Single>*))((::PBYTE)hIl2Cpp + GNKAKEONBPI_EBMLOICOEOC_OFFSET))(this, a1);
		}

		::System::Boolean NPAFMEBNFOB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GNKAKEONBPI_NPAFMEBNFOB_OFFSET))(this);
		}

		::System::Void HFKFNFKIEON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNKAKEONBPI_HFKFNFKIEON_OFFSET))(this);
		}

		::System::Void ACGBIOICLEO(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GNKAKEONBPI_ACGBIOICLEO_OFFSET))(this, a1);
		}

		::System::Boolean MDFDNADFMBG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GNKAKEONBPI_MDFDNADFMBG_OFFSET))(this);
		}

		::System::Void EFGOHPLDLAE(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GNKAKEONBPI_EFGOHPLDLAE_OFFSET))(this, a1);
		}

	};
