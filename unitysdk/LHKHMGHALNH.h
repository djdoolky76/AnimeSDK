#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ADHODLINHMD.h"
#include "unitysdk/RPG/GameCore/FollowState.h"
class CMHBLDLFGNG;
class GNJMLIBEGHA;
class PDALKEOJELE;
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LHKHMGHALNH_AHEPDKNKLOD_OFFSET UNITYSDK_OFFSET(0xBF4EAE0)
#define LHKHMGHALNH_BMPFICDCGOK_OFFSET UNITYSDK_OFFSET(0xBF4F5C0)
#define LHKHMGHALNH_CTOR_OFFSET UNITYSDK_OFFSET(0xBF4E940)
#define LHKHMGHALNH_DCBCPHJDOCA_OFFSET UNITYSDK_OFFSET(0xBF4EA10)
#define LHKHMGHALNH_DNGIHLJEPBK_OFFSET UNITYSDK_OFFSET(0xBF4F6F0)
#define LHKHMGHALNH_HLIOLKPHHHF_OFFSET UNITYSDK_OFFSET(0xBF4F0A0)
#define LHKHMGHALNH_IFODHMECLHF_OFFSET UNITYSDK_OFFSET(0xBF50570)
#define LHKHMGHALNH_IIJKLMNIGPN_OFFSET UNITYSDK_OFFSET(0xBF4F130)
#define LHKHMGHALNH_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xBF4F2D0)
#define LHKHMGHALNH_MMMIDCJFFJD_OFFSET UNITYSDK_OFFSET(0xBF4FD30)
#define LHKHMGHALNH_MOAEAKEADNN_OFFSET UNITYSDK_OFFSET(0xBF4FA10)
#define LHKHMGHALNH_OHCAIODJNIK_OFFSET UNITYSDK_OFFSET(0xBF4F6E0)
#define LHKHMGHALNH_OHEANLIODBC_OFFSET UNITYSDK_OFFSET(0xBF4F230)
#define LHKHMGHALNH_PHBFDPONIIN_OFFSET UNITYSDK_OFFSET(0xBF4F520)
#define LHKHMGHALNH_PMPIIFKCAPF_OFFSET UNITYSDK_OFFSET(0xBF4FB80)

inline static constexpr unsigned int LHKHMGHALNH_TypeDefinitionIndex = 53525;

	class LHKHMGHALNH : public ::ADHODLINHMD
	{
	public:
		::CMHBLDLFGNG* AKBNDDBNBBL; // 0x108
		::GNJMLIBEGHA* NHMGDGEOKHN; // 0x110
		::System::Collections::Generic::List_1<::System::Int32>* BMPLADGNFPD; // 0x118
		::System::Single KLIPCDFOJLF; // 0x120
		::System::Boolean NOJJPEBLGEN; // 0x124
		::System::Boolean OHCAEFJCKJL; // 0x125
		::System::Boolean CMLNNJGENKB; // 0x126
		::System::Boolean DAHKOKCKDPB; // 0x127
		::RPG::GameCore::FollowState CJENLDOOBLL; // 0x128
		::System::Single OONODMMBGCP; // 0x12C
		::System::Int32 DLDEBFLABOK; // 0x130
		::System::Single OFEPHMCCHBM; // 0x134
		::System::Single HCEDAFFGBCK; // 0x138
		::System::Int32 DFJPHCOICOM; // 0x13C
		::System::Single MAJLAFCLNNK; // 0x140
		::System::Single AGIAFDAEKBA; // 0x144
		::System::Int32 HGCGFAKGGLH; // 0x148
		::System::Single JNLKHJFPHAA; // 0x14C
		::System::Single PEMJODMNPAM; // 0x150
		::System::Single CBDKIJBKBCO; // 0x154
		::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + LHKHMGHALNH_CTOR_OFFSET))(this, a1);
		}

		::System::Void DCBCPHJDOCA(::PDALKEOJELE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PDALKEOJELE*))((::PBYTE)hIl2Cpp + LHKHMGHALNH_DCBCPHJDOCA_OFFSET))(this, a1);
		}

		::System::Void HLIOLKPHHHF(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + LHKHMGHALNH_HLIOLKPHHHF_OFFSET))(this, a1, a2);
		}

		::System::Void IIJKLMNIGPN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHKHMGHALNH_IIJKLMNIGPN_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LHKHMGHALNH_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void BMPFICDCGOK(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LHKHMGHALNH_BMPFICDCGOK_OFFSET))(this, a1);
		}

		::System::Void AHEPDKNKLOD(::System::Collections::Generic::IReadOnlyList_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::System::String*>*))((::PBYTE)hIl2Cpp + LHKHMGHALNH_AHEPDKNKLOD_OFFSET))(this, a1);
		}

		::System::Void PHBFDPONIIN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LHKHMGHALNH_PHBFDPONIIN_OFFSET))(this, a1);
		}

		::System::Void DNGIHLJEPBK(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LHKHMGHALNH_DNGIHLJEPBK_OFFSET))(this, a1);
		}

		::System::Boolean MMMIDCJFFJD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LHKHMGHALNH_MMMIDCJFFJD_OFFSET))(this);
		}

		::System::Void MOAEAKEADNN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LHKHMGHALNH_MOAEAKEADNN_OFFSET))(this, a1);
		}

		::System::Boolean PMPIIFKCAPF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LHKHMGHALNH_PMPIIFKCAPF_OFFSET))(this);
		}

		::System::Void OHEANLIODBC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHKHMGHALNH_OHEANLIODBC_OFFSET))(this);
		}

		::System::Void IFODHMECLHF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHKHMGHALNH_IFODHMECLHF_OFFSET))(this);
		}

		::System::Boolean OHCAIODJNIK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LHKHMGHALNH_OHCAIODJNIK_OFFSET))(this);
		}

	};
