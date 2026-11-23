#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/B10CBCABA0E1C058.h"
#include "unitysdk/System/Nullable_1.h"

namespace System { class String; }

#define EF265870BA04B910_BA4F04061D79CABF_OFFSET UNITYSDK_OFFSET(0x17D5EA0)
#define EF265870BA04B910_FA15070E839D45D8_OFFSET UNITYSDK_OFFSET(0x17D6400)
#define EF265870BA04B910_FFC8F57E8D4599A9_1_OFFSET UNITYSDK_OFFSET(0x29E7200)
#define EF265870BA04B910_FFC8F57E8D4599A9_OFFSET UNITYSDK_OFFSET(0x29E70E0)
#define EF265870BA04B910__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int EF265870BA04B910_TypeDefinitionIndex = 15775;

class EF265870BA04B910 : public ::System::Object
{
public:
	::System::String* FDD37C3BE65A7510; // 0x10

	::System::String* BA4F04061D79CABF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EF265870BA04B910_BA4F04061D79CABF_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EF265870BA04B910__CTOR_OFFSET))(this);
	}

	::System::Void FFC8F57E8D4599A9(::System::Object* BEEE7A5A60941632)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EF265870BA04B910_FFC8F57E8D4599A9_OFFSET))(this, BEEE7A5A60941632);
	}

	::System::Void FFC8F57E8D4599A9_1(::System::Nullable_1<::B10CBCABA0E1C058> BEEE7A5A60941632)
	{
		return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::B10CBCABA0E1C058>))((::PBYTE)hIl2Cpp + EF265870BA04B910_FFC8F57E8D4599A9_1_OFFSET))(this, BEEE7A5A60941632);
	}

	::System::Void FA15070E839D45D8(::System::String* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EF265870BA04B910_FA15070E839D45D8_OFFSET))(this, E937D4885DAA1AE8);
	}
};
