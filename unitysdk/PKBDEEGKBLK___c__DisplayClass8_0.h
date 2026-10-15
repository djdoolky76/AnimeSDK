#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IMFBPGDPEOI;
class PKBDEEGKBLK;

#define PKBDEEGKBLK___C__DISPLAYCLASS8_0_CTOR_OFFSET UNITYSDK_OFFSET(0xC2AB0B0)
#define PKBDEEGKBLK___C__DISPLAYCLASS8_0__REQUESTDRAW_B__0_OFFSET UNITYSDK_OFFSET(0xC2ABA60)

inline static constexpr unsigned int PKBDEEGKBLK___c__DisplayClass8_0_TypeDefinitionIndex = 61399;

	class PKBDEEGKBLK___c__DisplayClass8_0 : public ::System::Object
	{
	public:
		::PKBDEEGKBLK* __4__this; // 0x10
		::System::Int32 roundIndex; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKBDEEGKBLK___C__DISPLAYCLASS8_0_CTOR_OFFSET))(this);
		}

		::System::Void _RequestDraw_b__0(::IMFBPGDPEOI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IMFBPGDPEOI*))((::PBYTE)hIl2Cpp + PKBDEEGKBLK___C__DISPLAYCLASS8_0__REQUESTDRAW_B__0_OFFSET))(this, a1);
		}

	};
