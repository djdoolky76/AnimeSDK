#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EFODGECFLLC;
namespace Entitas { class IContext; }

#define NDDFLGNNMDK_CBIBKBNLIHN_OFFSET UNITYSDK_OFFSET(0x1C9160C0)
#define NDDFLGNNMDK_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C916110)
#define NDDFLGNNMDK_CTOR_OFFSET UNITYSDK_OFFSET(0x1C915FE0)
#define NDDFLGNNMDK_GET_ALLCONTEXTS_OFFSET UNITYSDK_OFFSET(0x1C9161E0)
#define NDDFLGNNMDK_GET_FIVEDIMGAME_OFFSET UNITYSDK_OFFSET(0x1C9161D0)

inline static constexpr unsigned int NDDFLGNNMDK_TypeDefinitionIndex = 42128;

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
