#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::RelicSmartSuit { class RelicSmartSuitResultRelicInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HFJEDABANAD_CTOR_OFFSET UNITYSDK_OFFSET(0x15C7CE30)

inline static constexpr unsigned int HFJEDABANAD_TypeDefinitionIndex = 74393;

	class HFJEDABANAD : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo*>* KEAGDADJMLP; // 0x10
		::System::UInt32 AIEPEMHAMJJ; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFJEDABANAD_CTOR_OFFSET))(this);
		}

	};
