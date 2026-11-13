#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatStageFirstType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class JIHILNOBAPH;
class KDHICPODIMK;
namespace System { class String; }

#define JIHILNOBAPH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5ACEF0)
#define JIHILNOBAPH_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E5AC9E0)

inline static constexpr unsigned int JIHILNOBAPH_TypeDefinitionIndex = 11353;

	class JIHILNOBAPH : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* MBHMFMANFOJ; // 0x10
		::System::String* AJJDAJLFNBP; // 0x18
		::Il2CppArray<::System::UInt32>* JDMNNJLANMI; // 0x20
		::System::String* KKKDCNECFDG; // 0x28
		::Il2CppArray<::System::UInt32>* ENHDOJLCADJ; // 0x30
		::Il2CppArray<::KDHICPODIMK*>* LCNHHDJNHPF; // 0x38
		::Il2CppArray<::System::UInt32>* EKMLKINHNOJ; // 0x40
		::RPG::GameCore::DiceCombatStageFirstType MMNJJHDBJCI; // 0x48
		::System::UInt32 LIPCDDAPHNF; // 0x4C
		::System::UInt32 PHFMCACHFIJ; // 0x50
		::System::UInt32 BFJDEHGEDFB; // 0x54
		::System::UInt32 MPHLEBAPCOK; // 0x58
		::System::UInt32 HPIANKGODCK; // 0x5C
		::System::UInt32 DEAKHCBABDF; // 0x60
		::System::UInt32 OKDHOHKPEKK; // 0x64
		::System::UInt32 NCNDBAIHDMC; // 0x68
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIHILNOBAPH_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::JIHILNOBAPH* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::JIHILNOBAPH*))((::PBYTE)hIl2Cpp + JIHILNOBAPH_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
