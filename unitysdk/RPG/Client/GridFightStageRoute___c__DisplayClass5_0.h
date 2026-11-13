#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
class BCCIJHPLJOJ;
namespace RPG::Client { class GridFightStageNode; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Linq { template <typename T1, typename T2> class IGrouping_2; }

#define RPG_CLIENT_GRIDFIGHTSTAGEROUTE___C__DISPLAYCLASS5_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1E175B70)
#define RPG_CLIENT_GRIDFIGHTSTAGEROUTE___C__DISPLAYCLASS5_0__SYNCALLROUTENODES_B__4_OFFSET UNITYSDK_OFFSET(0x1E176700)
#define RPG_CLIENT_GRIDFIGHTSTAGEROUTE___C__DISPLAYCLASS5_0__SYNCALLROUTENODES_B__5_OFFSET UNITYSDK_OFFSET(0x1E1767A0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightStageRoute___c__DisplayClass5_0_TypeDefinitionIndex = 67001;

	class GridFightStageRoute___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::System::Func_2<::BCCIJHPLJOJ*, ::RPG::Client::GridFightStageNode*>* __9__5; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::RPG::Client::GridFightStageNode*>* legacyNodes; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGEROUTE___C__DISPLAYCLASS5_0_CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightStageNode*>* _SyncAllRouteNodes_b__4(::System::Linq::IGrouping_2<::System::UInt32, ::BCCIJHPLJOJ*>* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightStageNode*>*(*)(::PVOID, ::System::Linq::IGrouping_2<::System::UInt32, ::BCCIJHPLJOJ*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGEROUTE___C__DISPLAYCLASS5_0__SYNCALLROUTENODES_B__4_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightStageNode* _SyncAllRouteNodes_b__5(::BCCIJHPLJOJ* a1)
		{
			return ((::RPG::Client::GridFightStageNode*(*)(::PVOID, ::BCCIJHPLJOJ*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGEROUTE___C__DISPLAYCLASS5_0__SYNCALLROUTENODES_B__5_OFFSET))(this, a1);
		}

	};
}
