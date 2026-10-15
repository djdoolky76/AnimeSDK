#pragma once
#include "unitysdk/unitysdk.h"
class PHNLPEFECHE;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetSortSequence; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PPOBEDIHMJM_COMPARE_OFFSET UNITYSDK_OFFSET(0xC38F900)
#define PPOBEDIHMJM_CTOR_OFFSET UNITYSDK_OFFSET(0xC38F260)
#define PPOBEDIHMJM_JIGJDOFEJMI_OFFSET UNITYSDK_OFFSET(0xC38F400)
#define PPOBEDIHMJM_TRANSFORM_OFFSET UNITYSDK_OFFSET(0xC38F640)

inline static constexpr unsigned int PPOBEDIHMJM_TypeDefinitionIndex = 59162;

	class PPOBEDIHMJM
	{
	public:
		::System::Collections::Generic::List_1<::PHNLPEFECHE*>* OJMEPBLHJGP; // 0x18
		::System::Void _ctor(::RPG::GameCore::TargetSortSequence* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetSortSequence*))((::PBYTE)hIl2Cpp + PPOBEDIHMJM_CTOR_OFFSET))(this, a1);
		}

		::System::Void JIGJDOFEJMI(::RPG::GameCore::TaskContext* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + PPOBEDIHMJM_JIGJDOFEJMI_OFFSET))(this, a1);
		}

		::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + PPOBEDIHMJM_TRANSFORM_OFFSET))(this, a1, a2);
		}

		::System::Int32 Compare(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + PPOBEDIHMJM_COMPARE_OFFSET))(this, a1, a2);
		}

	};
