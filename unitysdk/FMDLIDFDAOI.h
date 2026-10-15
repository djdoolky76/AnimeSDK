#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MLKDDLHNNHH.h"
#include "unitysdk/UnityEngine/Vector3.h"
class FFMDBJLLDGD;
class FMDLIDFDAOI;
namespace RPG::Client::FateRin::View::Card { class FateRinCardPosControlView; }

#define FMDLIDFDAOI_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x15843FF0)
#define FMDLIDFDAOI_CTOR_OFFSET UNITYSDK_OFFSET(0x158442C0)
#define FMDLIDFDAOI_EPJFIHHDMAK_OFFSET UNITYSDK_OFFSET(0x158441A0)
#define FMDLIDFDAOI_GKMCBGNAJFH_OFFSET UNITYSDK_OFFSET(0x15844260)
#define FMDLIDFDAOI_ONCLEAR_OFFSET UNITYSDK_OFFSET(0x15844200)
#define FMDLIDFDAOI_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x158440A0)

inline static constexpr unsigned int FMDLIDFDAOI_TypeDefinitionIndex = 80849;

	class FMDLIDFDAOI : public ::MLKDDLHNNHH
	{
	public:
		::RPG::Client::FateRin::View::Card::FateRinCardPosControlView* ADIGLGPDGGH; // 0x20
		::FFMDBJLLDGD* NBHJNGJIIEA; // 0x28
		::System::Boolean BEMMCKLJICI; // 0x30
		::System::Byte _padding0[0x3];
		::UnityEngine::Vector3 EIMIIPBMGKG; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMDLIDFDAOI_CTOR_OFFSET))(this);
		}

		static ::FMDLIDFDAOI* BPLPBPMEODA(::RPG::Client::FateRin::View::Card::FateRinCardPosControlView* a1, ::UnityEngine::Vector3 a2, ::FFMDBJLLDGD* a3)
		{
			return ((::FMDLIDFDAOI*(*)(::RPG::Client::FateRin::View::Card::FateRinCardPosControlView*, ::UnityEngine::Vector3, ::FFMDBJLLDGD*))((::PBYTE)hIl2Cpp + FMDLIDFDAOI_BPLPBPMEODA_OFFSET))(a1, a2, a3);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMDLIDFDAOI_ONEXECUTE_OFFSET))(this);
		}

		::System::Void EPJFIHHDMAK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMDLIDFDAOI_EPJFIHHDMAK_OFFSET))(this);
		}

		::System::Void OnClear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMDLIDFDAOI_ONCLEAR_OFFSET))(this);
		}

		::System::Void GKMCBGNAJFH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMDLIDFDAOI_GKMCBGNAJFH_OFFSET))(this);
		}

	};
