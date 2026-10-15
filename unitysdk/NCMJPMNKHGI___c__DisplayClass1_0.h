#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HAJDFCHFBGN;
class KAKADGHNMFK;
namespace RPG::GameCore { class ChimeraDuelEntitiesFilterSelectorConfig; }

#define NCMJPMNKHGI___C__DISPLAYCLASS1_0_CTOR_OFFSET UNITYSDK_OFFSET(0xBB16B10)
#define NCMJPMNKHGI___C__DISPLAYCLASS1_0___SELECTTARGET_B__0_OFFSET UNITYSDK_OFFSET(0xBB16B30)

	class NCMJPMNKHGI___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::ChimeraDuelEntitiesFilterSelectorConfig* config; // 0x10
		::HAJDFCHFBGN* context; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCMJPMNKHGI___C__DISPLAYCLASS1_0_CTOR_OFFSET))(this);
		}

		::System::Boolean __SelectTarget_b__0(::KAKADGHNMFK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KAKADGHNMFK*))((::PBYTE)hIl2Cpp + NCMJPMNKHGI___C__DISPLAYCLASS1_0___SELECTTARGET_B__0_OFFSET))(this, a1);
		}

	};
