#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class PlanetFesAnimComposite; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CCPEOADPIFE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xC753BE0)
#define CCPEOADPIFE___C_CTOR_OFFSET UNITYSDK_OFFSET(0xC753C20)
#define CCPEOADPIFE___C___GETRANDOMANIMCOMPOSITE_B__3_0_OFFSET UNITYSDK_OFFSET(0xC753C30)

	class CCPEOADPIFE___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::GameCore::PlanetFesAnimComposite*, ::System::Int32>** StaticGet___9__3_0()
		{
			return (::System::Func_2<::RPG::GameCore::PlanetFesAnimComposite*, ::System::Int32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x15630);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x15638);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CCPEOADPIFE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCPEOADPIFE___C_CTOR_OFFSET))(this);
		}

		::System::Int32 __GetRandomAnimComposite_b__3_0(::RPG::GameCore::PlanetFesAnimComposite* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::PlanetFesAnimComposite*))((::PBYTE)hIl2Cpp + CCPEOADPIFE___C___GETRANDOMANIMCOMPOSITE_B__3_0_OFFSET))(this, a1);
		}

	};
