#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/R3/Unit.h"
class KPEKOKMONMJ;
namespace R3 { template <typename T> class ReadOnlyReactiveProperty_1; }
namespace System { class Action; }

#define DHHMOPOLKBF_CTOR_OFFSET UNITYSDK_OFFSET(0x1C54DE40)
#define DHHMOPOLKBF_ECPHACDDFIH_OFFSET UNITYSDK_OFFSET(0x1C54DBE0)
#define DHHMOPOLKBF_EIFEDGJKDDA_OFFSET UNITYSDK_OFFSET(0x1C54DB90)
#define DHHMOPOLKBF__GET_CURRENTPERCENT_B__5_0_OFFSET UNITYSDK_OFFSET(0x1C54DE50)
#define DHHMOPOLKBF__GET_CURRENTPERCENT_B__5_1_OFFSET UNITYSDK_OFFSET(0x1C54DEC0)
#define DHHMOPOLKBF__GET_CURRENTPERCENT_B__5_2_OFFSET UNITYSDK_OFFSET(0x1C54DF30)

	class DHHMOPOLKBF : public ::System::Object
	{
	public:
		::KPEKOKMONMJ* MJMABJODLIO; // 0x10
		::R3::ReadOnlyReactiveProperty_1<::System::Int32>* ACOBAMHHFMI; // 0x18
		::System::Void _ctor(::KPEKOKMONMJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KPEKOKMONMJ*))((::PBYTE)hIl2Cpp + DHHMOPOLKBF_CTOR_OFFSET))(this, a1);
		}

		::System::Int32 EIFEDGJKDDA()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DHHMOPOLKBF_EIFEDGJKDDA_OFFSET))(this);
		}

		::R3::ReadOnlyReactiveProperty_1<::System::Int32>* ECPHACDDFIH()
		{
			return ((::R3::ReadOnlyReactiveProperty_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DHHMOPOLKBF_ECPHACDDFIH_OFFSET))(this);
		}

		::System::Void _get_CurrentPercent_b__5_0(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + DHHMOPOLKBF__GET_CURRENTPERCENT_B__5_0_OFFSET))(this, a1);
		}

		::System::Void _get_CurrentPercent_b__5_1(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + DHHMOPOLKBF__GET_CURRENTPERCENT_B__5_1_OFFSET))(this, a1);
		}

		::System::Int32 _get_CurrentPercent_b__5_2(::R3::Unit a1)
		{
			return ((::System::Int32(*)(::PVOID, ::R3::Unit))((::PBYTE)hIl2Cpp + DHHMOPOLKBF__GET_CURRENTPERCENT_B__5_2_OFFSET))(this, a1);
		}

	};
