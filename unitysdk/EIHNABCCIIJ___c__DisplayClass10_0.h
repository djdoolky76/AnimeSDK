#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PBLPDPEOBCB;
namespace System { template <typename T> class Action_1; }

#define EIHNABCCIIJ___C__DISPLAYCLASS10_0_CTOR_OFFSET UNITYSDK_OFFSET(0x19A9B280)
#define EIHNABCCIIJ___C__DISPLAYCLASS10_0__ADDCHANGECYCLEHANDLER_B__0_OFFSET UNITYSDK_OFFSET(0x19A9B530)

inline static constexpr unsigned int EIHNABCCIIJ___c__DisplayClass10_0_TypeDefinitionIndex = 77164;

	class EIHNABCCIIJ___c__DisplayClass10_0 : public ::System::Object
	{
	public:
		::System::Action_1<::PBLPDPEOBCB*>* handler; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIHNABCCIIJ___C__DISPLAYCLASS10_0_CTOR_OFFSET))(this);
		}

		::System::Void _AddChangeCycleHandler_b__0(::System::UInt16 a1, ::PBLPDPEOBCB* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::PBLPDPEOBCB*))((::PBYTE)hIl2Cpp + EIHNABCCIIJ___C__DISPLAYCLASS10_0__ADDCHANGECYCLEHANDLER_B__0_OFFSET))(this, a1, a2);
		}

	};
