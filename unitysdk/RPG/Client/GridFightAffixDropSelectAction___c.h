#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightMonsterAffixConfig; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTAFFIXDROPSELECTACTION___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xDA5A550)
#define RPG_CLIENT_GRIDFIGHTAFFIXDROPSELECTACTION___C_CTOR_OFFSET UNITYSDK_OFFSET(0xDA5A590)
#define RPG_CLIENT_GRIDFIGHTAFFIXDROPSELECTACTION___C___GETCANDIDATEAFFIXES_B__13_0_OFFSET UNITYSDK_OFFSET(0xDA5A5A0)
#define RPG_CLIENT_GRIDFIGHTAFFIXDROPSELECTACTION___C___GETCANDIDATEAFFIXES_B__13_1_OFFSET UNITYSDK_OFFSET(0xDA5A650)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightAffixDropSelectAction___c_TypeDefinitionIndex = 66699;

	class GridFightAffixDropSelectAction___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::GridFightMonsterAffixConfig*, ::System::Boolean>** StaticGet___9__13_1()
		{
			return (::System::Func_2<::RPG::Client::GridFightMonsterAffixConfig*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6AD60);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6AD68);
		}

		static ::System::Func_2<::System::UInt32, ::RPG::Client::GridFightMonsterAffixConfig*>** StaticGet___9__13_0()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::Client::GridFightMonsterAffixConfig*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6AD70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAFFIXDROPSELECTACTION___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAFFIXDROPSELECTACTION___C_CTOR_OFFSET))(this);
		}

		::RPG::Client::GridFightMonsterAffixConfig* __GetCandidateAffixes_b__13_0(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightMonsterAffixConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAFFIXDROPSELECTACTION___C___GETCANDIDATEAFFIXES_B__13_0_OFFSET))(this, a1);
		}

		::System::Boolean __GetCandidateAffixes_b__13_1(::RPG::Client::GridFightMonsterAffixConfig* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightMonsterAffixConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAFFIXDROPSELECTACTION___C___GETCANDIDATEAFFIXES_B__13_1_OFFSET))(this, a1);
		}

	};
}
