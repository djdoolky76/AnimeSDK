#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class UniversalHotFixTaskConfig; }
namespace System { class String; }

#define CAPNGJEIJOL_CFDDHACMPEM_OFFSET UNITYSDK_OFFSET(0xC49D140)
#define CAPNGJEIJOL_CTOR_OFFSET UNITYSDK_OFFSET(0xC49CF80)
#define CAPNGJEIJOL_DLCCBMPEKFA_OFFSET UNITYSDK_OFFSET(0xC49D2F0)
#define CAPNGJEIJOL_IFJKJJGKFEG_OFFSET UNITYSDK_OFFSET(0xC49CF90)
#define CAPNGJEIJOL_IJKPJINOHHF_OFFSET UNITYSDK_OFFSET(0xC49D230)
#define CAPNGJEIJOL_KDOELPOACHB_OFFSET UNITYSDK_OFFSET(0xC49D3C0)
#define CAPNGJEIJOL_KNANGHAGDAK_OFFSET UNITYSDK_OFFSET(0xC49D050)
#define CAPNGJEIJOL_PPECFHCOMDH_OFFSET UNITYSDK_OFFSET(0xC49D480)

	class CAPNGJEIJOL : public ::System::Object
	{
	public:
		::RPG::GameCore::UniversalHotFixTaskConfig* OFKGLJOAMLD; // 0x10
		::System::Void _ctor(::RPG::GameCore::UniversalHotFixTaskConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::UniversalHotFixTaskConfig*))((::PBYTE)hIl2Cpp + CAPNGJEIJOL_CTOR_OFFSET))(this, a1);
		}

		::RPG::GameCore::TargetEvaluator* IFJKJJGKFEG(::System::String* a1)
		{
			return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CAPNGJEIJOL_IFJKJJGKFEG_OFFSET))(this, a1);
		}

		::RPG::GameCore::DynamicFloat* KNANGHAGDAK(::System::String* a1)
		{
			return ((::RPG::GameCore::DynamicFloat*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CAPNGJEIJOL_KNANGHAGDAK_OFFSET))(this, a1);
		}

		::RPG::GameCore::DynamicString* CFDDHACMPEM(::System::String* a1)
		{
			return ((::RPG::GameCore::DynamicString*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CAPNGJEIJOL_CFDDHACMPEM_OFFSET))(this, a1);
		}

		::System::String* IJKPJINOHHF(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CAPNGJEIJOL_IJKPJINOHHF_OFFSET))(this, a1);
		}

		::System::Boolean DLCCBMPEKFA(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CAPNGJEIJOL_DLCCBMPEKFA_OFFSET))(this, a1);
		}

		::System::Int32 KDOELPOACHB(::System::String* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CAPNGJEIJOL_KDOELPOACHB_OFFSET))(this, a1);
		}

		::System::UInt32 PPECFHCOMDH(::System::String* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CAPNGJEIJOL_PPECFHCOMDH_OFFSET))(this, a1);
		}

	};
