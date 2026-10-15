#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DHCNDENHLGO.h"
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define ILGDHAOINBP_CTOR_OFFSET UNITYSDK_OFFSET(0x164B0E90)
#define ILGDHAOINBP_GET_BATTLETARGETIDS_OFFSET UNITYSDK_OFFSET(0x164B0E70)
#define ILGDHAOINBP_GET_CLEARSCORE_OFFSET UNITYSDK_OFFSET(0x164B0E30)
#define ILGDHAOINBP_GET_FEVERMAZEBUFFIDS_OFFSET UNITYSDK_OFFSET(0x164B0E50)
#define ILGDHAOINBP_SET_BATTLETARGETIDS_OFFSET UNITYSDK_OFFSET(0x164B0E80)
#define ILGDHAOINBP_SET_CLEARSCORE_OFFSET UNITYSDK_OFFSET(0x164B0E40)
#define ILGDHAOINBP_SET_FEVERMAZEBUFFIDS_OFFSET UNITYSDK_OFFSET(0x164B0E60)

	class ILGDHAOINBP : public ::DHCNDENHLGO
	{
	public:
		::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* _BattleTargetIDs_k__BackingField; // 0x18
		::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* _FeverMazeBuffIDs_k__BackingField; // 0x20
		::System::Int32 _ClearScore_k__BackingField; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILGDHAOINBP_CTOR_OFFSET))(this);
		}

		::System::Int32 get_ClearScore()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ILGDHAOINBP_GET_CLEARSCORE_OFFSET))(this);
		}

		::System::Void set_ClearScore(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ILGDHAOINBP_SET_CLEARSCORE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* get_FeverMazeBuffIDs()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILGDHAOINBP_GET_FEVERMAZEBUFFIDS_OFFSET))(this);
		}

		::System::Void set_FeverMazeBuffIDs(::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + ILGDHAOINBP_SET_FEVERMAZEBUFFIDS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* get_BattleTargetIDs()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILGDHAOINBP_GET_BATTLETARGETIDS_OFFSET))(this);
		}

		::System::Void set_BattleTargetIDs(::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + ILGDHAOINBP_SET_BATTLETARGETIDS_OFFSET))(this, a1);
		}

	};
