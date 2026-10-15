#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class ElfGame; }

#define HOAKIBHGHLJ___C__DISPLAYCLASS2_0_CTOR_OFFSET UNITYSDK_OFFSET(0x15D9D1C0)
#define HOAKIBHGHLJ___C__DISPLAYCLASS2_0__ONTASKBEGIN_B__0_OFFSET UNITYSDK_OFFSET(0x15D9D280)

inline static constexpr unsigned int HOAKIBHGHLJ___c__DisplayClass2_0_TypeDefinitionIndex = 58095;

	class HOAKIBHGHLJ___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::RPG::Client::ElfGame* game; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOAKIBHGHLJ___C__DISPLAYCLASS2_0_CTOR_OFFSET))(this);
		}

		::System::Void _OnTaskBegin_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOAKIBHGHLJ___C__DISPLAYCLASS2_0__ONTASKBEGIN_B__0_OFFSET))(this);
		}

	};
