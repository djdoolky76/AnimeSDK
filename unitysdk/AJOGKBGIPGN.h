#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BCLNOMLHKEI;
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AJOGKBGIPGN_CTOR_OFFSET UNITYSDK_OFFSET(0x12CC3900)

inline static constexpr unsigned int AJOGKBGIPGN_TypeDefinitionIndex = 56442;

	class AJOGKBGIPGN : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* GGKGFABFGFE; // 0x10
		::System::Collections::Generic::List_1<::BCLNOMLHKEI*>* BNCNCFMAMIG; // 0x18
		::System::String* MGJPIILDPMF; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJOGKBGIPGN_CTOR_OFFSET))(this);
		}

	};
