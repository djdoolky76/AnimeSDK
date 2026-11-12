#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightRole; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTGAINOTHERROLETRAITTRAITEFFECT___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xDB04A70)
#define RPG_CLIENT_GRIDFIGHTGAINOTHERROLETRAITTRAITEFFECT___C_CTOR_OFFSET UNITYSDK_OFFSET(0xDB04AB0)
#define RPG_CLIENT_GRIDFIGHTGAINOTHERROLETRAITTRAITEFFECT___C___GETCANDIDATEROLES_B__9_1_OFFSET UNITYSDK_OFFSET(0xDB04AC0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGainOtherRoleTraitTraitEffect___c_TypeDefinitionIndex = 67203;

	class GridFightGainOtherRoleTraitTraitEffect___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::GridFightRole*, ::System::UInt32>** StaticGet___9__9_1()
		{
			return (::System::Func_2<::RPG::Client::GridFightRole*, ::System::UInt32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x710F0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x710F8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAINOTHERROLETRAITTRAITEFFECT___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAINOTHERROLETRAITTRAITEFFECT___C_CTOR_OFFSET))(this);
		}

		::System::UInt32 __GetCandidateRoles_b__9_1(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAINOTHERROLETRAITTRAITEFFECT___C___GETCANDIDATEROLES_B__9_1_OFFSET))(this, a1);
		}

	};
}
