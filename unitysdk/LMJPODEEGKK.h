#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BFMHFBHIAAL;
namespace Entitas { class IContext; }

#define LMJPODEEGKK_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C8E5E00)
#define LMJPODEEGKK_CTOR_OFFSET UNITYSDK_OFFSET(0x1C8E5D30)
#define LMJPODEEGKK_GET_ALLCONTEXTS_OFFSET UNITYSDK_OFFSET(0x1C8E5E50)

inline static constexpr unsigned int LMJPODEEGKK_TypeDefinitionIndex = 41926;

	class LMJPODEEGKK : public ::System::Object
	{
	public:
		::BFMHFBHIAAL* MFAEJFFLEHM; // 0x10
		::Il2CppArray<::Entitas::IContext*>* _allContexts_k__BackingField; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMJPODEEGKK_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMJPODEEGKK_CLEAR_OFFSET))(this);
		}

		::Il2CppArray<::Entitas::IContext*>* get_allContexts()
		{
			return ((::Il2CppArray<::Entitas::IContext*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMJPODEEGKK_GET_ALLCONTEXTS_OFFSET))(this);
		}

	};
