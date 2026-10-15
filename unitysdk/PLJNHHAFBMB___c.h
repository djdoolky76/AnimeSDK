#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class FightPlayer; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define PLJNHHAFBMB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xC300F50)
#define PLJNHHAFBMB___C_CTOR_OFFSET UNITYSDK_OFFSET(0xC300F90)
#define PLJNHHAFBMB___C__GETPLAYERUIDS_B__15_0_OFFSET UNITYSDK_OFFSET(0xC300FA0)

inline static constexpr unsigned int PLJNHHAFBMB___c_TypeDefinitionIndex = 69361;

	class PLJNHHAFBMB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x70030);
		}

		static ::System::Func_2<::RPG::Client::FightPlayer*, ::System::UInt32>** StaticGet___9__15_0()
		{
			return (::System::Func_2<::RPG::Client::FightPlayer*, ::System::UInt32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x70038);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PLJNHHAFBMB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLJNHHAFBMB___C_CTOR_OFFSET))(this);
		}

		::System::UInt32 _GetPlayerUIDs_b__15_0(::RPG::Client::FightPlayer* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::FightPlayer*))((::PBYTE)hIl2Cpp + PLJNHHAFBMB___C__GETPLAYERUIDS_B__15_0_OFFSET))(this, a1);
		}

	};
