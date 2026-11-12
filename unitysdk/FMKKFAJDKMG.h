#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RedDotType.h"
#include "unitysdk/System/Object.h"
class JLODHPMMJFM;
namespace R3 { template <typename T> class ReactiveProperty_1; }
namespace System { class Action; }
namespace System { class String; }

#define FMKKFAJDKMG_AFADJMFGCGN_OFFSET UNITYSDK_OFFSET(0x167D15B0)
#define FMKKFAJDKMG_CTOR_OFFSET UNITYSDK_OFFSET(0x167D15F0)
#define FMKKFAJDKMG_DISPOSE_OFFSET UNITYSDK_OFFSET(0x167D19A0)
#define FMKKFAJDKMG_EGBHEPJHELB_OFFSET UNITYSDK_OFFSET(0x167D18A0)
#define FMKKFAJDKMG_GET_REDDOTTYPE_OFFSET UNITYSDK_OFFSET(0x167D15A0)
#define FMKKFAJDKMG_NOHIKPFNDLL_OFFSET UNITYSDK_OFFSET(0x167D17B0)

inline static constexpr unsigned int FMKKFAJDKMG_TypeDefinitionIndex = 81968;

	class FMKKFAJDKMG : public ::System::Object
	{
	public:
		::System::Action* KLCCHKCJDHC; // 0x10
		::System::String* NOIGFGJJDLB; // 0x18
		::JLODHPMMJFM* MHBFNKIFLNN; // 0x20
		::R3::ReactiveProperty_1<::RPG::GameCore::RedDotType>* _RedDotType_k__BackingField; // 0x28
		::System::Void _ctor(::JLODHPMMJFM* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::JLODHPMMJFM*, ::System::String*))((::PBYTE)hIl2Cpp + FMKKFAJDKMG_CTOR_OFFSET))(this, a1, a2);
		}

		::R3::ReactiveProperty_1<::RPG::GameCore::RedDotType>* get_RedDotType()
		{
			return ((::R3::ReactiveProperty_1<::RPG::GameCore::RedDotType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FMKKFAJDKMG_GET_REDDOTTYPE_OFFSET))(this);
		}

		::System::String* AFADJMFGCGN()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FMKKFAJDKMG_AFADJMFGCGN_OFFSET))(this);
		}

		::System::Void EGBHEPJHELB(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FMKKFAJDKMG_EGBHEPJHELB_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMKKFAJDKMG_DISPOSE_OFFSET))(this);
		}

		::System::Void NOHIKPFNDLL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMKKFAJDKMG_NOHIKPFNDLL_OFFSET))(this);
		}

	};
