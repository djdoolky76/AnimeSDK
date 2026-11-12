#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Embree/EmbreeRaycastAPI_RayHitResult.h"
namespace System { class Object; }
namespace System { template <typename T> class Predicate_1; }

#define EMBREEDEBUGTOOL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xB57EFA0)
#define EMBREEDEBUGTOOL___C_CTOR_OFFSET UNITYSDK_OFFSET(0xB57EFE0)
#define EMBREEDEBUGTOOL___C__CASTRAYGRID_B__19_0_OFFSET UNITYSDK_OFFSET(0xB57EFF0)

inline static constexpr unsigned int EmbreeDebugTool___c_TypeDefinitionIndex = 46948;

	class EmbreeDebugTool___c : public ::System::Object
	{
	public:
		static ::System::Predicate_1<::System::Object*>** StaticGet___9__19_0()
		{
			return (::System::Predicate_1<::System::Object*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x14A60);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x14A68);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EMBREEDEBUGTOOL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMBREEDEBUGTOOL___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _CastRayGrid_b__19_0(::RPG::Embree::EmbreeRaycastAPI_RayHitResult a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Embree::EmbreeRaycastAPI_RayHitResult))((::PBYTE)hIl2Cpp + EMBREEDEBUGTOOL___C__CASTRAYGRID_B__19_0_OFFSET))(this, a1);
		}

	};
