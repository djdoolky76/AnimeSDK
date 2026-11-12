#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CHKJLBNBPNI_CTOR_OFFSET UNITYSDK_OFFSET(0xD8BD690)

inline static constexpr unsigned int CHKJLBNBPNI_TypeDefinitionIndex = 80113;

	class CHKJLBNBPNI : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* CMEEEKLIHBB; // 0x10
		::RPG::GameCore::GameEntity* MCLLALGABAB; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHKJLBNBPNI_CTOR_OFFSET))(this);
		}

	};
