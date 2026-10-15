#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AMCOEFHHBPO.h"
#include "unitysdk/JJDFGMMMCMI.h"
class HONNGJEMGGH;
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define RPG_CLIENT_GRIDFIGHTROLESHOP_REFRESHSUMMARIZER_CTOR_OFFSET UNITYSDK_OFFSET(0xD266080)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_REFRESHSUMMARIZER_ISCONCERNEDWITH_OFFSET UNITYSDK_OFFSET(0xD265B10)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_REFRESHSUMMARIZER_UPDATEBEFORE_OFFSET UNITYSDK_OFFSET(0xD265E60)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_REFRESHSUMMARIZER_UPDATESHOP_OFFSET UNITYSDK_OFFSET(0xD265EC0)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_REFRESHSUMMARIZER__CHECKAUTOREFRESHMODIFIER_OFFSET UNITYSDK_OFFSET(0xD265B90)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightRoleShop_RefreshSummarizer_TypeDefinitionIndex = 65227;

	class GridFightRoleShop_RefreshSummarizer : public ::AMCOEFHHBPO
	{
	public:
		::System::Boolean _IsGemi; // 0x10
		::System::Byte _padding0[0x3];
		::JJDFGMMMCMI _SrcType; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_REFRESHSUMMARIZER_CTOR_OFFSET))(this);
		}

		::System::Boolean IsConcernedWith(::JJDFGMMMCMI a1, ::System::Collections::Generic::IList_1<::System::UInt32>* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::JJDFGMMMCMI, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_REFRESHSUMMARIZER_ISCONCERNEDWITH_OFFSET))(this, a1, a2);
		}

		::System::Void UpdateBefore(::JJDFGMMMCMI a1, ::System::Collections::Generic::IList_1<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::JJDFGMMMCMI, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_REFRESHSUMMARIZER_UPDATEBEFORE_OFFSET))(this, a1, a2);
		}

		::System::Void UpdateShop(::HONNGJEMGGH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HONNGJEMGGH*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_REFRESHSUMMARIZER_UPDATESHOP_OFFSET))(this, a1);
		}

		::System::Boolean _CheckAutoRefreshModifier(::System::Collections::Generic::IList_1<::System::UInt32>* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_REFRESHSUMMARIZER__CHECKAUTOREFRESHMODIFIER_OFFSET))(this, a1);
		}

	};
}
