#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PetMarble/Level/PetMarbleLevelModeType.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define GJJLJFICILH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x15A5EC40)
#define GJJLJFICILH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x15A5EC70)
#define GJJLJFICILH___C___ENSUREMODETYPESCACHE_B__3_0_OFFSET UNITYSDK_OFFSET(0x15A5EC80)

inline static constexpr unsigned int GJJLJFICILH___c_TypeDefinitionIndex = 74743;

	class GJJLJFICILH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x68E30);
		}

		static ::System::Func_2<::RPG::Client::PetMarble::Level::PetMarbleLevelModeType, ::System::Boolean>** StaticGet___9__3_0()
		{
			return (::System::Func_2<::RPG::Client::PetMarble::Level::PetMarbleLevelModeType, ::System::Boolean>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x68E38);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GJJLJFICILH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJJLJFICILH___C_CTOR_OFFSET))(this);
		}

		::System::Boolean __EnsureModeTypesCache_b__3_0(::RPG::Client::PetMarble::Level::PetMarbleLevelModeType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PetMarble::Level::PetMarbleLevelModeType))((::PBYTE)hIl2Cpp + GJJLJFICILH___C___ENSUREMODETYPESCACHE_B__3_0_OFFSET))(this, a1);
		}

	};
