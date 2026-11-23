#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BB7311E0B052ED82.h"

#define BAF984D71F3816B4_AAA67EE098557B85_OFFSET UNITYSDK_OFFSET(0x21DFD80)
#define BAF984D71F3816B4__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int BAF984D71F3816B4_TypeDefinitionIndex = 8960;

class BAF984D71F3816B4 : public ::System::Object
{
public:
	::System::UInt32 A8BD29A7702C203C; // 0x10
	::System::UInt32 E7C97E75A680C428; // 0x14

	static ::System::Void AAA67EE098557B85(::BB7311E0B052ED82& F99B0FE319DB74D1, ::BAF984D71F3816B4* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BB7311E0B052ED82&, ::BAF984D71F3816B4*))((::PBYTE)hIl2Cpp + BAF984D71F3816B4_AAA67EE098557B85_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAF984D71F3816B4__CTOR_OFFSET))(this);
	}
};
