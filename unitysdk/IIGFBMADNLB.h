#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ActionDelayChangeReason.h"
#include "unitysdk/RPG/GameCore/ActionDelayChangeReasonMask.h"
#include "unitysdk/RPG/GameCore/ActionDelayChangeTypeMask.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IIGFBMADNLB_AODGNFHAPBL_OFFSET UNITYSDK_OFFSET(0x1643B1D0)
#define IIGFBMADNLB_CLEKEFOPJEO_OFFSET UNITYSDK_OFFSET(0x1643B110)
#define IIGFBMADNLB_CTOR_OFFSET UNITYSDK_OFFSET(0x1643B610)
#define IIGFBMADNLB_GET_LOCKKEY_OFFSET UNITYSDK_OFFSET(0x1643B070)
#define IIGFBMADNLB_OGADKAPHHFD_OFFSET UNITYSDK_OFFSET(0x1643B090)
#define IIGFBMADNLB_SET_LOCKKEY_OFFSET UNITYSDK_OFFSET(0x1643B080)

inline static constexpr unsigned int IIGFBMADNLB_TypeDefinitionIndex = 55144;

	class IIGFBMADNLB : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* NBOHOMJKOJH; // 0x10
		::RPG::GameCore::TargetEvaluator* JGCIICKCGJA; // 0x18
		::System::String* _LockKey_k__BackingField; // 0x20
		::RPG::GameCore::TaskContext* BKIFMPHBIAK; // 0x28
		::System::Boolean JCBAHCGLNLP; // 0x30
		::System::Boolean LHECFFMIBNL; // 0x31
		::RPG::GameCore::ActionDelayChangeTypeMask AFAAIDLOEHE; // 0x32
		::RPG::GameCore::ActionDelayChangeReasonMask EHIGPNKFIGJ; // 0x34
		::RPG::GameCore::ActionDelayChangeTypeMask OLBPNAHNNKD; // 0x36
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIGFBMADNLB_CTOR_OFFSET))(this);
		}

		::System::String* get_LockKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IIGFBMADNLB_GET_LOCKKEY_OFFSET))(this);
		}

		::System::Void set_LockKey(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + IIGFBMADNLB_SET_LOCKKEY_OFFSET))(this, a1);
		}

		::System::Void OGADKAPHHFD(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + IIGFBMADNLB_OGADKAPHHFD_OFFSET))(this, a1);
		}

		::System::Boolean CLEKEFOPJEO(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + IIGFBMADNLB_CLEKEFOPJEO_OFFSET))(this, a1);
		}

		::System::Boolean AODGNFHAPBL(::RPG::GameCore::ActionDelayChangeReason a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::ActionDelayChangeTypeMask a3, ::System::Boolean a4, ::System::Boolean a5)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ActionDelayChangeReason, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::ActionDelayChangeTypeMask, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + IIGFBMADNLB_AODGNFHAPBL_OFFSET))(this, a1, a2, a3, a4, a5);
		}

	};
