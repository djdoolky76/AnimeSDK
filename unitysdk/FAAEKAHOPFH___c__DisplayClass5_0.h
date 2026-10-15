#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BCLKDMAHONE;
class FAAEKAHOPFH;
namespace RPG::GameCore { class TaskContext; }

#define FAAEKAHOPFH___C__DISPLAYCLASS5_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1565BD60)
#define FAAEKAHOPFH___C__DISPLAYCLASS5_0___FIREMISSLE_B__0_OFFSET UNITYSDK_OFFSET(0x1565C5A0)

inline static constexpr unsigned int FAAEKAHOPFH___c__DisplayClass5_0_TypeDefinitionIndex = 58192;

	class FAAEKAHOPFH___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::TaskContext* context; // 0x10
		::FAAEKAHOPFH* __4__this; // 0x18
		::BCLKDMAHONE* casterEntity; // 0x20
		::System::Int32 targetRuntimeID; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAAEKAHOPFH___C__DISPLAYCLASS5_0_CTOR_OFFSET))(this);
		}

		::System::Void __FireMissle_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAAEKAHOPFH___C__DISPLAYCLASS5_0___FIREMISSLE_B__0_OFFSET))(this);
		}

	};
