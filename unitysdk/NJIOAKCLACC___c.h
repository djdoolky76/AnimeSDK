#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PDHLJJCMEDJ.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Converter_2; }

#define NJIOAKCLACC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1A794530)
#define NJIOAKCLACC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1A794560)
#define NJIOAKCLACC___C___ONTASKBEGINIMPL_B__17_0_OFFSET UNITYSDK_OFFSET(0x1A794570)

inline static constexpr unsigned int NJIOAKCLACC___c_TypeDefinitionIndex = 59161;

	class NJIOAKCLACC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x47B00);
		}

		static ::System::Converter_2<::RPG::GameCore::GameEntity*, ::PDHLJJCMEDJ>** StaticGet___9__17_0()
		{
			return (::System::Converter_2<::RPG::GameCore::GameEntity*, ::PDHLJJCMEDJ>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x47B08);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NJIOAKCLACC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJIOAKCLACC___C_CTOR_OFFSET))(this);
		}

		::PDHLJJCMEDJ __OnTaskBeginImpl_b__17_0(::RPG::GameCore::GameEntity* a1)
		{
			return ((::PDHLJJCMEDJ(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + NJIOAKCLACC___C___ONTASKBEGINIMPL_B__17_0_OFFSET))(this, a1);
		}

	};
