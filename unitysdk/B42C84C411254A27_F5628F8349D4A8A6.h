#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define B42C84C411254A27_F5628F8349D4A8A6_B4D6B083BC1C3A15_OFFSET UNITYSDK_OFFSET(0x3AC5F30)
#define B42C84C411254A27_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x3AC9E60)
#define B42C84C411254A27_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int B42C84C411254A27_F5628F8349D4A8A6_TypeDefinitionIndex = 12130;

class B42C84C411254A27_F5628F8349D4A8A6 : public ::System::Object
{
public:
	static ::B42C84C411254A27_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
	{
		return (::B42C84C411254A27_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(B42C84C411254A27_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Action_1<::Il2CppArray<::System::Byte>*>** StaticGet_B59FACF145743799()
	{
		return (::System::Action_1<::Il2CppArray<::System::Byte>*>**)Il2CppClass::FromTypeDefinitionIndex(B42C84C411254A27_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + B42C84C411254A27_F5628F8349D4A8A6__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B42C84C411254A27_F5628F8349D4A8A6__CTOR_OFFSET))(this);
	}

	::System::Void B4D6B083BC1C3A15(::Il2CppArray<::System::Byte>* F220A2D27F7C6B6C)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + B42C84C411254A27_F5628F8349D4A8A6_B4D6B083BC1C3A15_OFFSET))(this, F220A2D27F7C6B6C);
	}
};
