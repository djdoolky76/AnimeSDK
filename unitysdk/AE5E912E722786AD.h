#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BB7311E0B052ED82.h"

#define AE5E912E722786AD_AAA67EE098557B85_OFFSET UNITYSDK_OFFSET(0x1F1F6C0)
#define AE5E912E722786AD__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int AE5E912E722786AD_TypeDefinitionIndex = 8192;

class AE5E912E722786AD : public ::System::Object
{
public:
	::System::UInt32 FE2FB0D55556BFD9; // 0x10
	::System::UInt32 FEFDA56AC69A9292; // 0x14

	static ::System::Void AAA67EE098557B85(::BB7311E0B052ED82& F99B0FE319DB74D1, ::AE5E912E722786AD* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BB7311E0B052ED82&, ::AE5E912E722786AD*))((::PBYTE)hIl2Cpp + AE5E912E722786AD_AAA67EE098557B85_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AE5E912E722786AD__CTOR_OFFSET))(this);
	}
};
