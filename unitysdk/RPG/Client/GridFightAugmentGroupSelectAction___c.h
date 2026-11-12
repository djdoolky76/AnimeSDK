#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DDGEFKPIJJJ;
namespace RPG::Client { class GridFightAugmentGroupOption; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTAUGMENTGROUPSELECTACTION___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xDA65390)
#define RPG_CLIENT_GRIDFIGHTAUGMENTGROUPSELECTACTION___C_CTOR_OFFSET UNITYSDK_OFFSET(0xDA653D0)
#define RPG_CLIENT_GRIDFIGHTAUGMENTGROUPSELECTACTION___C__UPDATE_B__17_0_OFFSET UNITYSDK_OFFSET(0xDA65430)
#define RPG_CLIENT_GRIDFIGHTAUGMENTGROUPSELECTACTION___C___CTOR_B__16_0_OFFSET UNITYSDK_OFFSET(0xDA653E0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightAugmentGroupSelectAction___c_TypeDefinitionIndex = 66702;

	class GridFightAugmentGroupSelectAction___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::DDGEFKPIJJJ*, ::RPG::Client::GridFightAugmentGroupOption*>** StaticGet___9__17_0()
		{
			return (::System::Func_2<::DDGEFKPIJJJ*, ::RPG::Client::GridFightAugmentGroupOption*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6B100);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6B108);
		}

		static ::System::Func_2<::DDGEFKPIJJJ*, ::RPG::Client::GridFightAugmentGroupOption*>** StaticGet___9__16_0()
		{
			return (::System::Func_2<::DDGEFKPIJJJ*, ::RPG::Client::GridFightAugmentGroupOption*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6B110);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTGROUPSELECTACTION___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTGROUPSELECTACTION___C_CTOR_OFFSET))(this);
		}

		::RPG::Client::GridFightAugmentGroupOption* __ctor_b__16_0(::DDGEFKPIJJJ* a1)
		{
			return ((::RPG::Client::GridFightAugmentGroupOption*(*)(::PVOID, ::DDGEFKPIJJJ*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTGROUPSELECTACTION___C___CTOR_B__16_0_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightAugmentGroupOption* _Update_b__17_0(::DDGEFKPIJJJ* a1)
		{
			return ((::RPG::Client::GridFightAugmentGroupOption*(*)(::PVOID, ::DDGEFKPIJJJ*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTGROUPSELECTACTION___C__UPDATE_B__17_0_OFFSET))(this, a1);
		}

	};
}
