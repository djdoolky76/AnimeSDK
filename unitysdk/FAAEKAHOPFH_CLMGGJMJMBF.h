#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class TaskContext; }

#define FAAEKAHOPFH_CLMGGJMJMBF_CTOR_OFFSET UNITYSDK_OFFSET(0x1565B610)

inline static constexpr unsigned int FAAEKAHOPFH_CLMGGJMJMBF_TypeDefinitionIndex = 58190;

	class FAAEKAHOPFH_CLMGGJMJMBF : public ::System::Object
	{
	public:
		::RPG::GameCore::TaskContext* BKIFMPHBIAK; // 0x10
		::System::Int32 KAPFPAKBGOK; // 0x18
		::System::Single PNJEGPAFNCI; // 0x1C
		::System::Boolean IIFIPIAPHAI; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAAEKAHOPFH_CLMGGJMJMBF_CTOR_OFFSET))(this);
		}

	};
