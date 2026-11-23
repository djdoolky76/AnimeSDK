#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkDragDropTriggerHandler.h"
#include "unitysdk/B611DB0AB1B594D1.h"
#include "unitysdk/EF295B11345CD6F6.h"
#include "unitysdk/EF4CA5922781B1FE.h"

class A1D0AD9E2B3E19D9;
class A562B26E18EFF98F;
class AkEventCallbackData;
namespace AK::Wwise { class BaseType; }
namespace AK::Wwise { class Event; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define AKEVENT_A394279F0714B85B_1_OFFSET UNITYSDK_OFFSET(0x2917600)
#define AKEVENT_A394279F0714B85B_OFFSET UNITYSDK_OFFSET(0x2917550)
#define AKEVENT_A58A6DA0FD8844FB_OFFSET UNITYSDK_OFFSET(0x2917060)
#define AKEVENT_B60CEDA00387A3B9_OFFSET UNITYSDK_OFFSET(0x17A62C0)
#define AKEVENT_BA5D948B943E88B1_OFFSET UNITYSDK_OFFSET(0x29171D0)
#define AKEVENT_BC423F9EB6BAAEB1_OFFSET UNITYSDK_OFFSET(0x29177B0)
#define AKEVENT_BE30555D8BCD4588_OFFSET UNITYSDK_OFFSET(0x17919E0)
#define AKEVENT_F328E4D8818B1E12_OFFSET UNITYSDK_OFFSET(0x2917450)
#define AKEVENT_FBB7DD023CC868DE_OFFSET UNITYSDK_OFFSET(0x29177D0)
#define AKEVENT_FDBCDBBFE02CD51A_OFFSET UNITYSDK_OFFSET(0x2915CB0)
#define AKEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x29176C0)

inline static constexpr unsigned int AkEvent_TypeDefinitionIndex = 20464;

class AkEvent : public ::AkDragDropTriggerHandler
{
public:
	::EF4CA5922781B1FE actionOnEventType; // 0x38
	::EF295B11345CD6F6 curveInterpolation; // 0x3C
	::System::Boolean enableActionOnEvent; // 0x40
	::System::Byte _padding0[0x7];
	::AK::Wwise::Event* data; // 0x48
	::System::Boolean useCallbacks; // 0x50
	::System::Byte _padding1[0x7];
	::System::Collections::Generic::List_1<::System::Object*>* Callbacks; // 0x58
	::System::UInt32 playingId; // 0x60
	::System::Byte _padding2[0x4];
	::UnityEngine::GameObject* soundEmitterObject; // 0x68
	::System::Single transitionDuration; // 0x70
	::System::Byte _padding3[0x4];
	::A1D0AD9E2B3E19D9* AA6AE968E422CC01; // 0x78
	::System::Int32 eventIdInternal; // 0x80
	::System::Byte _padding4[0x4];
	::Il2CppArray<::System::Byte>* valueGuidInternal; // 0x88
	::AkEventCallbackData* m_callbackDataInternal; // 0x90

	::AK::Wwise::BaseType* B60CEDA00387A3B9()
	{
		return ((::AK::Wwise::BaseType*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKEVENT_B60CEDA00387A3B9_OFFSET))(this);
	}

	::System::Void A58A6DA0FD8844FB(::System::Object* F4860F6B04C593FA, ::B611DB0AB1B594D1 F8CA7D21DC4D02B8, ::A562B26E18EFF98F* AD79F219B802C145)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::B611DB0AB1B594D1, ::A562B26E18EFF98F*))((::PBYTE)hIl2Cpp + AKEVENT_A58A6DA0FD8844FB_OFFSET))(this, F4860F6B04C593FA, F8CA7D21DC4D02B8, AD79F219B802C145);
	}

	::System::Int32 BC423F9EB6BAAEB1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKEVENT_BC423F9EB6BAAEB1_OFFSET))(this);
	}

	::System::Void A394279F0714B85B(::System::Int32 FE60FED905D9867C)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AKEVENT_A394279F0714B85B_OFFSET))(this, FE60FED905D9867C);
	}

	::AkEventCallbackData* BE30555D8BCD4588()
	{
		return ((::AkEventCallbackData*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKEVENT_BE30555D8BCD4588_OFFSET))(this);
	}

	::System::Void BA5D948B943E88B1(::UnityEngine::GameObject* AACD1FD78C470A3F)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + AKEVENT_BA5D948B943E88B1_OFFSET))(this, AACD1FD78C470A3F);
	}

	::System::Void F328E4D8818B1E12()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKEVENT_F328E4D8818B1E12_OFFSET))(this);
	}

	::System::Void FDBCDBBFE02CD51A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKEVENT_FDBCDBBFE02CD51A_OFFSET))(this);
	}

	::System::Void A394279F0714B85B_1(::System::Int32 FE60FED905D9867C, ::EF295B11345CD6F6 A540C0DAD671FDB9)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::EF295B11345CD6F6))((::PBYTE)hIl2Cpp + AKEVENT_A394279F0714B85B_1_OFFSET))(this, FE60FED905D9867C, A540C0DAD671FDB9);
	}

	::Il2CppArray<::System::Byte>* FBB7DD023CC868DE()
	{
		return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKEVENT_FBB7DD023CC868DE_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKEVENT__CTOR_OFFSET))(this);
	}
};
