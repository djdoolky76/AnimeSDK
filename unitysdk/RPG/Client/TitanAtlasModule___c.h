#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class TitanAtlasGroup; }
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_TITANATLASMODULE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xE2A5940)
#define RPG_CLIENT_TITANATLASMODULE___C_CTOR_OFFSET UNITYSDK_OFFSET(0xE2A5980)
#define RPG_CLIENT_TITANATLASMODULE___C__GETALLGROUPS_B__2_0_OFFSET UNITYSDK_OFFSET(0xE2A5990)

namespace RPG::Client
{
	inline static constexpr unsigned int TitanAtlasModule___c_TypeDefinitionIndex = 68145;

	class TitanAtlasModule___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::Client::TitanAtlasGroup*>** StaticGet___9__2_0()
		{
			return (::System::Comparison_1<::RPG::Client::TitanAtlasGroup*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x1A7C0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x1A7C8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TITANATLASMODULE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TITANATLASMODULE___C_CTOR_OFFSET))(this);
		}

		::System::Int32 _GetAllGroups_b__2_0(::RPG::Client::TitanAtlasGroup* a1, ::RPG::Client::TitanAtlasGroup* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::TitanAtlasGroup*, ::RPG::Client::TitanAtlasGroup*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TITANATLASMODULE___C__GETALLGROUPS_B__2_0_OFFSET))(this, a1, a2);
		}

	};
}
