#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class ScheduleData; }

#define JLDCJPDOIDI_CTOR_OFFSET UNITYSDK_OFFSET(0x17B43050)
#define JLDCJPDOIDI_DDILOMDLLHD_1_OFFSET UNITYSDK_OFFSET(0x17B42360)
#define JLDCJPDOIDI_DDILOMDLLHD_OFFSET UNITYSDK_OFFSET(0x17B42310)
#define JLDCJPDOIDI_KEGJKOHAPHJ_OFFSET UNITYSDK_OFFSET(0x17B42D90)
#define JLDCJPDOIDI_ODFNMHPLNFN_OFFSET UNITYSDK_OFFSET(0x17B42820)

inline static constexpr unsigned int JLDCJPDOIDI_TypeDefinitionIndex = 69844;

	class JLDCJPDOIDI : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLDCJPDOIDI_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ScheduleData* DDILOMDLLHD(::System::UInt32 a1)
		{
			return ((::RPG::Client::ScheduleData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + JLDCJPDOIDI_DDILOMDLLHD_OFFSET))(a1);
		}

		static ::RPG::Client::ScheduleData* DDILOMDLLHD_1(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::ScheduleData*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + JLDCJPDOIDI_DDILOMDLLHD_1_OFFSET))(a1, a2);
		}

		static ::RPG::Client::ScheduleData* ODFNMHPLNFN(::System::UInt32 a1)
		{
			return ((::RPG::Client::ScheduleData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + JLDCJPDOIDI_ODFNMHPLNFN_OFFSET))(a1);
		}

		static ::RPG::Client::ScheduleData* KEGJKOHAPHJ(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4)
		{
			return ((::RPG::Client::ScheduleData*(*)(::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + JLDCJPDOIDI_KEGJKOHAPHJ_OFFSET))(a1, a2, a3, a4);
		}

	};
