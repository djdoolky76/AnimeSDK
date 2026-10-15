#pragma once
#include "unitysdk/unitysdk.h"
class NJFHGODIBPN;
class NJFHGODIBPN_BNDKBMLLKBO;
namespace RPG::GameCore { class SO_PlayInteractOnPoint; }
namespace RPG::GameCore { class TaskContext; }

#define MKMININJFOH_AGKNJDPHJEG_OFFSET UNITYSDK_OFFSET(0xB998100)
#define MKMININJFOH_CTOR_OFFSET UNITYSDK_OFFSET(0xB997BD0)
#define MKMININJFOH_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB997C50)
#define MKMININJFOH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB997CE0)
#define MKMININJFOH_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB998060)

inline static constexpr unsigned int MKMININJFOH_TypeDefinitionIndex = 52122;

	class MKMININJFOH
	{
	public:
		::NJFHGODIBPN_BNDKBMLLKBO* IAHKANFGGDM; // 0x40
		::NJFHGODIBPN* CPIIOIPAAKK; // 0x48
		::System::Boolean IDENJCNNPLA; // 0x50
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SO_PlayInteractOnPoint* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SO_PlayInteractOnPoint*))((::PBYTE)hIl2Cpp + MKMININJFOH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKMININJFOH_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKMININJFOH_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKMININJFOH_ONTASKRESET_OFFSET))(this);
		}

		::System::Void AGKNJDPHJEG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKMININJFOH_AGKNJDPHJEG_OFFSET))(this);
		}

	};
