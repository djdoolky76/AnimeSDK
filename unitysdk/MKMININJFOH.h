#pragma once
#include "unitysdk/unitysdk.h"
class NJFHGODIBPN;
class NJFHGODIBPN_BNDKBMLLKBO;
namespace RPG::GameCore { class SO_PlayInteractOnPoint; }
namespace RPG::GameCore { class TaskContext; }

#define MKMININJFOH_AGKNJDPHJEG_OFFSET UNITYSDK_OFFSET(0x1B90CDA0)
#define MKMININJFOH_CTOR_OFFSET UNITYSDK_OFFSET(0x1B90C870)
#define MKMININJFOH_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B90C8F0)
#define MKMININJFOH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1B90C980)
#define MKMININJFOH_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1B90CD00)

inline static constexpr unsigned int MKMININJFOH_TypeDefinitionIndex = 53227;

	class MKMININJFOH
	{
	public:
		::NJFHGODIBPN* CPIIOIPAAKK; // 0x40
		::NJFHGODIBPN_BNDKBMLLKBO* IAHKANFGGDM; // 0x48
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
