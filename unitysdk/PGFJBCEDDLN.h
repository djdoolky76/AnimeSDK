#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PGFJBCEDDLN_CTOR_OFFSET UNITYSDK_OFFSET(0x1C9E8F00)

	class PGFJBCEDDLN : public ::System::Object
	{
	public:
		::System::String* AADAFGFFODK; // 0x10
		::System::Collections::Generic::List_1<::System::Int32>* LPCOFGEEBIP; // 0x18
		::System::UInt32 BOKJJKFCFME; // 0x20
		::System::UInt32 NALMBOOCCIN; // 0x24
		::System::Int32 BHKEBNJFACD; // 0x28
		::System::Int32 GOHPCPGPIFB; // 0x2C
		::System::Int32 DDEPKGPNDEA; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGFJBCEDDLN_CTOR_OFFSET))(this);
		}

	};
