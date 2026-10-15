#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class AvatarIntensityEffect; }
namespace RPG::GameCore { class TaskContext; }

#define NDDHCFFNJIH_CTOR_OFFSET UNITYSDK_OFFSET(0xBB20CF0)
#define NDDHCFFNJIH_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBB21660)
#define NDDHCFFNJIH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBB20D00)
#define NDDHCFFNJIH_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBB215B0)
#define NDDHCFFNJIH_TICK_OFFSET UNITYSDK_OFFSET(0xBB21600)

inline static constexpr unsigned int NDDHCFFNJIH_TypeDefinitionIndex = 56346;

	class NDDHCFFNJIH : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::AvatarIntensityEffect* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AvatarIntensityEffect* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AvatarIntensityEffect*))((::PBYTE)hIl2Cpp + NDDHCFFNJIH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDDHCFFNJIH_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDDHCFFNJIH_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NDDHCFFNJIH_TICK_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDDHCFFNJIH_DISPOSE_OFFSET))(this);
		}

	};
