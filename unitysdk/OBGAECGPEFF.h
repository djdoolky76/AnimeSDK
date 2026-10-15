#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }

#define OBGAECGPEFF_JLEAOOKNMPO_OFFSET UNITYSDK_OFFSET(0xBD3E9B0)

	class OBGAECGPEFF : public ::System::Object
	{
	public:
		static ::System::String* JLEAOOKNMPO(::System::Object* a1, ::RPG::GameCore::TaskContext* a2)
		{
			return ((::System::String*(*)(::System::Object*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + OBGAECGPEFF_JLEAOOKNMPO_OFFSET))(a1, a2);
		}

	};
