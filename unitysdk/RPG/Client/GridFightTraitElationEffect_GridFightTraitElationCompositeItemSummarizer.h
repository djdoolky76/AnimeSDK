#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightUpdateSummarizer.h"
class JLKCBOIFJKC;
namespace RPG::Client { class GridFightTraitElationEffect; }

#define RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_GRIDFIGHTTRAITELATIONCOMPOSITEITEMSUMMARIZER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3FBA80)
#define RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_GRIDFIGHTTRAITELATIONCOMPOSITEITEMSUMMARIZER_UPDATETRAITEFFECT_OFFSET UNITYSDK_OFFSET(0x1D3FC2B0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTraitElationEffect_GridFightTraitElationCompositeItemSummarizer_TypeDefinitionIndex = 67179;

	class GridFightTraitElationEffect_GridFightTraitElationCompositeItemSummarizer : public ::RPG::Client::GridFightUpdateSummarizer
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
