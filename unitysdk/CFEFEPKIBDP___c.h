#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/ChimeraPreparationState.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::Prop { class ChimeraPreparationStateControllerBase; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CFEFEPKIBDP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xCA04F70)
#define CFEFEPKIBDP___C_CTOR_OFFSET UNITYSDK_OFFSET(0xCA04FB0)
#define CFEFEPKIBDP___C___CTOR_B__3_0_OFFSET UNITYSDK_OFFSET(0xCA04FC0)
#define CFEFEPKIBDP___C___CTOR_B__3_1_OFFSET UNITYSDK_OFFSET(0xCA05050)

inline static constexpr unsigned int CFEFEPKIBDP___c_TypeDefinitionIndex = 78480;

	class CFEFEPKIBDP___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::Prop::ChimeraPreparationStateControllerBase*, ::RPG::Client::Prop::ChimeraPreparationStateControllerBase*>** StaticGet___9__3_1()
		{
			return (::System::Func_2<::RPG::Client::Prop::ChimeraPreparationStateControllerBase*, ::RPG::Client::Prop::ChimeraPreparationStateControllerBase*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1ED40);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1ED48);
		}

		static ::System::Func_2<::RPG::Client::Prop::ChimeraPreparationStateControllerBase*, ::RPG::Client::Prop::ChimeraPreparationState>** StaticGet___9__3_0()
		{
			return (::System::Func_2<::RPG::Client::Prop::ChimeraPreparationStateControllerBase*, ::RPG::Client::Prop::ChimeraPreparationState>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1ED50);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CFEFEPKIBDP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFEFEPKIBDP___C_CTOR_OFFSET))(this);
		}

		::RPG::Client::Prop::ChimeraPreparationState __ctor_b__3_0(::RPG::Client::Prop::ChimeraPreparationStateControllerBase* a1)
		{
			return ((::RPG::Client::Prop::ChimeraPreparationState(*)(::PVOID, ::RPG::Client::Prop::ChimeraPreparationStateControllerBase*))((::PBYTE)hIl2Cpp + CFEFEPKIBDP___C___CTOR_B__3_0_OFFSET))(this, a1);
		}

		::RPG::Client::Prop::ChimeraPreparationStateControllerBase* __ctor_b__3_1(::RPG::Client::Prop::ChimeraPreparationStateControllerBase* a1)
		{
			return ((::RPG::Client::Prop::ChimeraPreparationStateControllerBase*(*)(::PVOID, ::RPG::Client::Prop::ChimeraPreparationStateControllerBase*))((::PBYTE)hIl2Cpp + CFEFEPKIBDP___C___CTOR_B__3_1_OFFSET))(this, a1);
		}

	};
