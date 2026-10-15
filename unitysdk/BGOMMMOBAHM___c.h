#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BGOMMMOBAHM;
class HIOEAKHGILF;
namespace RPG::GameCore { class LittleGameEvent; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }

#define BGOMMMOBAHM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xB468C70)
#define BGOMMMOBAHM___C_CTOR_OFFSET UNITYSDK_OFFSET(0xB468CB0)
#define BGOMMMOBAHM___C___CREATETRIGGER_B__4_0_OFFSET UNITYSDK_OFFSET(0xB468CC0)

inline static constexpr unsigned int BGOMMMOBAHM___c_TypeDefinitionIndex = 77122;

	class BGOMMMOBAHM___c : public ::System::Object
	{
	public:
		static ::System::Action_3<::BGOMMMOBAHM*, ::HIOEAKHGILF*, ::RPG::GameCore::LittleGameEvent*>** StaticGet___9__4_0()
		{
			return (::System::Action_3<::BGOMMMOBAHM*, ::HIOEAKHGILF*, ::RPG::GameCore::LittleGameEvent*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6AD20);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6AD28);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BGOMMMOBAHM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGOMMMOBAHM___C_CTOR_OFFSET))(this);
		}

		::System::Void __CreateTrigger_b__4_0(::BGOMMMOBAHM* a1, ::HIOEAKHGILF* a2, ::RPG::GameCore::LittleGameEvent* a3)
		{
			return ((::System::Void(*)(::PVOID, ::BGOMMMOBAHM*, ::HIOEAKHGILF*, ::RPG::GameCore::LittleGameEvent*))((::PBYTE)hIl2Cpp + BGOMMMOBAHM___C___CREATETRIGGER_B__4_0_OFFSET))(this, a1, a2, a3);
		}

	};
