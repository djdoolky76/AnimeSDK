#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightRole; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTGAINOTHERROLETRAITPENDINGACTION___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xDB03260)
#define RPG_CLIENT_GRIDFIGHTGAINOTHERROLETRAITPENDINGACTION___C_CTOR_OFFSET UNITYSDK_OFFSET(0xDB032A0)
#define RPG_CLIENT_GRIDFIGHTGAINOTHERROLETRAITPENDINGACTION___C___REFRESHCANDIDATEROLES_B__25_0_OFFSET UNITYSDK_OFFSET(0xDB03310)
#define RPG_CLIENT_GRIDFIGHTGAINOTHERROLETRAITPENDINGACTION___C___REFRESHCANDIDATEROLES_B__25_1_OFFSET UNITYSDK_OFFSET(0xDB032B0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGainOtherRoleTraitPendingAction___c_TypeDefinitionIndex = 66704;

	class GridFightGainOtherRoleTraitPendingAction___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x710A0);
		}

		static ::System::Func_2<::RPG::Client::GridFightRole*, ::System::UInt32>** StaticGet___9__25_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightRole*, ::System::UInt32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x710A8);
		}

		static ::System::Func_2<::RPG::Client::GridFightRole*, ::System::Boolean>** StaticGet___9__25_1()
		{
			return (::System::Func_2<::RPG::Client::GridFightRole*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x710B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAINOTHERROLETRAITPENDINGACTION___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAINOTHERROLETRAITPENDINGACTION___C_CTOR_OFFSET))(this);
		}

		::System::Boolean __RefreshCandidateRoles_b__25_1(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAINOTHERROLETRAITPENDINGACTION___C___REFRESHCANDIDATEROLES_B__25_1_OFFSET))(this, a1);
		}

		::System::UInt32 __RefreshCandidateRoles_b__25_0(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAINOTHERROLETRAITPENDINGACTION___C___REFRESHCANDIDATEROLES_B__25_0_OFFSET))(this, a1);
		}

	};
}
