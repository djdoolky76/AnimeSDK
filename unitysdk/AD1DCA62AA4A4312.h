#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/A683259CDAD09E9F.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Action; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define AD1DCA62AA4A4312_F2BBE98D2420A60B_OFFSET UNITYSDK_OFFSET(0x3CA6CD0)
#define AD1DCA62AA4A4312_F381BB47A197CB93_OFFSET UNITYSDK_OFFSET(0x3CA6960)
#define AD1DCA62AA4A4312_FD6DD774014EBE04_OFFSET UNITYSDK_OFFSET(0x3CA6A30)
#define AD1DCA62AA4A4312__CCTOR_OFFSET UNITYSDK_OFFSET(0x3CA6C10)
#define AD1DCA62AA4A4312__CTOR_OFFSET UNITYSDK_OFFSET(0x30CCE30)

inline static constexpr unsigned int AD1DCA62AA4A4312_TypeDefinitionIndex = 11723;

struct alignas(4) AD1DCA62AA4A4312
{
	static ::System::Action_1<::System::Object*>** StaticGet_F3E8BEB4D259F5B1()
	{
		return (::System::Action_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(AD1DCA62AA4A4312_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	::A683259CDAD09E9F E8F3148A854C0045; // 0x10

	::System::Void FD6DD774014EBE04(::System::Action* F3CC6178234F35E2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + AD1DCA62AA4A4312_FD6DD774014EBE04_OFFSET))(this, F3CC6178234F35E2);
	}

	::System::Boolean F2BBE98D2420A60B()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AD1DCA62AA4A4312_F2BBE98D2420A60B_OFFSET))(this);
	}

	::System::Void F381BB47A197CB93()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AD1DCA62AA4A4312_F381BB47A197CB93_OFFSET))(this);
	}

	/*
	::System::Void _ctor(::A683259CDAD09E9F E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::A683259CDAD09E9F))((::PBYTE)hIl2Cpp + AD1DCA62AA4A4312__CTOR_OFFSET))(this, E937D4885DAA1AE8);
	}
	*/

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AD1DCA62AA4A4312__CCTOR_OFFSET))();
	}
};
