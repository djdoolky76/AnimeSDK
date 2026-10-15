#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightTraitRemarkLineEffectBase; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTTRAITREMARKPARSER___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xD2B9E50)
#define RPG_CLIENT_GRIDFIGHTTRAITREMARKPARSER___C_CTOR_OFFSET UNITYSDK_OFFSET(0xD2B9E90)
#define RPG_CLIENT_GRIDFIGHTTRAITREMARKPARSER___C___GETSHOWINGLINEPARSERS_B__3_0_OFFSET UNITYSDK_OFFSET(0xD2B9EA0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTraitRemarkParser___c_TypeDefinitionIndex = 65479;

	class GridFightTraitRemarkParser___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0xC5A0);
		}

		static ::System::Func_2<::RPG::Client::GridFightTraitRemarkLineEffectBase*, ::System::UInt32>** StaticGet___9__3_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightTraitRemarkLineEffectBase*, ::System::UInt32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0xC5A8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKPARSER___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKPARSER___C_CTOR_OFFSET))(this);
		}

		::System::UInt32 __GetShowingLineParsers_b__3_0(::RPG::Client::GridFightTraitRemarkLineEffectBase* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::GridFightTraitRemarkLineEffectBase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKPARSER___C___GETSHOWINGLINEPARSERS_B__3_0_OFFSET))(this, a1);
		}

	};
}
