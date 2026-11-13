#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KDLFNBJAKLJ;
namespace Entitas { class IContext; }

#define LAECFLNNOFH_CLEAR_OFFSET UNITYSDK_OFFSET(0x1D6382F0)
#define LAECFLNNOFH_CTOR_OFFSET UNITYSDK_OFFSET(0x1D638220)
#define LAECFLNNOFH_GET_ALLCONTEXTS_OFFSET UNITYSDK_OFFSET(0x1D638340)

inline static constexpr unsigned int LAECFLNNOFH_TypeDefinitionIndex = 44679;

	class LAECFLNNOFH : public ::System::Object
	{
	public:
		::Il2CppArray<::Entitas::IContext*>* _allContexts_k__BackingField; // 0x10
		::KDLFNBJAKLJ* HAPBKJILCFA; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAECFLNNOFH_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAECFLNNOFH_CLEAR_OFFSET))(this);
		}

		::Il2CppArray<::Entitas::IContext*>* get_allContexts()
		{
			return ((::Il2CppArray<::Entitas::IContext*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LAECFLNNOFH_GET_ALLCONTEXTS_OFFSET))(this);
		}

	};
