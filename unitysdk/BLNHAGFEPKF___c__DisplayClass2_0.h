#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BLNHAGFEPKF;

#define BLNHAGFEPKF___C__DISPLAYCLASS2_0_CTOR_OFFSET UNITYSDK_OFFSET(0xBA7E500)
#define BLNHAGFEPKF___C__DISPLAYCLASS2_0__ONTASKBEGIN_B__0_OFFSET UNITYSDK_OFFSET(0xBA7EB90)

inline static constexpr unsigned int BLNHAGFEPKF___c__DisplayClass2_0_TypeDefinitionIndex = 53078;

	class BLNHAGFEPKF___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::BLNHAGFEPKF* __4__this; // 0x10
		::System::UInt32 preMissionID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLNHAGFEPKF___C__DISPLAYCLASS2_0_CTOR_OFFSET))(this);
		}

		::System::Void _OnTaskBegin_b__0(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BLNHAGFEPKF___C__DISPLAYCLASS2_0__ONTASKBEGIN_B__0_OFFSET))(this, a1);
		}

	};
