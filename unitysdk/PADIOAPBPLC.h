#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class ChimeraDuelComparerBase; }

#define PADIOAPBPLC_CTOR_OFFSET UNITYSDK_OFFSET(0xBFC6330)
#define PADIOAPBPLC_GET__ISASCEND_OFFSET UNITYSDK_OFFSET(0xBFC6310)
#define PADIOAPBPLC_SET__ISASCEND_OFFSET UNITYSDK_OFFSET(0xBFC6320)

inline static constexpr unsigned int PADIOAPBPLC_TypeDefinitionIndex = 77440;

	class PADIOAPBPLC : public ::System::Object
	{
	public:
		::System::Boolean __IsAscend_k__BackingField; // 0x10
		::System::Void _ctor(::RPG::GameCore::ChimeraDuelComparerBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChimeraDuelComparerBase*))((::PBYTE)hIl2Cpp + PADIOAPBPLC_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean get__IsAscend()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PADIOAPBPLC_GET__ISASCEND_OFFSET))(this);
		}

		::System::Void set__IsAscend(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PADIOAPBPLC_SET__ISASCEND_OFFSET))(this, a1);
		}

	};
