#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector3.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetSortByDistance; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IHPFCKAEIEO_COMPARE_OFFSET UNITYSDK_OFFSET(0x1641FE70)
#define IHPFCKAEIEO_CTOR_OFFSET UNITYSDK_OFFSET(0x1641F9C0)
#define IHPFCKAEIEO_JIGJDOFEJMI_OFFSET UNITYSDK_OFFSET(0x1641F9E0)
#define IHPFCKAEIEO_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x1641FBB0)

inline static constexpr unsigned int IHPFCKAEIEO_TypeDefinitionIndex = 59176;

	class IHPFCKAEIEO
	{
	public:
		::RPG::MVector3 JGOMJNPEFCC; // 0x18
		::System::Void _ctor(::RPG::GameCore::TargetSortByDistance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetSortByDistance*))((::PBYTE)hIl2Cpp + IHPFCKAEIEO_CTOR_OFFSET))(this, a1);
		}

		::System::Void JIGJDOFEJMI(::RPG::GameCore::TaskContext* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + IHPFCKAEIEO_JIGJDOFEJMI_OFFSET))(this, a1);
		}

		::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + IHPFCKAEIEO_TRANSFORM_OFFSET))(this, a1, a2);
		}

		::System::Int32 Compare(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + IHPFCKAEIEO_COMPARE_OFFSET))(this, a1, a2);
		}

	};
