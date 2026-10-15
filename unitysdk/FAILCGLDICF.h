#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PLHLAIJKMOD.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
class CHGHIALKMFM;
class FBKKFMONGAA;
namespace System { class Action; }
namespace System { class Nullable; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define FAILCGLDICF_ADD_ONBUFFEDCELLSMAYBECHANGED_OFFSET UNITYSDK_OFFSET(0x1567F120)
#define FAILCGLDICF_ADD_ONCHIPCHANGED_OFFSET UNITYSDK_OFFSET(0x1567EDB0)
#define FAILCGLDICF_ADD_ONTRANSFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x1567F060)
#define FAILCGLDICF_BLPLAFPIJPC_OFFSET UNITYSDK_OFFSET(0x1567EE70)
#define FAILCGLDICF_CMFIPKJCFAK_OFFSET UNITYSDK_OFFSET(0x1567E850)
#define FAILCGLDICF_CTOR_OFFSET UNITYSDK_OFFSET(0x1567F220)
#define FAILCGLDICF_DPNBIAAANAG_OFFSET UNITYSDK_OFFSET(0x1567E790)
#define FAILCGLDICF_EEIHKIJPCPN_OFFSET UNITYSDK_OFFSET(0x1567EED0)
#define FAILCGLDICF_HNGLBCMMFDF_OFFSET UNITYSDK_OFFSET(0x1567E7D0)
#define FAILCGLDICF_REMOVE_ONBUFFEDCELLSMAYBECHANGED_OFFSET UNITYSDK_OFFSET(0x1567F1A0)
#define FAILCGLDICF_REMOVE_ONCHIPCHANGED_OFFSET UNITYSDK_OFFSET(0x1567EE10)
#define FAILCGLDICF_REMOVE_ONTRANSFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x1567F0C0)
#define FAILCGLDICF___NOTIFYBUFFEDCELLSMAYBECHANGED_B__17_3_OFFSET UNITYSDK_OFFSET(0x1567F230)

inline static constexpr unsigned int FAILCGLDICF_TypeDefinitionIndex = 79499;

	class FAILCGLDICF : public ::System::Object
	{
	public:
		::CHGHIALKMFM* GIEPEGOALHN; // 0x10
		::System::Action* OnTransformChanged; // 0x18
		::System::Action* OnChipChanged; // 0x20
		::System::Action* OnBuffedCellsMaybeChanged; // 0x28
		::System::Nullable* PDJGEDNLBKJ; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAILCGLDICF_CTOR_OFFSET))(this);
		}

		::CHGHIALKMFM* DPNBIAAANAG()
		{
			return ((::CHGHIALKMFM*(*)(::PVOID))((::PBYTE)hIl2Cpp + FAILCGLDICF_DPNBIAAANAG_OFFSET))(this);
		}

		::System::Void HNGLBCMMFDF(::CHGHIALKMFM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CHGHIALKMFM*))((::PBYTE)hIl2Cpp + FAILCGLDICF_HNGLBCMMFDF_OFFSET))(this, a1);
		}

		::System::Void add_OnChipChanged(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + FAILCGLDICF_ADD_ONCHIPCHANGED_OFFSET))(this, a1);
		}

		::System::Void remove_OnChipChanged(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + FAILCGLDICF_REMOVE_ONCHIPCHANGED_OFFSET))(this, a1);
		}

		::System::Nullable* BLPLAFPIJPC()
		{
			return ((::System::Nullable*(*)(::PVOID))((::PBYTE)hIl2Cpp + FAILCGLDICF_BLPLAFPIJPC_OFFSET))(this);
		}

		::System::Void EEIHKIJPCPN(::System::Nullable* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable*))((::PBYTE)hIl2Cpp + FAILCGLDICF_EEIHKIJPCPN_OFFSET))(this, a1);
		}

		::System::Void add_OnTransformChanged(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + FAILCGLDICF_ADD_ONTRANSFORMCHANGED_OFFSET))(this, a1);
		}

		::System::Void remove_OnTransformChanged(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + FAILCGLDICF_REMOVE_ONTRANSFORMCHANGED_OFFSET))(this, a1);
		}

		::System::Void add_OnBuffedCellsMaybeChanged(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + FAILCGLDICF_ADD_ONBUFFEDCELLSMAYBECHANGED_OFFSET))(this, a1);
		}

		::System::Void remove_OnBuffedCellsMaybeChanged(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + FAILCGLDICF_REMOVE_ONBUFFEDCELLSMAYBECHANGED_OFFSET))(this, a1);
		}

		::System::Void CMFIPKJCFAK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAILCGLDICF_CMFIPKJCFAK_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2Int>* __NotifyBuffedCellsMaybeChanged_b__17_3(::FBKKFMONGAA* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2Int>*(*)(::PVOID, ::FBKKFMONGAA*))((::PBYTE)hIl2Cpp + FAILCGLDICF___NOTIFYBUFFEDCELLSMAYBECHANGED_B__17_3_OFFSET))(this, a1);
		}

	};
