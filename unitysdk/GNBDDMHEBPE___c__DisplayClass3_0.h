#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GNBDDMHEBPE;
namespace System { class Exception; }
namespace System { class Object; }

#define GNBDDMHEBPE___C__DISPLAYCLASS3_0_CTOR_OFFSET UNITYSDK_OFFSET(0x16CA3190)
#define GNBDDMHEBPE___C__DISPLAYCLASS3_0__ONTASKBEGIN_B__0_OFFSET UNITYSDK_OFFSET(0x16CA33B0)
#define GNBDDMHEBPE___C__DISPLAYCLASS3_0__ONTASKBEGIN_B__1_OFFSET UNITYSDK_OFFSET(0x16CA33F0)

inline static constexpr unsigned int GNBDDMHEBPE___c__DisplayClass3_0_TypeDefinitionIndex = 53843;

	class GNBDDMHEBPE___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::GNBDDMHEBPE* __4__this; // 0x10
		::System::Object* execution; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNBDDMHEBPE___C__DISPLAYCLASS3_0_CTOR_OFFSET))(this);
		}

		::System::Void _OnTaskBegin_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNBDDMHEBPE___C__DISPLAYCLASS3_0__ONTASKBEGIN_B__0_OFFSET))(this);
		}

		::System::Void _OnTaskBegin_b__1(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + GNBDDMHEBPE___C__DISPLAYCLASS3_0__ONTASKBEGIN_B__1_OFFSET))(this, a1);
		}

	};
