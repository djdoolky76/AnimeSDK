#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChronicleCustomShowConditionType.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class ChronicleCustomShowCondition; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KFHHLFDEOGK_IBBEEFBALIH_OFFSET UNITYSDK_OFFSET(0xB3A3A10)
#define KFHHLFDEOGK_IBCLLIJNJIB_OFFSET UNITYSDK_OFFSET(0xB3A38A0)
#define KFHHLFDEOGK_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xB3A3860)
#define KFHHLFDEOGK_MJEGFOMAOFH_OFFSET UNITYSDK_OFFSET(0xB3A3960)

inline static constexpr unsigned int KFHHLFDEOGK_TypeDefinitionIndex = 66094;

	class KFHHLFDEOGK : public ::System::Object
	{
	public:
		static ::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KFHHLFDEOGK_KPJGDHLENIP_OFFSET))();
		}

		static ::System::Boolean IBCLLIJNJIB(::System::Collections::Generic::List_1<::RPG::GameCore::ChronicleCustomShowCondition*>* a1)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::RPG::GameCore::ChronicleCustomShowCondition*>*))((::PBYTE)hIl2Cpp + KFHHLFDEOGK_IBCLLIJNJIB_OFFSET))(a1);
		}

		static ::System::Boolean IBBEEFBALIH(::RPG::GameCore::ChronicleCustomShowCondition* a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::ChronicleCustomShowCondition*))((::PBYTE)hIl2Cpp + KFHHLFDEOGK_IBBEEFBALIH_OFFSET))(a1);
		}

		static ::System::Boolean MJEGFOMAOFH(::RPG::GameCore::ChronicleCustomShowConditionType a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::ChronicleCustomShowConditionType, ::System::Object*))((::PBYTE)hIl2Cpp + KFHHLFDEOGK_MJEGFOMAOFH_OFFSET))(a1, a2);
		}

	};
