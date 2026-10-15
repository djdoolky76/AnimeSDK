#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JGLPONENAKN.h"
#include "unitysdk/RPG/GameCore/ConstValueMapping/ConstValueSource.h"
class PEEAINPOGLK;
namespace System { class String; }

#define KOFBFLLGJPO_CTOR_OFFSET UNITYSDK_OFFSET(0x1CC932B0)
#define KOFBFLLGJPO_GET_SOURCE_OFFSET UNITYSDK_OFFSET(0x1CC93330)
#define KOFBFLLGJPO_LGMEJIBMFBJ_OFFSET UNITYSDK_OFFSET(0x1CC93340)

inline static constexpr unsigned int KOFBFLLGJPO_TypeDefinitionIndex = 43871;

	class KOFBFLLGJPO : public ::JGLPONENAKN
	{
	public:
		::RPG::GameCore::ConstValueMapping::ConstValueSource _Source_k__BackingField; // 0x18
		::System::Void _ctor(::System::String* a1, ::RPG::GameCore::ConstValueMapping::ConstValueSource a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::GameCore::ConstValueMapping::ConstValueSource))((::PBYTE)hIl2Cpp + KOFBFLLGJPO_CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::ConstValueMapping::ConstValueSource get_Source()
		{
			return ((::RPG::GameCore::ConstValueMapping::ConstValueSource(*)(::PVOID))((::PBYTE)hIl2Cpp + KOFBFLLGJPO_GET_SOURCE_OFFSET))(this);
		}

		::PEEAINPOGLK* LGMEJIBMFBJ()
		{
			return ((::PEEAINPOGLK*(*)(::PVOID))((::PBYTE)hIl2Cpp + KOFBFLLGJPO_LGMEJIBMFBJ_OFFSET))(this);
		}

	};
