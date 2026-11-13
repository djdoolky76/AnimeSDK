#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JJDFGMMMCMI.h"
#include "unitysdk/RPG/Client/GridFightUpdateSummarizer.h"
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define RPG_CLIENT_GRIDFIGHTROLESHOP_CYRENESHOPSUMMARIZER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4EC670)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_CYRENESHOPSUMMARIZER_ISCONCERNEDWITH_OFFSET UNITYSDK_OFFSET(0x1D4EC220)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_CYRENESHOPSUMMARIZER_UPDATEAFTER_OFFSET UNITYSDK_OFFSET(0x1D4EC610)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_CYRENESHOPSUMMARIZER_UPDATEBEFORE_OFFSET UNITYSDK_OFFSET(0x1D4EC270)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightRoleShop_CyreneShopSUmmarizer_TypeDefinitionIndex = 66932;

	class GridFightRoleShop_CyreneShopSUmmarizer : public ::RPG::Client::GridFightUpdateSummarizer
	{
	public:
		::System::Boolean IsCyrene; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_CYRENESHOPSUMMARIZER_CTOR_OFFSET))(this);
		}

		::System::Boolean IsConcernedWith(::JJDFGMMMCMI a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JJDFGMMMCMI))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_CYRENESHOPSUMMARIZER_ISCONCERNEDWITH_OFFSET))(this, a1);
		}

		::System::Void UpdateBefore(::JJDFGMMMCMI a1, ::System::Collections::Generic::IList_1<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::JJDFGMMMCMI, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_CYRENESHOPSUMMARIZER_UPDATEBEFORE_OFFSET))(this, a1, a2);
		}

		::System::Void UpdateAfter(::JJDFGMMMCMI a1)
		{
			return ((::System::Void(*)(::PVOID, ::JJDFGMMMCMI))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_CYRENESHOPSUMMARIZER_UPDATEAFTER_OFFSET))(this, a1);
		}

	};
}
