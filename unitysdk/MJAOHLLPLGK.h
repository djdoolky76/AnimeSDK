#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JMHHBMNIJJB;
namespace Entitas { class IContext; }

#define MJAOHLLPLGK_CLEAR_OFFSET UNITYSDK_OFFSET(0x1DAED1E0)
#define MJAOHLLPLGK_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAED110)
#define MJAOHLLPLGK_GET_ALLCONTEXTS_OFFSET UNITYSDK_OFFSET(0x1DAED230)

inline static constexpr unsigned int MJAOHLLPLGK_TypeDefinitionIndex = 44685;

	class MJAOHLLPLGK : public ::System::Object
	{
	public:
		::Il2CppArray<::Entitas::IContext*>* _allContexts_k__BackingField; // 0x10
		::JMHHBMNIJJB* KPCGACIKOOA; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJAOHLLPLGK_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJAOHLLPLGK_CLEAR_OFFSET))(this);
		}

		::Il2CppArray<::Entitas::IContext*>* get_allContexts()
		{
			return ((::Il2CppArray<::Entitas::IContext*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MJAOHLLPLGK_GET_ALLCONTEXTS_OFFSET))(this);
		}

	};
