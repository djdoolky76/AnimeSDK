#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class A04FB906869DCF3A;
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define B12A457D15D51D59_FBB455B66EEECE06_E6B4F629D6EBB8BA_OFFSET UNITYSDK_OFFSET(0x1F66B20)
#define B12A457D15D51D59_FBB455B66EEECE06__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int B12A457D15D51D59_FBB455B66EEECE06_TypeDefinitionIndex = 7817;

class B12A457D15D51D59_FBB455B66EEECE06 : public ::System::Object
{
public:
	::System::String* B383F0530E7FBDBD; // 0x10
	::System::String* E7F13465F7E064E1; // 0x18
	::System::Action* A9AD4CF79441A92B; // 0x20
	::System::Action* F633B7B12FA9DCE2; // 0x28
	::System::Action* AC481EC8AEDE8A1C; // 0x30
	::System::String* F31F6CC5068CBA7B; // 0x38
	::System::String* BF826AA661AB900D; // 0x40
	::System::Boolean E705935F8EC78F7C; // 0x48
	::System::Boolean EF8628B367957DB6; // 0x49
	::System::Boolean AE607CFAD1AC8FD4; // 0x4A
	::System::Boolean AE7F5CA0B99DADED; // 0x4B
	::System::Byte _padding0[0x4];
	::System::String* FBB990A57769652A; // 0x50
	::System::Action_1<::System::Boolean>* FECA580A2DAD159C; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B12A457D15D51D59_FBB455B66EEECE06__CTOR_OFFSET))(this);
	}

	::System::Void E6B4F629D6EBB8BA(::A04FB906869DCF3A* F9ADA718944F49ED)
	{
		return ((::System::Void(*)(::PVOID, ::A04FB906869DCF3A*))((::PBYTE)hIl2Cpp + B12A457D15D51D59_FBB455B66EEECE06_E6B4F629D6EBB8BA_OFFSET))(this, F9ADA718944F49ED);
	}
};
