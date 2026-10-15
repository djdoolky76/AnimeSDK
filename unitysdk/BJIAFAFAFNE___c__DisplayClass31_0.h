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

#define BJIAFAFAFNE___C__DISPLAYCLASS31_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB79B930)
#define BJIAFAFAFNE___C__DISPLAYCLASS31_0___ASYNCSWITCHSECTIONUI_B__0_OFFSET UNITYSDK_OFFSET(0xB79BB50)
#define BJIAFAFAFNE___C__DISPLAYCLASS31_0___ASYNCSWITCHSECTIONUI_B__1_OFFSET UNITYSDK_OFFSET(0xB79BCB0)
#define BJIAFAFAFNE___C__DISPLAYCLASS31_0___ASYNCSWITCHSECTIONUI_B__2_OFFSET UNITYSDK_OFFSET(0xB79BD10)
#define BJIAFAFAFNE___C__DISPLAYCLASS31_0___ASYNCSWITCHSECTIONUI_B__3_OFFSET UNITYSDK_OFFSET(0xB79BD30)
#define BJIAFAFAFNE___C__DISPLAYCLASS31_0___ASYNCSWITCHSECTIONUI_B__4_OFFSET UNITYSDK_OFFSET(0xB79BC70)
#define BJIAFAFAFNE___C__DISPLAYCLASS31_0___ASYNCSWITCHSECTIONUI_B__5_OFFSET UNITYSDK_OFFSET(0xB79BC90)

inline static constexpr unsigned int BJIAFAFAFNE___c__DisplayClass31_0_TypeDefinitionIndex = 76458;

	class BJIAFAFAFNE___c__DisplayClass31_0 : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Object*>* args; // 0x10
		::RPG::Client::LuaUIGameFlowContext* nextUIContext; // 0x18
		::RPG::Client::LuaUIGameFlowContext* lastUIContext; // 0x20
		::System::Action_1<::System::Exception*>* __9__5; // 0x28
		::System::String* uiName; // 0x30
		::System::Action* __9__4; // 0x38
		::RPG::Client::Promises::Promise* result; // 0x40
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
