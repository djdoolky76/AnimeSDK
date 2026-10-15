#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class BaseChenLingBattleResource; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JPDMJGDOIFC_CTOR_OFFSET UNITYSDK_OFFSET(0x1CB79B60)

inline static constexpr unsigned int JPDMJGDOIFC_TypeDefinitionIndex = 43763;

	class JPDMJGDOIFC : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::RPG::GameCore::BaseChenLingBattleResource*>*>* NHLEDOFMEDH; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPDMJGDOIFC_CTOR_OFFSET))(this);
		}

	};
