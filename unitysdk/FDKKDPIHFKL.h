#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CPFGNNGMPDJ;
namespace RPG::Client { class MapDef; }
namespace RPG::GameCore { class RuntimeGroupInfo; }

#define FDKKDPIHFKL_CTOR_OFFSET UNITYSDK_OFFSET(0x1C038AC0)
#define FDKKDPIHFKL_GET_RUNTIMEGROUPINFO_OFFSET UNITYSDK_OFFSET(0x1C038B50)
#define FDKKDPIHFKL_HIEIGBIMEMN_OFFSET UNITYSDK_OFFSET(0x1C038B70)
#define FDKKDPIHFKL_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0x1C038B00)
#define FDKKDPIHFKL_SET_RUNTIMEGROUPINFO_OFFSET UNITYSDK_OFFSET(0x1C038B60)

inline static constexpr unsigned int FDKKDPIHFKL_TypeDefinitionIndex = 63542;

	class FDKKDPIHFKL : public ::System::Object
	{
	public:
		::CPFGNNGMPDJ* JCABNKODCOF; // 0x10
		::RPG::Client::MapDef* JMOAJFAHMPO; // 0x18
		::RPG::GameCore::RuntimeGroupInfo* _RuntimeGroupInfo_k__BackingField; // 0x20
		::System::Void _ctor(::RPG::Client::MapDef* a1, ::RPG::GameCore::RuntimeGroupInfo* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapDef*, ::RPG::GameCore::RuntimeGroupInfo*))((::PBYTE)hIl2Cpp + FDKKDPIHFKL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDKKDPIHFKL_PJPFIHFAHGO_OFFSET))(this);
		}

		::RPG::GameCore::RuntimeGroupInfo* get_RuntimeGroupInfo()
		{
			return ((::RPG::GameCore::RuntimeGroupInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + FDKKDPIHFKL_GET_RUNTIMEGROUPINFO_OFFSET))(this);
		}

		::System::Void set_RuntimeGroupInfo(::RPG::GameCore::RuntimeGroupInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RuntimeGroupInfo*))((::PBYTE)hIl2Cpp + FDKKDPIHFKL_SET_RUNTIMEGROUPINFO_OFFSET))(this, a1);
		}

		::System::UInt32 HIEIGBIMEMN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FDKKDPIHFKL_HIEIGBIMEMN_OFFSET))(this);
		}

	};
