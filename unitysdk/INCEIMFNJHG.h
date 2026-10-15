#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RtBehaviorFlag.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class BGMKDGACBNI;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define INCEIMFNJHG_CHGHBOEABAK_OFFSET UNITYSDK_OFFSET(0x164E69C0)

	class INCEIMFNJHG : public ::System::Object
	{
	public:
		static ::RPG::GameCore::FixPoint CHGHBOEABAK(::BGMKDGACBNI* a1, ::Il2CppArray<::RPG::GameCore::RtBehaviorFlag>* a2, ::System::Collections::Generic::List_1<::RPG::GameCore::RtBehaviorFlag>* a3)
		{
			return ((::RPG::GameCore::FixPoint(*)(::BGMKDGACBNI*, ::Il2CppArray<::RPG::GameCore::RtBehaviorFlag>*, ::System::Collections::Generic::List_1<::RPG::GameCore::RtBehaviorFlag>*))((::PBYTE)hIl2Cpp + INCEIMFNJHG_CHGHBOEABAK_OFFSET))(a1, a2, a3);
		}

	};
