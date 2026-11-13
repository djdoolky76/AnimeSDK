#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class LuaUIGameFlowContext; }
namespace RPG::Client::Promises { class Promise; }
namespace System { class Action; }
namespace System { class Exception; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define BJIAFAFAFNE___C__DISPLAYCLASS31_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1A634030)
#define BJIAFAFAFNE___C__DISPLAYCLASS31_0___ASYNCSWITCHSECTIONUI_B__0_OFFSET UNITYSDK_OFFSET(0x1A634250)
#define BJIAFAFAFNE___C__DISPLAYCLASS31_0___ASYNCSWITCHSECTIONUI_B__1_OFFSET UNITYSDK_OFFSET(0x1A6343B0)
#define BJIAFAFAFNE___C__DISPLAYCLASS31_0___ASYNCSWITCHSECTIONUI_B__2_OFFSET UNITYSDK_OFFSET(0x1A634410)
#define BJIAFAFAFNE___C__DISPLAYCLASS31_0___ASYNCSWITCHSECTIONUI_B__3_OFFSET UNITYSDK_OFFSET(0x1A634430)
#define BJIAFAFAFNE___C__DISPLAYCLASS31_0___ASYNCSWITCHSECTIONUI_B__4_OFFSET UNITYSDK_OFFSET(0x1A634370)
#define BJIAFAFAFNE___C__DISPLAYCLASS31_0___ASYNCSWITCHSECTIONUI_B__5_OFFSET UNITYSDK_OFFSET(0x1A634390)

inline static constexpr unsigned int BJIAFAFAFNE___c__DisplayClass31_0_TypeDefinitionIndex = 78789;

	class BJIAFAFAFNE___c__DisplayClass31_0 : public ::System::Object
	{
	public:
		::RPG::Client::LuaUIGameFlowContext* nextUIContext; // 0x10
		::RPG::Client::LuaUIGameFlowContext* lastUIContext; // 0x18
		::Il2CppArray<::System::Object*>* args; // 0x20
		::System::String* uiName; // 0x28
		::System::Action* __9__4; // 0x30
		::RPG::Client::Promises::Promise* result; // 0x38
		::System::Action_1<::System::Exception*>* __9__5; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJIAFAFAFNE___C__DISPLAYCLASS31_0_CTOR_OFFSET))(this);
		}

		::System::Void __AsyncSwitchSectionUI_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJIAFAFAFNE___C__DISPLAYCLASS31_0___ASYNCSWITCHSECTIONUI_B__0_OFFSET))(this);
		}

		::System::Void __AsyncSwitchSectionUI_b__4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJIAFAFAFNE___C__DISPLAYCLASS31_0___ASYNCSWITCHSECTIONUI_B__4_OFFSET))(this);
		}

		::System::Void __AsyncSwitchSectionUI_b__5(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + BJIAFAFAFNE___C__DISPLAYCLASS31_0___ASYNCSWITCHSECTIONUI_B__5_OFFSET))(this, a1);
		}

		::System::Void __AsyncSwitchSectionUI_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJIAFAFAFNE___C__DISPLAYCLASS31_0___ASYNCSWITCHSECTIONUI_B__1_OFFSET))(this);
		}

		::System::Void __AsyncSwitchSectionUI_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJIAFAFAFNE___C__DISPLAYCLASS31_0___ASYNCSWITCHSECTIONUI_B__2_OFFSET))(this);
		}

		::System::Void __AsyncSwitchSectionUI_b__3(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + BJIAFAFAFNE___C__DISPLAYCLASS31_0___ASYNCSWITCHSECTIONUI_B__3_OFFSET))(this, a1);
		}

	};
