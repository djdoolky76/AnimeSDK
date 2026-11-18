#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DEAPCBLFFJI.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/GGOJIPIFDHO.h"
#include "unitysdk/JDBILLDPPGC.h"
#include "unitysdk/KFLFCOABGGJ.h"
#include "unitysdk/MGHNAPKHBOG.h"
#include "unitysdk/MJHDNMKGLBJ.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/OFJNCMHCPCO_HOLKKLALAJC.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class AGJFDPBLDDF;
namespace MoleMole::Cameras { class ScopedOverShoulderCamera; }
namespace MoleMole::Config { class CharacterAimModeConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Transform; }

#define MCGABACEIFE_DPOKLPCHMKC_OFFSET UNITYSDK_OFFSET(0x15923CE0)
#define MCGABACEIFE_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x159239A0)
#define MCGABACEIFE_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x15923B20)
#define MCGABACEIFE_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x15923C50)
#define MCGABACEIFE_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x15923520)
#define MCGABACEIFE__CCTOR_OFFSET UNITYSDK_OFFSET(0x159239F0)
#define MCGABACEIFE__CTOR_OFFSET UNITYSDK_OFFSET(0x15923A70)

inline static constexpr unsigned int MCGABACEIFE_TypeDefinitionIndex = 59095;

class MCGABACEIFE : public ::MJHDNMKGLBJ
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0xA8; // 0x0
	::System::Collections::Generic::Dictionary_2<::UnityEngine::Collider*, ::GGOJIPIFDHO>* EJPGHEIONGE; // 0x48
	::MGHNAPKHBOG EHIEILDEMJI; // 0x50
	::MoleMole::Cameras::ScopedOverShoulderCamera* HACLFOOFPAN; // 0x68
	::MGHNAPKHBOG LJCJENMFCPM; // 0x70
	::Foundation::AssetPath MENCOHLDMMI; // 0x88
	::MGHNAPKHBOG IJHNMHHGGIO; // 0x98
	::UnityEngine::Transform* MEOKAMMILHF; // 0xB0
	::System::String* JPGCBLMIKIN; // 0xB8
	::OFJNCMHCPCO_HOLKKLALAJC ELADDGNFPIL; // 0xC0
	::AGJFDPBLDDF* KEOCPJMICJO; // 0xD8
	::MoleMole::Config::CharacterAimModeConfig* DFMKILICPFB; // 0xE0
	::MoleMole::EntityHandle ENOHGHFAFPO; // 0xE8
	::UnityEngine::Vector3 MOIIPDCIINJ; // 0xF8
	::System::Boolean FIFCDIFBIGH; // 0x104
	::System::Boolean FPPPEAGPKMN; // 0x105
	::KFLFCOABGGJ CANOJMPPJMC; // 0x106
	::UnityEngine::Vector2 NNDNKNMJNCC; // 0x108
	::UnityEngine::Vector3 KCNNEGMGCAJ; // 0x110
	::System::Single LDOHMOCOGOG; // 0x11C
	::System::Single AHPILHEPFAO; // 0x120
	::System::Single LPIPGLKCLNI; // 0x124
	::System::Single MAEOEDFJKGJ; // 0x128
	::UnityEngine::Quaternion NCADIOKAIAB; // 0x12C
	::System::Single JKCLHLDNJGF; // 0x13C
	::System::Single GFKMBJAHABN; // 0x140
	::System::Single DKCDJNJJMBA; // 0x144
	::System::Single DNGMOECBFDO; // 0x148
	::DEAPCBLFFJI KNNEBJMAPMM; // 0x14C
	::System::Boolean CHDAEKEJPOG; // 0x14D
	::System::Boolean AOFLFBFOEBM; // 0x14E
	::System::Boolean GOHLMKACKHJ; // 0x14F
	::System::Single AAAKEBJLDAE; // 0x150
	::System::Single EEJBIGOMDEM; // 0x154
	::UnityEngine::Vector2 EBHCICENGNE; // 0x158
	::System::Single AKPGNCOLLPA; // 0x160
	::UnityEngine::Vector2 OAHGGBBBCBG; // 0x164
	::UnityEngine::Vector2 GHKIJJCHFCE; // 0x16C
	::JDBILLDPPGC HOMBOHCGNOJ; // 0x174
	::UnityEngine::Vector2 KINJGMCCBFF; // 0x178

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MCGABACEIFE__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCGABACEIFE__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCGABACEIFE_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MCGABACEIFE_GETCLASSID_OFFSET))(this);
	}

	static ::MCGABACEIFE* JFDOOELFAOA()
	{
		return ((::MCGABACEIFE*(*)())((::PBYTE)hIl2Cpp + MCGABACEIFE_JFDOOELFAOA_OFFSET))();
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MCGABACEIFE_MEFBHFEOKGH_OFFSET))(this);
	}

	::System::Boolean DPOKLPCHMKC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MCGABACEIFE_DPOKLPCHMKC_OFFSET))(this);
	}
};
