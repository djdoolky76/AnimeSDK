#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightRole; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define EDKHIJKIPLM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x186CA410)
#define EDKHIJKIPLM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x186CA450)
#define EDKHIJKIPLM___C___GETTEAMSPEEDSUM_B__4_0_OFFSET UNITYSDK_OFFSET(0x186CA460)
#define EDKHIJKIPLM___C___GETTEAMSPEEDSUM_B__4_1_OFFSET UNITYSDK_OFFSET(0x186CA4C0)

inline static constexpr unsigned int EDKHIJKIPLM___c_TypeDefinitionIndex = 67175;

	class EDKHIJKIPLM___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::GridFightRole*, ::System::Boolean>** StaticGet___9__4_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightRole*, ::System::Boolean>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x72330);
		}

		static ::System::Func_2<::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint>** StaticGet___9__4_1()
		{
			return (::System::Func_2<::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x72338);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x72340);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EDKHIJKIPLM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDKHIJKIPLM___C_CTOR_OFFSET))(this);
		}

		::System::Boolean __GetTeamSpeedSum_b__4_0(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + EDKHIJKIPLM___C___GETTEAMSPEEDSUM_B__4_0_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint __GetTeamSpeedSum_b__4_1(::RPG::GameCore::FixPoint a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + EDKHIJKIPLM___C___GETTEAMSPEEDSUM_B__4_1_OFFSET))(this, a1);
		}

	};
