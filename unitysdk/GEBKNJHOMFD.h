#pragma once
#include "unitysdk/unitysdk.h"
class DCMCOOMJFNC;
namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }

#define GEBKNJHOMFD_AKEINJEDMBK_OFFSET UNITYSDK_OFFSET(0x159BC2A0)
#define GEBKNJHOMFD_CTOR_OFFSET UNITYSDK_OFFSET(0x159BBBF0)
#define GEBKNJHOMFD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x159BBC20)

inline static constexpr unsigned int GEBKNJHOMFD_TypeDefinitionIndex = 55224;

	class GEBKNJHOMFD
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::DCMCOOMJFNC* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::DCMCOOMJFNC*))((::PBYTE)hIl2Cpp + GEBKNJHOMFD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEBKNJHOMFD_ONTASKBEGIN_OFFSET))(this);
		}

		static ::RPG::PoolList_1<::RPG::GameCore::GameEntity*>* AKEINJEDMBK(::RPG::GameCore::GameEntity* a1)
		{
			return ((::RPG::PoolList_1<::RPG::GameCore::GameEntity*>*(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + GEBKNJHOMFD_AKEINJEDMBK_OFFSET))(a1);
		}

	};
