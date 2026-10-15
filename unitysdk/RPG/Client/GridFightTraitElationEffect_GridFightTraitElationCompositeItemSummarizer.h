#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AMCOEFHHBPO.h"
class JLKCBOIFJKC;
namespace RPG::Client { class GridFightTraitElationEffect; }

#define RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_GRIDFIGHTTRAITELATIONCOMPOSITEITEMSUMMARIZER_CTOR_OFFSET UNITYSDK_OFFSET(0xD2B2A50)
#define RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_GRIDFIGHTTRAITELATIONCOMPOSITEITEMSUMMARIZER_UPDATETRAITEFFECT_OFFSET UNITYSDK_OFFSET(0xD2B3130)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTraitElationEffect_GridFightTraitElationCompositeItemSummarizer_TypeDefinitionIndex = 65386;

	class GridFightTraitElationEffect_GridFightTraitElationCompositeItemSummarizer : public ::AMCOEFHHBPO
	{
	public:
		::RPG::Client::GridFightTraitElationEffect* _TraitEffect; // 0x10
		::System::Void _ctor(::RPG::Client::GridFightTraitElationEffect* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightTraitElationEffect*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_GRIDFIGHTTRAITELATIONCOMPOSITEITEMSUMMARIZER_CTOR_OFFSET))(this, a1);
		}

		::System::Void UpdateTraitEffect(::JLKCBOIFJKC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JLKCBOIFJKC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_GRIDFIGHTTRAITELATIONCOMPOSITEITEMSUMMARIZER_UPDATETRAITEFFECT_OFFSET))(this, a1);
		}

	};
}
