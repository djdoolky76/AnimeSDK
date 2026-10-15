#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ShowWorldShop; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define OMOOJJFNCEM_CTOR_OFFSET UNITYSDK_OFFSET(0xBF47280)
#define OMOOJJFNCEM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBF472C0)
#define OMOOJJFNCEM__ONPAGECONFIRMCLOSE_OFFSET UNITYSDK_OFFSET(0xBF47480)

inline static constexpr unsigned int OMOOJJFNCEM_TypeDefinitionIndex = 58711;

	class OMOOJJFNCEM
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowWorldShop* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowWorldShop*))((::PBYTE)hIl2Cpp + OMOOJJFNCEM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMOOJJFNCEM_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void _OnPageConfirmClose(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OMOOJJFNCEM__ONPAGECONFIRMCLOSE_OFFSET))(this, a1);
		}

	};
