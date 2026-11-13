#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BCILMJOBEAD.h"
#include "unitysdk/JJDFGMMMCMI.h"
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define RPG_CLIENT_GRIDFIGHTROLESHOP_BUYITEMSUMMARIZER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4EA280)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_BUYITEMSUMMARIZER_ISCONCERNEDWITH_OFFSET UNITYSDK_OFFSET(0x1D4E9ED0)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_BUYITEMSUMMARIZER_UPDATEAFTER_OFFSET UNITYSDK_OFFSET(0x1D4EA070)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_BUYITEMSUMMARIZER_UPDATEBEFORE_OFFSET UNITYSDK_OFFSET(0x1D4E9F20)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightRoleShop_BuyItemSummarizer_TypeDefinitionIndex = 66931;

	class GridFightRoleShop_BuyItemSummarizer : public ::BCILMJOBEAD
	{
	public:
		::System::UInt32 _BuyIndex; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_BUYITEMSUMMARIZER_CTOR_OFFSET))(this);
		}

		::System::Boolean IsConcernedWith(::JJDFGMMMCMI a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JJDFGMMMCMI))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_BUYITEMSUMMARIZER_ISCONCERNEDWITH_OFFSET))(this, a1);
		}

		::System::Void UpdateBefore(::JJDFGMMMCMI a1, ::System::Collections::Generic::IList_1<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::JJDFGMMMCMI, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_BUYITEMSUMMARIZER_UPDATEBEFORE_OFFSET))(this, a1, a2);
		}

		::System::Void UpdateAfter(::JJDFGMMMCMI a1)
		{
			return ((::System::Void(*)(::PVOID, ::JJDFGMMMCMI))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_BUYITEMSUMMARIZER_UPDATEAFTER_OFFSET))(this, a1);
		}

	};
}
