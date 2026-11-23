#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }

#define A0F28B7671C52743_AEB5299824FDD63A_INVOKE_OFFSET UNITYSDK_OFFSET(0x2911D30)
#define A0F28B7671C52743_AEB5299824FDD63A__CTOR_OFFSET UNITYSDK_OFFSET(0x3A10510)

inline static constexpr unsigned int A0F28B7671C52743_AEB5299824FDD63A_TypeDefinitionIndex = 12799;

class A0F28B7671C52743_AEB5299824FDD63A : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + A0F28B7671C52743_AEB5299824FDD63A__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::Void Invoke(::System::Object* B8334CB64332323A, ::System::Int32 BB8C609F76620E45, ::System::Int32 A0A0D02932F12CFD, ::System::Int32 F5EF7E29767E03BF, ::System::Int32 F0961C93719F7B0D)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + A0F28B7671C52743_AEB5299824FDD63A_INVOKE_OFFSET))(this, B8334CB64332323A, BB8C609F76620E45, A0A0D02932F12CFD, F5EF7E29767E03BF, F0961C93719F7B0D);
	}
};
