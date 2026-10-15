#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }

#define BPOICLJJOLF_CTOR_OFFSET UNITYSDK_OFFSET(0xC1AC600)
#define BPOICLJJOLF_GET_ONFINISH_OFFSET UNITYSDK_OFFSET(0xC1AC610)

inline static constexpr unsigned int BPOICLJJOLF_TypeDefinitionIndex = 76062;

	class BPOICLJJOLF : public ::System::Object
	{
	public:
		::System::Action* _OnFinish_k__BackingField; // 0x10
		::System::Void _ctor(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + BPOICLJJOLF_CTOR_OFFSET))(this, a1);
		}

		::System::Action* get_OnFinish()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + BPOICLJJOLF_GET_ONFINISH_OFFSET))(this);
		}

	};
