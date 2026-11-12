#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BLNHAGFEPKF;

#define BLNHAGFEPKF___C__DISPLAYCLASS2_0_CTOR_OFFSET UNITYSDK_OFFSET(0xC410710)
#define BLNHAGFEPKF___C__DISPLAYCLASS2_0__ONTASKBEGIN_B__0_OFFSET UNITYSDK_OFFSET(0xC410DA0)

inline static constexpr unsigned int BLNHAGFEPKF___c__DisplayClass2_0_TypeDefinitionIndex = 54239;

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
