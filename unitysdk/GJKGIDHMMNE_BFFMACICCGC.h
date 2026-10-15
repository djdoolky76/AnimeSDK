#pragma once
#include "unitysdk/unitysdk.h"
class PHHBNPBBKGE;
namespace System { class Object; }

#define GJKGIDHMMNE_BFFMACICCGC_CTOR_OFFSET UNITYSDK_OFFSET(0x2E7C170)

	struct alignas(8) GJKGIDHMMNE_BFFMACICCGC
	{
		::PHHBNPBBKGE* LLPIGJHNPNN; // 0x10
		::System::UInt32 DLAIECHBNPP; // 0x18
		::System::UInt16 ABJOBBCPKLD; // 0x1C
		::System::Byte _padding0[0x2];
		::System::UInt32 GFOIPPDONCM; // 0x20
		::System::Byte _padding1[0x4];
		::System::Object* INMGJAONFMH; // 0x28
		::System::Void _ctor(::PHHBNPBBKGE* a1, ::System::UInt32 a2, ::System::UInt16 a3, ::System::UInt32 a4, ::System::Object* a5)
		{
			return ((::System::Void(*)(::PVOID, ::PHHBNPBBKGE*, ::System::UInt32, ::System::UInt16, ::System::UInt32, ::System::Object*))((::PBYTE)hIl2Cpp + GJKGIDHMMNE_BFFMACICCGC_CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

	};
