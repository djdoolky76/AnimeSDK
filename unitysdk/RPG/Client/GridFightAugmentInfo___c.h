#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightAugment; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_GRIDFIGHTAUGMENTINFO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xDA66CD0)
#define RPG_CLIENT_GRIDFIGHTAUGMENTINFO___C_CTOR_OFFSET UNITYSDK_OFFSET(0xDA66D10)
#define RPG_CLIENT_GRIDFIGHTAUGMENTINFO___C__GET_PLAYERAUGMENTSWITHOUTEXTRA_B__4_0_OFFSET UNITYSDK_OFFSET(0xDA66D20)
#define RPG_CLIENT_GRIDFIGHTAUGMENTINFO___C__REMOVEALLAUGMENT_B__14_0_OFFSET UNITYSDK_OFFSET(0xDA66D40)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightAugmentInfo___c_TypeDefinitionIndex = 65826;

	class GridFightAugmentInfo___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::RPG::Client::GridFightAugment*>** StaticGet___9__14_0()
		{
			return (::System::Action_1<::RPG::Client::GridFightAugment*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6B130);
		}

		static ::System::Func_2<::RPG::Client::GridFightAugment*, ::System::Boolean>** StaticGet___9__4_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightAugment*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6B138);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6B140);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTINFO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTINFO___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _get_PlayerAugmentsWithoutExtra_b__4_0(::RPG::Client::GridFightAugment* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightAugment*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTINFO___C__GET_PLAYERAUGMENTSWITHOUTEXTRA_B__4_0_OFFSET))(this, a1);
		}

		::System::Void _RemoveAllAugment_b__14_0(::RPG::Client::GridFightAugment* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightAugment*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTINFO___C__REMOVEALLAUGMENT_B__14_0_OFFSET))(this, a1);
		}

	};
}
