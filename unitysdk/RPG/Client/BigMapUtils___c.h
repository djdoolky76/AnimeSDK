#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class LevelNavmapArea; }
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_BIGMAPUTILS___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CDA5AC0)
#define RPG_CLIENT_BIGMAPUTILS___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1CDA5B00)
#define RPG_CLIENT_BIGMAPUTILS___C___OBSOLETEGETPLAYERAREADATA_B__46_0_OFFSET UNITYSDK_OFFSET(0x1CDA5B10)

namespace RPG::Client
{
	inline static constexpr unsigned int BigMapUtils___c_TypeDefinitionIndex = 64343;

	class BigMapUtils___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x68A00);
		}

		static ::System::Comparison_1<::RPG::GameCore::LevelNavmapArea*>** StaticGet___9__46_0()
		{
			return (::System::Comparison_1<::RPG::GameCore::LevelNavmapArea*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x68A08);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPUTILS___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPUTILS___C_CTOR_OFFSET))(this);
		}

		::System::Int32 __ObsoleteGetPlayerAreaData_b__46_0(::RPG::GameCore::LevelNavmapArea* a1, ::RPG::GameCore::LevelNavmapArea* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::LevelNavmapArea*, ::RPG::GameCore::LevelNavmapArea*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPUTILS___C___OBSOLETEGETPLAYERAREADATA_B__46_0_OFFSET))(this, a1, a2);
		}

	};
}
