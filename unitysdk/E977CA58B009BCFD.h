#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EFC4AEA2121EC272.h"

namespace ABC::UI { class MonoButton; }
namespace ABC::UI { class MonoLocalizedTmp; }
namespace ABC::UI { class MonoUIAutoView; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine { class Canvas; }

#define E977CA58B009BCFD_A0078FFEEE7A0DC3_OFFSET UNITYSDK_OFFSET(0x197B6A0)
#define E977CA58B009BCFD_A54D936318FAF9E3_OFFSET UNITYSDK_OFFSET(0x197B4C0)
#define E977CA58B009BCFD_AFF6FCDB9A1621C3_OFFSET UNITYSDK_OFFSET(0x197B740)
#define E977CA58B009BCFD_F6A675B119E39F53_OFFSET UNITYSDK_OFFSET(0x197B650)
#define E977CA58B009BCFD__CTOR_OFFSET UNITYSDK_OFFSET(0x16665F0)

inline static constexpr unsigned int E977CA58B009BCFD_TypeDefinitionIndex = 1627;

class E977CA58B009BCFD : public ::EFC4AEA2121EC272
{
public:
	::System::Int32 A02AF894637B3DAE; // 0x80
	::System::Boolean E6D4EC30D627133D; // 0x84
	::System::Byte _padding0[0x3];
	::System::Action_2<::System::Int32, ::System::Boolean>* FCCD2716B1B4CDF5; // 0x88
	::ABC::UI::MonoButton* E1CDF9565CA2AC4A; // 0x90
	::UnityEngine::Canvas* A5C3F2CB449C245F; // 0x98
	::ABC::UI::MonoLocalizedTmp* B544C31DA5CE7E54; // 0xA0

	::System::Void AFF6FCDB9A1621C3(::System::Int32 B48C66E5FB2449C6, ::System::String* B383F0530E7FBDBD, ::System::Action_2<::System::Int32, ::System::Boolean>* FABBF4F55603A392)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::Action_2<::System::Int32, ::System::Boolean>*))((::PBYTE)hIl2Cpp + E977CA58B009BCFD_AFF6FCDB9A1621C3_OFFSET))(this, B48C66E5FB2449C6, B383F0530E7FBDBD, FABBF4F55603A392);
	}

	::System::Void A54D936318FAF9E3(::ABC::UI::MonoUIAutoView* AE442F7D881522D8)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::UI::MonoUIAutoView*))((::PBYTE)hIl2Cpp + E977CA58B009BCFD_A54D936318FAF9E3_OFFSET))(this, AE442F7D881522D8);
	}

	::System::Void F6A675B119E39F53()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E977CA58B009BCFD_F6A675B119E39F53_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E977CA58B009BCFD__CTOR_OFFSET))(this);
	}

	::System::Void A0078FFEEE7A0DC3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E977CA58B009BCFD_A0078FFEEE7A0DC3_OFFSET))(this);
	}
};
