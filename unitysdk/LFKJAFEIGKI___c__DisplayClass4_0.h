#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define LFKJAFEIGKI___C__DISPLAYCLASS4_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB681870)
#define LFKJAFEIGKI___C__DISPLAYCLASS4_0__OPENBUFFSELECTWINDOW_B__0_OFFSET UNITYSDK_OFFSET(0xB681EC0)

inline static constexpr unsigned int LFKJAFEIGKI___c__DisplayClass4_0_TypeDefinitionIndex = 81516;

	class LFKJAFEIGKI___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::System::Action_1<::System::UInt32>* onSelect; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFKJAFEIGKI___C__DISPLAYCLASS4_0_CTOR_OFFSET))(this);
		}

		::System::Void _OpenBuffSelectWindow_b__0(::System::Object* a1, ::System::Int32 a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + LFKJAFEIGKI___C__DISPLAYCLASS4_0__OPENBUFFSELECTWINDOW_B__0_OFFSET))(this, a1, a2, a3);
		}

	};
