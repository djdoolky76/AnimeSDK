#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"
namespace System { class Exception; }
namespace System { class String; }

#define NFKDMCDDEKI_CTOR_1_OFFSET UNITYSDK_OFFSET(0xBB995B0)
#define NFKDMCDDEKI_CTOR_OFFSET UNITYSDK_OFFSET(0xBB994D0)
#define NFKDMCDDEKI_GET_CMDID_OFFSET UNITYSDK_OFFSET(0xBB994C0)

	class NFKDMCDDEKI : public ::System::Exception
	{
	public:
		::System::UInt16 _CmdID_k__BackingField; // 0x88
		::System::Void _ctor(::System::UInt16 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::String*))((::PBYTE)hIl2Cpp + NFKDMCDDEKI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1(::System::UInt16 a1, ::System::String* a2, ::System::Exception* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + NFKDMCDDEKI_CTOR_1_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt16 get_CmdID()
		{
			return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + NFKDMCDDEKI_GET_CMDID_OFFSET))(this);
		}

	};
