#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
namespace RPG::GameCore { class RuntimeGroupInfo; }

#define DIBALNFGJEO_CTOR_OFFSET UNITYSDK_OFFSET(0xEBE97A0)
#define DIBALNFGJEO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xEBE94B0)
#define DIBALNFGJEO_GET_GROUPINFO_OFFSET UNITYSDK_OFFSET(0xEBE9730)
#define DIBALNFGJEO_LMCEDCHJKFF_OFFSET UNITYSDK_OFFSET(0xEBE9360)
#define DIBALNFGJEO_RESETTODEFAULT_OFFSET UNITYSDK_OFFSET(0xEBE9750)
#define DIBALNFGJEO_SET_GROUPINFO_OFFSET UNITYSDK_OFFSET(0xEBE9740)

inline static constexpr unsigned int DIBALNFGJEO_TypeDefinitionIndex = 57079;

	class DIBALNFGJEO : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::RPG::GameCore::RuntimeGroupInfo* _GroupInfo_k__BackingField; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIBALNFGJEO_CTOR_OFFSET))(this);
		}

		::System::Void LMCEDCHJKFF(::RPG::GameCore::RuntimeGroupInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RuntimeGroupInfo*))((::PBYTE)hIl2Cpp + DIBALNFGJEO_LMCEDCHJKFF_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIBALNFGJEO_DISPOSE_OFFSET))(this);
		}

		::RPG::GameCore::RuntimeGroupInfo* get_GroupInfo()
		{
			return ((::RPG::GameCore::RuntimeGroupInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIBALNFGJEO_GET_GROUPINFO_OFFSET))(this);
		}

		::System::Void set_GroupInfo(::RPG::GameCore::RuntimeGroupInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RuntimeGroupInfo*))((::PBYTE)hIl2Cpp + DIBALNFGJEO_SET_GROUPINFO_OFFSET))(this, a1);
		}

		::System::Void ResetToDefault()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIBALNFGJEO_RESETTODEFAULT_OFFSET))(this);
		}

	};
