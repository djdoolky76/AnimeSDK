#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GMIFBFGDGJK;
namespace Entitas { class IContext; }

#define HKJBGGODPLG_CTOR_OFFSET UNITYSDK_OFFSET(0x1C6677B0)
#define HKJBGGODPLG_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C667880)
#define HKJBGGODPLG_GET_ALLCONTEXTS_OFFSET UNITYSDK_OFFSET(0x1C667970)
#define HKJBGGODPLG_GET_CAKERACECORE_OFFSET UNITYSDK_OFFSET(0x1C667960)

inline static constexpr unsigned int HKJBGGODPLG_TypeDefinitionIndex = 36828;

	class HKJBGGODPLG : public ::System::Object
	{
	public:
		::Il2CppArray<::Entitas::IContext*>* _allContexts_k__BackingField; // 0x10
		::GMIFBFGDGJK* _cakeRaceCore_k__BackingField; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKJBGGODPLG_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKJBGGODPLG_DISPOSE_OFFSET))(this);
		}

		::GMIFBFGDGJK* get_cakeRaceCore()
		{
			return ((::GMIFBFGDGJK*(*)(::PVOID))((::PBYTE)hIl2Cpp + HKJBGGODPLG_GET_CAKERACECORE_OFFSET))(this);
		}

		::Il2CppArray<::Entitas::IContext*>* get_allContexts()
		{
			return ((::Il2CppArray<::Entitas::IContext*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HKJBGGODPLG_GET_ALLCONTEXTS_OFFSET))(this);
		}

	};
