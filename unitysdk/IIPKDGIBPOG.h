#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LNDHLHALKAK.h"
#include "unitysdk/RPG/Client/UIAdaptionIndentType.h"
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define IIPKDGIBPOG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x193F9000)
#define IIPKDGIBPOG_CTOR_OFFSET UNITYSDK_OFFSET(0x193F8FE0)
#define IIPKDGIBPOG_DCKKOACIAMK_OFFSET UNITYSDK_OFFSET(0x193F9120)
#define IIPKDGIBPOG_HGHJNNCFLBF_OFFSET UNITYSDK_OFFSET(0x193F9070)
#define IIPKDGIBPOG_IIJMNCPBNFP_OFFSET UNITYSDK_OFFSET(0x193F90D0)
#define IIPKDGIBPOG_JOLDEBJNCLL_OFFSET UNITYSDK_OFFSET(0x193F94A0)
#define IIPKDGIBPOG_OLCDMPBLPGH_OFFSET UNITYSDK_OFFSET(0x193F9170)
#define IIPKDGIBPOG_PFEKEEJINJD_OFFSET UNITYSDK_OFFSET(0x193F91C0)

inline static constexpr unsigned int IIPKDGIBPOG_TypeDefinitionIndex = 61360;

	class IIPKDGIBPOG : public ::LNDHLHALKAK
	{
	public:
		::System::Single LMFAOKNDKCI; // 0x30
		::System::Single DEMCJIALDIJ; // 0x34
		::System::Single BEBJDHGJDEA; // 0x38
		::System::Int32 BFPOCEDAOMA; // 0x3C
		::System::Boolean KBKJPNEEKFE; // 0x40
		::System::Boolean MKLAKDLBCII; // 0x41
		::System::Byte _padding0[0x2];
		::System::Single DKFEMNDGBEB; // 0x44
		::RPG::Client::UIAdaptionIndentType CDDBCCOLBLA; // 0x48
		::System::Single LDDFCBIMCKH; // 0x4C
		::System::Void _ctor(::UnityEngine::Transform* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::String*))((::PBYTE)hIl2Cpp + IIPKDGIBPOG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1(::UnityEngine::Transform* a1, ::System::String* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + IIPKDGIBPOG_CTOR_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void HGHJNNCFLBF(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IIPKDGIBPOG_HGHJNNCFLBF_OFFSET))(this, a1);
		}

		::System::Void IIJMNCPBNFP(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IIPKDGIBPOG_IIJMNCPBNFP_OFFSET))(this, a1);
		}

		::System::Single DCKKOACIAMK()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + IIPKDGIBPOG_DCKKOACIAMK_OFFSET))(this);
		}

		::System::Single OLCDMPBLPGH()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + IIPKDGIBPOG_OLCDMPBLPGH_OFFSET))(this);
		}

		::System::Void PFEKEEJINJD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIPKDGIBPOG_PFEKEEJINJD_OFFSET))(this);
		}

		::System::Void JOLDEBJNCLL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIPKDGIBPOG_JOLDEBJNCLL_OFFSET))(this);
		}

	};
