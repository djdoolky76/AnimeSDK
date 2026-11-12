#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class IGridFightTraitEffect; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTMOONGAMETRAITEFFECT___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xDC0B9A0)
#define RPG_CLIENT_GRIDFIGHTMOONGAMETRAITEFFECT___C_CTOR_OFFSET UNITYSDK_OFFSET(0xDC0B9E0)
#define RPG_CLIENT_GRIDFIGHTMOONGAMETRAITEFFECT___C__GET_SUBTRAITEFFECTS_B__7_0_OFFSET UNITYSDK_OFFSET(0xDC0B9F0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightMoonGameTraitEffect___c_TypeDefinitionIndex = 67219;

	class GridFightMoonGameTraitEffect___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x72D00);
		}

		static ::System::Func_2<::System::Collections::Generic::List_1<::RPG::Client::IGridFightTraitEffect*>*, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::IGridFightTraitEffect*>*>** StaticGet___9__7_0()
		{
			return (::System::Func_2<::System::Collections::Generic::List_1<::RPG::Client::IGridFightTraitEffect*>*, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::IGridFightTraitEffect*>*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x72D08);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMOONGAMETRAITEFFECT___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMOONGAMETRAITEFFECT___C_CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::IGridFightTraitEffect*>* _get_SubTraitEffects_b__7_0(::System::Collections::Generic::List_1<::RPG::Client::IGridFightTraitEffect*>* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::IGridFightTraitEffect*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::IGridFightTraitEffect*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMOONGAMETRAITEFFECT___C__GET_SUBTRAITEFFECTS_B__7_0_OFFSET))(this, a1);
		}

	};
}
