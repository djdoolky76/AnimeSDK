#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightRole; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define DMPKDJKCHIL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x10C3C970)
#define DMPKDJKCHIL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x10C3C9B0)
#define DMPKDJKCHIL___C___GETTEAMSPEEDSUM_B__2_0_OFFSET UNITYSDK_OFFSET(0x10C3C9C0)
#define DMPKDJKCHIL___C___GETTEAMSPEEDSUM_B__2_1_OFFSET UNITYSDK_OFFSET(0x10C3CA20)

inline static constexpr unsigned int DMPKDJKCHIL___c_TypeDefinitionIndex = 67194;

	class DMPKDJKCHIL___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::GridFightRole*, ::System::Boolean>** StaticGet___9__2_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightRole*, ::System::Boolean>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x587A0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x587A8);
		}

		static ::System::Func_2<::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint>** StaticGet___9__2_1()
		{
			return (::System::Func_2<::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x587B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DMPKDJKCHIL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMPKDJKCHIL___C_CTOR_OFFSET))(this);
		}

		::System::Boolean __GetTeamSpeedSum_b__2_0(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + DMPKDJKCHIL___C___GETTEAMSPEEDSUM_B__2_0_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint __GetTeamSpeedSum_b__2_1(::RPG::GameCore::FixPoint a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + DMPKDJKCHIL___C___GETTEAMSPEEDSUM_B__2_1_OFFSET))(this, a1);
		}

	};
