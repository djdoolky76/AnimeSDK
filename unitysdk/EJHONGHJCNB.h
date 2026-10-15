#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EJHONGHJCNB;
class FCOEMCEDLNL;
class FHJKNCMMMON;

#define EJHONGHJCNB_CTOR_OFFSET UNITYSDK_OFFSET(0x1CD90D20)
#define EJHONGHJCNB_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CD90B30)

	class EJHONGHJCNB : public ::System::Object
	{
	public:
		::FHJKNCMMMON* BBFOLEOPPPL; // 0x10
		::System::Int32 KBDAHAAAIBO; // 0x18
		::System::UInt32 PFDHNIJBGKO; // 0x1C
		::System::UInt32 LNKOLCOBLMO; // 0x20
		::System::UInt32 PHFMCACHFIJ; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJHONGHJCNB_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::EJHONGHJCNB* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::EJHONGHJCNB*))((::PBYTE)hIl2Cpp + EJHONGHJCNB_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
