#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AMCOEFHHBPO.h"
#include "unitysdk/JJDFGMMMCMI.h"
class AOFOEOIJEHF;
class MMEDLCAENAL;
namespace RPG::Client { class GridFightTraitElationEffect; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_GRIDFIGHTTRAITELATIONADDITEMSUMMARIZER_CTOR_OFFSET UNITYSDK_OFFSET(0xD2B2A40)
#define RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_GRIDFIGHTTRAITELATIONADDITEMSUMMARIZER_ISCONCERNEDWITH_OFFSET UNITYSDK_OFFSET(0xD2B2D10)
#define RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_GRIDFIGHTTRAITELATIONADDITEMSUMMARIZER_UPDATEADDITEM_OFFSET UNITYSDK_OFFSET(0xD2B3000)
#define RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_GRIDFIGHTTRAITELATIONADDITEMSUMMARIZER_UPDATEORB_OFFSET UNITYSDK_OFFSET(0xD2B2E70)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTraitElationEffect_GridFightTraitElationAddItemSummarizer_TypeDefinitionIndex = 65384;

	class GridFightTraitElationEffect_GridFightTraitElationAddItemSummarizer : public ::AMCOEFHHBPO
	{
	public:
		::RPG::Client::GridFightTraitElationEffect* _TraitEffect; // 0x10
		::System::Void _ctor(::RPG::Client::GridFightTraitElationEffect* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightTraitElationEffect*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_GRIDFIGHTTRAITELATIONADDITEMSUMMARIZER_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean IsConcernedWith(::JJDFGMMMCMI a1, ::System::Collections::Generic::IList_1<::System::UInt32>* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::JJDFGMMMCMI, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_GRIDFIGHTTRAITELATIONADDITEMSUMMARIZER_ISCONCERNEDWITH_OFFSET))(this, a1, a2);
		}

		::System::Void UpdateOrb(::MMEDLCAENAL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MMEDLCAENAL*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_GRIDFIGHTTRAITELATIONADDITEMSUMMARIZER_UPDATEORB_OFFSET))(this, a1);
		}

		::System::Void UpdateAddItem(::AOFOEOIJEHF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AOFOEOIJEHF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_GRIDFIGHTTRAITELATIONADDITEMSUMMARIZER_UPDATEADDITEM_OFFSET))(this, a1);
		}

	};
}
