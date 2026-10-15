#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class INMMPMDELKE;
namespace RPG::GameCore { class LittleGameEntityConfig; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FEMAHFBGJJP_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA3E490)

inline static constexpr unsigned int FEMAHFBGJJP_TypeDefinitionIndex = 43240;

	class FEMAHFBGJJP : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<::RPG::GameCore::LittleGameEntityConfig*>* EJDIFONGCLK; // 0x10
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::LittleGameEntityConfig*, ::INMMPMDELKE*>* JIDCOGGHCBK; // 0x18
		::System::Collections::Generic::List_1<::RPG::GameCore::LittleGameEntityConfig*>* JDKPOOMJIJC; // 0x20
		::System::Boolean GMBJIOHBFDD; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEMAHFBGJJP_CTOR_OFFSET))(this);
		}

	};
