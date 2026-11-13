#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DOEOMHPIPKE;

#define EODJMJGICJL___C__DISPLAYCLASS1_0_CTOR_OFFSET UNITYSDK_OFFSET(0x16B1E960)
#define EODJMJGICJL___C__DISPLAYCLASS1_0__ONTASKBEGIN_B__0_OFFSET UNITYSDK_OFFSET(0x16B1F170)

inline static constexpr unsigned int EODJMJGICJL___c__DisplayClass1_0_TypeDefinitionIndex = 54097;

	class EODJMJGICJL___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::System::Int32 selectionIndex; // 0x10
		::System::UInt32 textJoinID; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EODJMJGICJL___C__DISPLAYCLASS1_0_CTOR_OFFSET))(this);
		}

		::System::Void _OnTaskBegin_b__0(::DOEOMHPIPKE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DOEOMHPIPKE*))((::PBYTE)hIl2Cpp + EODJMJGICJL___C__DISPLAYCLASS1_0__ONTASKBEGIN_B__0_OFFSET))(this, a1);
		}

	};
