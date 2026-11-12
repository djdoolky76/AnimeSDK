#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DIELGJIPJDM.h"
namespace RPG::Client { class UIProceduralShape; }

#define DDIOIKGHNFJ_CTOR_OFFSET UNITYSDK_OFFSET(0xEE26090)
#define DDIOIKGHNFJ_PFJDLLGFCOD_OFFSET UNITYSDK_OFFSET(0xEE25FD0)
#define DDIOIKGHNFJ__ONBIND_OFFSET UNITYSDK_OFFSET(0xEE25EF0)

inline static constexpr unsigned int DDIOIKGHNFJ_TypeDefinitionIndex = 73757;

	class DDIOIKGHNFJ : public ::DIELGJIPJDM
	{
	public:
		::RPG::Client::UIProceduralShape* HJDDADAGCGH; // 0x150
		// static const ::System::String* DJCBDJMACFH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDIOIKGHNFJ_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDIOIKGHNFJ__ONBIND_OFFSET))(this);
		}

		::System::Void PFJDLLGFCOD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDIOIKGHNFJ_PFJDLLGFCOD_OFFSET))(this);
		}

	};
