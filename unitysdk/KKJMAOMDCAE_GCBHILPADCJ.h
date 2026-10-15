#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }

#define KKJMAOMDCAE_GCBHILPADCJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB4CE9F0)
#define KKJMAOMDCAE_GCBHILPADCJ_IFNCPHGCFJL_OFFSET UNITYSDK_OFFSET(0xB4CE8A0)

	class KKJMAOMDCAE_GCBHILPADCJ : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Object*>* BackRoles; // 0x10
		::Il2CppArray<::System::Object*>* FrontRoles; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKJMAOMDCAE_GCBHILPADCJ_CTOR_OFFSET))(this);
		}

		::System::Boolean IFNCPHGCFJL(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KKJMAOMDCAE_GCBHILPADCJ_IFNCPHGCFJL_OFFSET))(this, a1);
		}

	};
