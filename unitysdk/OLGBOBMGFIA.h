#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/DateTime.h"
namespace System { class String; }

#define OLGBOBMGFIA_CTOR_1_OFFSET UNITYSDK_OFFSET(0xBF086E0)
#define OLGBOBMGFIA_CTOR_OFFSET UNITYSDK_OFFSET(0xBF086B0)
#define OLGBOBMGFIA_FKKIEMPEONK_OFFSET UNITYSDK_OFFSET(0xBF08810)
#define OLGBOBMGFIA_GHGGDEANPHG_OFFSET UNITYSDK_OFFSET(0xBF08B30)
#define OLGBOBMGFIA_IKMEMLEJMBL_OFFSET UNITYSDK_OFFSET(0xBF087B0)
#define OLGBOBMGFIA_KBPKENJMPKC_OFFSET UNITYSDK_OFFSET(0xBF08BC0)

	class OLGBOBMGFIA : public ::System::Object
	{
	public:
		::System::String* MNDFOPKBHKP; // 0x10
		::System::Int32 JBCFPAEELBL; // 0x18
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OLGBOBMGFIA_CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + OLGBOBMGFIA_CTOR_1_OFFSET))(this, a1);
		}

		::System::Void IKMEMLEJMBL(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + OLGBOBMGFIA_IKMEMLEJMBL_OFFSET))(this, a1);
		}

		::System::Void GHGGDEANPHG(::System::Double a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double, ::System::Int32))((::PBYTE)hIl2Cpp + OLGBOBMGFIA_GHGGDEANPHG_OFFSET))(this, a1, a2);
		}

		::System::Void FKKIEMPEONK(::System::Int64 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64, ::System::Int32))((::PBYTE)hIl2Cpp + OLGBOBMGFIA_FKKIEMPEONK_OFFSET))(this, a1, a2);
		}

		::System::Void KBPKENJMPKC(::System::DateTime a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + OLGBOBMGFIA_KBPKENJMPKC_OFFSET))(this, a1);
		}

	};
