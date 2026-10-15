#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PDHLJJCMEDJ.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Converter_2; }

#define NJIOAKCLACC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xBC18380)
#define NJIOAKCLACC___C_CTOR_OFFSET UNITYSDK_OFFSET(0xBC183B0)
#define NJIOAKCLACC___C___ONTASKBEGINIMPL_B__17_0_OFFSET UNITYSDK_OFFSET(0xBC183C0)

inline static constexpr unsigned int NJIOAKCLACC___c_TypeDefinitionIndex = 57924;

	class NJIOAKCLACC___c : public ::System::Object
	{
	public:
		static ::System::Converter_2<::RPG::GameCore::GameEntity*, ::PDHLJJCMEDJ>** StaticGet___9__17_0()
		{
			return (::System::Converter_2<::RPG::GameCore::GameEntity*, ::PDHLJJCMEDJ>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x42480);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x42488);
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
