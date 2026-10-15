#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JLCHPCEDGCL;
namespace System { class Action; }

#define JLCHPCEDGCL___C__DISPLAYCLASS3_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB232AB0)
#define JLCHPCEDGCL___C__DISPLAYCLASS3_0__CREATEANDSTARTLG_B__0_OFFSET UNITYSDK_OFFSET(0xB232F20)

inline static constexpr unsigned int JLCHPCEDGCL___c__DisplayClass3_0_TypeDefinitionIndex = 75478;

	class JLCHPCEDGCL___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::JLCHPCEDGCL* __4__this; // 0x10
		::System::Action* endCallback; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLCHPCEDGCL___C__DISPLAYCLASS3_0_CTOR_OFFSET))(this);
		}

		::System::Void _CreateAndStartLG_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLCHPCEDGCL___C__DISPLAYCLASS3_0__CREATEANDSTARTLG_B__0_OFFSET))(this);
		}

	};
