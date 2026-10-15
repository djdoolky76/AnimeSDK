#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AMCOEFHHBPO.h"
#include "unitysdk/JJDFGMMMCMI.h"
namespace RPG::Client { class GridFightBonusResultData; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define RPG_CLIENT_GRIDFIGHTBONUSSERVERDATA_OUTERBONUSSUMMERIZER_CTOR_OFFSET UNITYSDK_OFFSET(0xD0EE9A0)
#define RPG_CLIENT_GRIDFIGHTBONUSSERVERDATA_OUTERBONUSSUMMERIZER_ISCONCERNEDWITH_OFFSET UNITYSDK_OFFSET(0xD0EE600)
#define RPG_CLIENT_GRIDFIGHTBONUSSERVERDATA_OUTERBONUSSUMMERIZER_UPDATEAFTER_OFFSET UNITYSDK_OFFSET(0xD0EE760)
#define RPG_CLIENT_GRIDFIGHTBONUSSERVERDATA_OUTERBONUSSUMMERIZER_UPDATEBEFORE_OFFSET UNITYSDK_OFFSET(0xD0EE6D0)
#define RPG_CLIENT_GRIDFIGHTBONUSSERVERDATA_OUTERBONUSSUMMERIZER_UPDATECOIN_OFFSET UNITYSDK_OFFSET(0xD0EE940)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightBonusServerData_OuterBonusSummerizer_TypeDefinitionIndex = 64434;

	class GridFightBonusServerData_OuterBonusSummerizer : public ::AMCOEFHHBPO
	{
	public:
		::RPG::Client::GridFightBonusResultData* _ResultData; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSSERVERDATA_OUTERBONUSSUMMERIZER_CTOR_OFFSET))(this);
		}

		::System::Boolean IsConcernedWith(::JJDFGMMMCMI a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JJDFGMMMCMI))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSSERVERDATA_OUTERBONUSSUMMERIZER_ISCONCERNEDWITH_OFFSET))(this, a1);
		}

		::System::Void UpdateBefore(::JJDFGMMMCMI a1, ::System::Collections::Generic::IList_1<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::JJDFGMMMCMI, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSSERVERDATA_OUTERBONUSSUMMERIZER_UPDATEBEFORE_OFFSET))(this, a1, a2);
		}

		::System::Void UpdateAfter(::JJDFGMMMCMI a1)
		{
			return ((::System::Void(*)(::PVOID, ::JJDFGMMMCMI))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSSERVERDATA_OUTERBONUSSUMMERIZER_UPDATEAFTER_OFFSET))(this, a1);
		}

		::System::Void UpdateCoin(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSSERVERDATA_OUTERBONUSSUMMERIZER_UPDATECOIN_OFFSET))(this, a1);
		}

	};
}
