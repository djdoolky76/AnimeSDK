#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BA764B4A67FFE28D.h"

#define ABC_VIEW_MONOVIEW_FB2085AAD8108177_F1A90A1CBC8A9B14_OFFSET UNITYSDK_OFFSET(0x2702540)
#define ABC_VIEW_MONOVIEW_FB2085AAD8108177_F23375AC3A8FAEB8_OFFSET UNITYSDK_OFFSET(0x1925A50)
#define ABC_VIEW_MONOVIEW_FB2085AAD8108177__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

namespace ABC::View
{
	inline static constexpr unsigned int MonoView_FB2085AAD8108177_TypeDefinitionIndex = 2824;

	class MonoView_FB2085AAD8108177 : public ::BA764B4A67FFE28D
	{
	public:
		::System::Boolean BE3CD47CF6A602FA; // 0x28

		::System::Void F23375AC3A8FAEB8(::System::Boolean E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ABC_VIEW_MONOVIEW_FB2085AAD8108177_F23375AC3A8FAEB8_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void F1A90A1CBC8A9B14(::System::Single A63A2A070210EF43)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ABC_VIEW_MONOVIEW_FB2085AAD8108177_F1A90A1CBC8A9B14_OFFSET))(this, A63A2A070210EF43);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_VIEW_MONOVIEW_FB2085AAD8108177__CTOR_OFFSET))(this);
		}
	};
}
