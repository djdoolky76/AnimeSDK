#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JJDFGMMMCMI.h"
#include "unitysdk/RPG/Client/GridFightUpdateSummarizer.h"
class HONNGJEMGGH;
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define RPG_CLIENT_GRIDFIGHTROLESHOP_SHOPROLEREPLACESUMMARIZER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4ED290)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_SHOPROLEREPLACESUMMARIZER_ISCONCERNEDWITH_OFFSET UNITYSDK_OFFSET(0x1D4ECB10)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_SHOPROLEREPLACESUMMARIZER_UPDATESHOP_OFFSET UNITYSDK_OFFSET(0x1D4ECE00)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightRoleShop_ShopRoleReplaceSummarizer_TypeDefinitionIndex = 66934;

	class GridFightRoleShop_ShopRoleReplaceSummarizer : public ::RPG::Client::GridFightUpdateSummarizer
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_SHOPROLEREPLACESUMMARIZER_CTOR_OFFSET))(this);
		}

		::System::Boolean IsConcernedWith(::JJDFGMMMCMI a1, ::System::Collections::Generic::IList_1<::System::UInt32>* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::JJDFGMMMCMI, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_SHOPROLEREPLACESUMMARIZER_ISCONCERNEDWITH_OFFSET))(this, a1, a2);
		}

		::System::Void UpdateShop(::HONNGJEMGGH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HONNGJEMGGH*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_SHOPROLEREPLACESUMMARIZER_UPDATESHOP_OFFSET))(this, a1);
		}

	};
}
