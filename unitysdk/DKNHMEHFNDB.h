#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DKNHMEHFNDB;
class FCOEMCEDLNL;

#define DKNHMEHFNDB_CTOR_OFFSET UNITYSDK_OFFSET(0x1CD3D350)
#define DKNHMEHFNDB_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CD3D0D0)

	class DKNHMEHFNDB : public ::System::Object
	{
	public:
		::System::UInt32 AANLPEHOHLJ; // 0x10
		::System::UInt32 HHPDHDGDLIB; // 0x14
		::System::UInt32 EBPBFHEJBJB; // 0x18
		::System::UInt32 PGGOELLGAIG; // 0x1C
		::System::UInt32 ILGGFNPAOHH; // 0x20
		::System::UInt32 MNAHFIGOHML; // 0x24
		::System::UInt32 GCAKGHCLCHI; // 0x28
		::System::UInt32 OLGFKMDAELN; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKNHMEHFNDB_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::DKNHMEHFNDB* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::DKNHMEHFNDB*))((::PBYTE)hIl2Cpp + DKNHMEHFNDB_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
