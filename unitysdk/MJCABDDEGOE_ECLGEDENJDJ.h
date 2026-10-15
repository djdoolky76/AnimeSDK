#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MJCABDDEGOE_MeasureAction.h"
#include "unitysdk/OMEHCMEGIHO_FailureReason.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MJCABDDEGOE_ECLGEDENJDJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB962430)

inline static constexpr unsigned int MJCABDDEGOE_ECLGEDENJDJ_TypeDefinitionIndex = 62358;

	class MJCABDDEGOE_ECLGEDENJDJ : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>* PKIJJKHMPDO; // 0x10
		::OMEHCMEGIHO_FailureReason CIEDOFHGENC; // 0x18
		::MJCABDDEGOE_MeasureAction ENGGCENAFPM; // 0x1C
		::System::Single JBCFPAEELBL; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJCABDDEGOE_ECLGEDENJDJ_CTOR_OFFSET))(this);
		}

	};
