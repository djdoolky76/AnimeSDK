#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightTrailLayerQuality.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightGridMember; }
namespace RPG::Client { class GridFightTrait; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define GRIDFIGHTTRAITGAINFRONTTRAITEFFECT___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x15B702C0)
#define GRIDFIGHTTRAITGAINFRONTTRAITEFFECT___C_CTOR_OFFSET UNITYSDK_OFFSET(0x15B70300)
#define GRIDFIGHTTRAITGAINFRONTTRAITEFFECT___C__GETFRONTTRAITS_B__1_1_OFFSET UNITYSDK_OFFSET(0x15B70380)
#define GRIDFIGHTTRAITGAINFRONTTRAITEFFECT___C__GETFRONTTRAITS_B__1_2_OFFSET UNITYSDK_OFFSET(0x15B703F0)
#define GRIDFIGHTTRAITGAINFRONTTRAITEFFECT___C__GETFRONTTRAITS_B__1_3_OFFSET UNITYSDK_OFFSET(0x15B70310)

inline static constexpr unsigned int GridFightTraitGainFrontTraitEffect___c_TypeDefinitionIndex = 47193;

	class GridFightTraitGainFrontTraitEffect___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::GridFightTrait*, ::System::UInt32>** StaticGet___9__1_2()
		{
			return (::System::Func_2<::RPG::Client::GridFightTrait*, ::System::UInt32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6DB10);
		}

		static ::System::Func_2<::RPG::Client::GridFightTrait*, ::RPG::GameCore::GridFightTrailLayerQuality>** StaticGet___9__1_1()
		{
			return (::System::Func_2<::RPG::Client::GridFightTrait*, ::RPG::GameCore::GridFightTrailLayerQuality>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6DB18);
		}

		static ::System::Func_2<::RPG::Client::GridFightGridMember*, ::System::Boolean>** StaticGet___9__1_3()
		{
			return (::System::Func_2<::RPG::Client::GridFightGridMember*, ::System::Boolean>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6DB20);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6DB28);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GRIDFIGHTTRAITGAINFRONTTRAITEFFECT___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GRIDFIGHTTRAITGAINFRONTTRAITEFFECT___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _GetFrontTraits_b__1_3(::RPG::Client::GridFightGridMember* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightGridMember*))((::PBYTE)hIl2Cpp + GRIDFIGHTTRAITGAINFRONTTRAITEFFECT___C__GETFRONTTRAITS_B__1_3_OFFSET))(this, a1);
		}

		::RPG::GameCore::GridFightTrailLayerQuality _GetFrontTraits_b__1_1(::RPG::Client::GridFightTrait* a1)
		{
			return ((::RPG::GameCore::GridFightTrailLayerQuality(*)(::PVOID, ::RPG::Client::GridFightTrait*))((::PBYTE)hIl2Cpp + GRIDFIGHTTRAITGAINFRONTTRAITEFFECT___C__GETFRONTTRAITS_B__1_1_OFFSET))(this, a1);
		}

		::System::UInt32 _GetFrontTraits_b__1_2(::RPG::Client::GridFightTrait* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::GridFightTrait*))((::PBYTE)hIl2Cpp + GRIDFIGHTTRAITGAINFRONTTRAITEFFECT___C__GETFRONTTRAITS_B__1_2_OFFSET))(this, a1);
		}

	};
