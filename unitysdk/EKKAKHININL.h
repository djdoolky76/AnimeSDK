#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define EKKAKHININL_AIJHHGPIBJG_OFFSET UNITYSDK_OFFSET(0x154FFB40)
#define EKKAKHININL_FBHHGMHOCLA_OFFSET UNITYSDK_OFFSET(0x154FF190)

inline static constexpr unsigned int EKKAKHININL_TypeDefinitionIndex = 52855;

	class EKKAKHININL : public ::System::Object
	{
	public:
		static ::System::Boolean FBHHGMHOCLA(::RPG::GameCore::TaskContext* a1, ::System::Boolean a2, ::RPG::GameCore::DynamicString* a3, ::System::Boolean a4, ::RPG::GameCore::DynamicString* a5, ::System::UInt32 a6, ::System::UInt32 a7, ::System::UInt32 a8)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::TaskContext*, ::System::Boolean, ::RPG::GameCore::DynamicString*, ::System::Boolean, ::RPG::GameCore::DynamicString*, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + EKKAKHININL_FBHHGMHOCLA_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
		}

		static ::System::Boolean AIJHHGPIBJG(::System::Object* a1, ::System::Boolean a2, ::System::UInt32 a3, ::System::UInt32 a4, ::System::UInt32 a5)
		{
			return ((::System::Boolean(*)(::System::Object*, ::System::Boolean, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + EKKAKHININL_AIJHHGPIBJG_OFFSET))(a1, a2, a3, a4, a5);
		}

	};
