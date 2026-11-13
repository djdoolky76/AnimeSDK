#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EAKHEENLDKM;
namespace Entitas { class IContext; }

#define MFKLCJHKNBK_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C25C2E0)
#define MFKLCJHKNBK_CTOR_OFFSET UNITYSDK_OFFSET(0x1C25C210)
#define MFKLCJHKNBK_GET_ALLCONTEXTS_OFFSET UNITYSDK_OFFSET(0x1C25C330)

inline static constexpr unsigned int MFKLCJHKNBK_TypeDefinitionIndex = 42954;

	class MFKLCJHKNBK : public ::System::Object
	{
	public:
		::Il2CppArray<::Entitas::IContext*>* _allContexts_k__BackingField; // 0x10
		::EAKHEENLDKM* MFAEJFFLEHM; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFKLCJHKNBK_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFKLCJHKNBK_CLEAR_OFFSET))(this);
		}

		::Il2CppArray<::Entitas::IContext*>* get_allContexts()
		{
			return ((::Il2CppArray<::Entitas::IContext*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MFKLCJHKNBK_GET_ALLCONTEXTS_OFFSET))(this);
		}

	};
