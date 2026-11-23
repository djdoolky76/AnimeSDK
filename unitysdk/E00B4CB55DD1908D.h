#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"

namespace System { class String; }

#define E00B4CB55DD1908D_A62CA3BD61F86784_OFFSET UNITYSDK_OFFSET(0x165A480)
#define E00B4CB55DD1908D_AD9B4D7056079039_OFFSET UNITYSDK_OFFSET(0x165A3B0)
#define E00B4CB55DD1908D_BAA7DB851DA3FBB5_OFFSET UNITYSDK_OFFSET(0x165A410)
#define E00B4CB55DD1908D_BCD326D85069D8DB_OFFSET UNITYSDK_OFFSET(0x165A440)
#define E00B4CB55DD1908D__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int E00B4CB55DD1908D_TypeDefinitionIndex = 833;

class E00B4CB55DD1908D : public ::E379DE61A548837D
{
public:
	::System::String* B8C8A59DBE4267F5; // 0x38
	::System::Boolean B655F4360CDB51C3; // 0x40

	::System::String* BAA7DB851DA3FBB5()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + E00B4CB55DD1908D_BAA7DB851DA3FBB5_OFFSET))(this);
	}

	::System::Boolean AD9B4D7056079039()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + E00B4CB55DD1908D_AD9B4D7056079039_OFFSET))(this);
	}

	::System::Void BCD326D85069D8DB(::System::Boolean E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + E00B4CB55DD1908D_BCD326D85069D8DB_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E00B4CB55DD1908D__CTOR_OFFSET))(this);
	}

	::System::Void A62CA3BD61F86784(::System::String* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + E00B4CB55DD1908D_A62CA3BD61F86784_OFFSET))(this, E937D4885DAA1AE8);
	}
};
