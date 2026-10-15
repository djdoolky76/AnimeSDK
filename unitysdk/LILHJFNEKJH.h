#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class AddMenuItem; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class HoyoTagContainer; }
namespace RPG::GameCore { class PropComponent; }
namespace RPG::GameCore { class RuntimeGroupInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LILHJFNEKJH_FKKPJFHAGOH_1_OFFSET UNITYSDK_OFFSET(0xB6D8EC0)
#define LILHJFNEKJH_FKKPJFHAGOH_OFFSET UNITYSDK_OFFSET(0xB6D8BA0)
#define LILHJFNEKJH_NFLPKHFCKOP_OFFSET UNITYSDK_OFFSET(0xB6D9120)
#define LILHJFNEKJH_ODPOHBKHMPK_1_OFFSET UNITYSDK_OFFSET(0xB6D8E50)
#define LILHJFNEKJH_ODPOHBKHMPK_OFFSET UNITYSDK_OFFSET(0xB6D8B30)

	class LILHJFNEKJH : public ::System::Object
	{
	public:
		static ::System::Boolean ODPOHBKHMPK(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + LILHJFNEKJH_ODPOHBKHMPK_OFFSET))(a1, a2);
		}

		static ::System::Boolean ODPOHBKHMPK_1(::RPG::GameCore::PropComponent* a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::PropComponent*, ::System::Boolean))((::PBYTE)hIl2Cpp + LILHJFNEKJH_ODPOHBKHMPK_1_OFFSET))(a1, a2);
		}

		static ::System::Boolean FKKPJFHAGOH(::System::UInt32 a1, ::System::Boolean a2, ::System::String* a3)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + LILHJFNEKJH_FKKPJFHAGOH_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean FKKPJFHAGOH_1(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::RPG::GameCore::RuntimeGroupInfo* a4, ::RPG::GameCore::HoyoTagContainer* a5, ::System::String* a6)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::System::UInt32, ::System::UInt32, ::RPG::GameCore::RuntimeGroupInfo*, ::RPG::GameCore::HoyoTagContainer*, ::System::String*))((::PBYTE)hIl2Cpp + LILHJFNEKJH_FKKPJFHAGOH_1_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Void NFLPKHFCKOP(::System::UInt32 a1, ::System::Collections::Generic::List_1<::RPG::GameCore::AddMenuItem*>* a2)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::Collections::Generic::List_1<::RPG::GameCore::AddMenuItem*>*))((::PBYTE)hIl2Cpp + LILHJFNEKJH_NFLPKHFCKOP_OFFSET))(a1, a2);
		}

	};
