#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E68AA4EB51923C98/E4B55EE0EC5CC11E.h"
#include "unitysdk/E68AA4EB51923C98/F842B80EDFD17A01.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BB7311E0B052ED82.h"

namespace System { class String; }

#define AF7B8BF0F7AC826F_AAA67EE098557B85_OFFSET UNITYSDK_OFFSET(0x22BAED0)
#define AF7B8BF0F7AC826F__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int AF7B8BF0F7AC826F_TypeDefinitionIndex = 7190;

class AF7B8BF0F7AC826F : public ::System::Object
{
public:
	::System::String* E2D96E7BBAB50BB5; // 0x10
	::System::UInt32 BB717F5618C308EA; // 0x18
	::E68AA4EB51923C98::E4B55EE0EC5CC11E F4BE07D022C423F8; // 0x1C
	::System::UInt32 FD4F2B39F4DE8BCB; // 0x20
	::System::Byte _padding0[0x4];
	::System::String* F5BF4E7C0FAC037C; // 0x28
	::System::String* E50EFA502BF8388A; // 0x30
	::E68AA4EB51923C98::F842B80EDFD17A01 AFC70F98255B15D1; // 0x38
	::System::Byte _padding1[0x4];
	::System::String* EDF42E99F8C5A3C7; // 0x40
	::System::String* BD7ED468CE07B01B; // 0x48
	::System::String* A060CAAFD8E4C643; // 0x50
	::System::UInt32 B697EDD9A2281837; // 0x58
	::System::Byte _padding2[0x4];
	::System::String* B638F89107D43948; // 0x60
	::System::String* A7719AFBF0228BD1; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AF7B8BF0F7AC826F__CTOR_OFFSET))(this);
	}

	static ::System::Void AAA67EE098557B85(::BB7311E0B052ED82& F99B0FE319DB74D1, ::AF7B8BF0F7AC826F* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BB7311E0B052ED82&, ::AF7B8BF0F7AC826F*))((::PBYTE)hIl2Cpp + AF7B8BF0F7AC826F_AAA67EE098557B85_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}
};
