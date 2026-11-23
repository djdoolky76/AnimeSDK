#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EFC4AEA2121EC272.h"
#include "unitysdk/System/Nullable_1.h"

namespace ABC::UI { class MonoButton; }
namespace ABC::UI { class MonoLocalizedTmp; }
namespace ABC::UI { class MonoUIAutoView; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::UI { class Image; }

#define F59F0279F19952B1_A47BCAA43ED7396C_OFFSET UNITYSDK_OFFSET(0x223F9B0)
#define F59F0279F19952B1_A54D936318FAF9E3_OFFSET UNITYSDK_OFFSET(0x223F730)
#define F59F0279F19952B1_B950FF9810FC6646_OFFSET UNITYSDK_OFFSET(0x223F670)
#define F59F0279F19952B1_EC3033C0485522FB_OFFSET UNITYSDK_OFFSET(0x223FA70)
#define F59F0279F19952B1_F14BEFCB596EE4D7_OFFSET UNITYSDK_OFFSET(0x223F940)
#define F59F0279F19952B1_F6A675B119E39F53_OFFSET UNITYSDK_OFFSET(0x223F8F0)
#define F59F0279F19952B1__CTOR_OFFSET UNITYSDK_OFFSET(0x16665F0)

inline static constexpr unsigned int F59F0279F19952B1_TypeDefinitionIndex = 9154;

class F59F0279F19952B1 : public ::EFC4AEA2121EC272
{
public:
	::System::Action_1<::System::UInt32>* F77A8D4F375A9C96; // 0x80
	::System::UInt32 B424ECCB5F808A98; // 0x88
	::System::Byte _padding0[0x4];
	::ABC::UI::MonoButton* E226D7732057BA40; // 0x90
	::UnityEngine::UI::Image* B1C90912248FE9DF; // 0x98
	::ABC::UI::MonoLocalizedTmp* ED55DDA4ADCD3702; // 0xA0
	::ABC::UI::MonoLocalizedTmp* A0A10CC0FA0BF3B1; // 0xA8

	::System::Void A47BCAA43ED7396C(::System::Collections::Generic::List_1<::System::UInt32>* B9CAB81984C2190C)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + F59F0279F19952B1_A47BCAA43ED7396C_OFFSET))(this, B9CAB81984C2190C);
	}

	::System::Void F14BEFCB596EE4D7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F59F0279F19952B1_F14BEFCB596EE4D7_OFFSET))(this);
	}

	::System::Void A54D936318FAF9E3(::ABC::UI::MonoUIAutoView* AE442F7D881522D8)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::UI::MonoUIAutoView*))((::PBYTE)hIl2Cpp + F59F0279F19952B1_A54D936318FAF9E3_OFFSET))(this, AE442F7D881522D8);
	}

	::System::Void F6A675B119E39F53()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F59F0279F19952B1_F6A675B119E39F53_OFFSET))(this);
	}

	::System::Void EC3033C0485522FB(::System::UInt32 EA3C9D11E469EAA2, ::System::Nullable_1<::System::Int32> A4EDE703FF6621CF, ::System::Collections::Generic::List_1<::System::UInt32>* E82CF65B219857A0, ::System::Action_1<::System::UInt32>* F330E22437B58CFD, ::System::Boolean ABEC171B3A2BECA0)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Nullable_1<::System::Int32>, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Action_1<::System::UInt32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + F59F0279F19952B1_EC3033C0485522FB_OFFSET))(this, EA3C9D11E469EAA2, A4EDE703FF6621CF, E82CF65B219857A0, F330E22437B58CFD, ABEC171B3A2BECA0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F59F0279F19952B1__CTOR_OFFSET))(this);
	}

	::System::Void B950FF9810FC6646()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F59F0279F19952B1_B950FF9810FC6646_OFFSET))(this);
	}
};
