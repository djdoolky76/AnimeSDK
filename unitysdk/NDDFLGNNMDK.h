#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EFODGECFLLC;
namespace Entitas { class IContext; }

#define NDDFLGNNMDK_CBIBKBNLIHN_OFFSET UNITYSDK_OFFSET(0x1C27B720)
#define NDDFLGNNMDK_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C27B770)
#define NDDFLGNNMDK_CTOR_OFFSET UNITYSDK_OFFSET(0x1C27B640)
#define NDDFLGNNMDK_GET_ALLCONTEXTS_OFFSET UNITYSDK_OFFSET(0x1C27B840)
#define NDDFLGNNMDK_GET_FIVEDIMGAME_OFFSET UNITYSDK_OFFSET(0x1C27B830)

inline static constexpr unsigned int NDDFLGNNMDK_TypeDefinitionIndex = 43103;

	class NDDFLGNNMDK : public ::System::Object
	{
	public:
		::EFODGECFLLC* _fiveDimGame_k__BackingField; // 0x10
		::Il2CppArray<::Entitas::IContext*>* _allContexts_k__BackingField; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDDFLGNNMDK_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDDFLGNNMDK_CLEAR_OFFSET))(this);
		}

		::System::Void CBIBKBNLIHN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDDFLGNNMDK_CBIBKBNLIHN_OFFSET))(this);
		}

		::EFODGECFLLC* get_fiveDimGame()
		{
			return ((::EFODGECFLLC*(*)(::PVOID))((::PBYTE)hIl2Cpp + NDDFLGNNMDK_GET_FIVEDIMGAME_OFFSET))(this);
		}

		::Il2CppArray<::Entitas::IContext*>* get_allContexts()
		{
			return ((::Il2CppArray<::Entitas::IContext*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NDDFLGNNMDK_GET_ALLCONTEXTS_OFFSET))(this);
		}

	};
