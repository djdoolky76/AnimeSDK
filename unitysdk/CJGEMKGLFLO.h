#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
#include "unitysdk/MJKLAEILHPK.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
namespace RPG::GameCore { class PlayScreenTransfer; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerDrinkMakerBartend; }
namespace System { class Object; }

#define CJGEMKGLFLO_BJEOOHOHKOA_OFFSET UNITYSDK_OFFSET(0xDB7AC80)
#define CJGEMKGLFLO_CCTOR_OFFSET UNITYSDK_OFFSET(0xDB7B150)
#define CJGEMKGLFLO_CJCHKCKKPCN_OFFSET UNITYSDK_OFFSET(0xDB7AE60)
#define CJGEMKGLFLO_CMMHAKEAFAC_OFFSET UNITYSDK_OFFSET(0xDB7B060)
#define CJGEMKGLFLO_CTOR_OFFSET UNITYSDK_OFFSET(0xDB7A9F0)
#define CJGEMKGLFLO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDB7AB70)
#define CJGEMKGLFLO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xDB7AC30)
#define CJGEMKGLFLO_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xDB7AD40)
#define CJGEMKGLFLO_TICK_OFFSET UNITYSDK_OFFSET(0xDB7AD90)

inline static constexpr unsigned int CJGEMKGLFLO_TypeDefinitionIndex = 60048;

	class CJGEMKGLFLO : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TriggerDrinkMakerBartend* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::MJKLAEILHPK OLMFJLICIIA; // 0x28
		::RPG::GameCore::PlayScreenTransfer* FHBIIIIJOCD; // 0x58
		static ::RPG::GameCore::StringHash* StaticGet_EBJECNKIEHA()
		{
			return (::RPG::GameCore::StringHash*)UnitySDK::FromName("", "CJGEMKGLFLO")->GetStaticField(0x5A10);
		}

		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerDrinkMakerBartend* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerDrinkMakerBartend*))((::PBYTE)hIl2Cpp + CJGEMKGLFLO_CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CJGEMKGLFLO_CCTOR_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJGEMKGLFLO_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJGEMKGLFLO_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJGEMKGLFLO_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CJGEMKGLFLO_TICK_OFFSET))(this, a1);
		}

		::System::Void BJEOOHOHKOA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJGEMKGLFLO_BJEOOHOHKOA_OFFSET))(this);
		}

		::System::Void CJCHKCKKPCN(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CJGEMKGLFLO_CJCHKCKKPCN_OFFSET))(this, a1);
		}

		::System::Void CMMHAKEAFAC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJGEMKGLFLO_CMMHAKEAFAC_OFFSET))(this);
		}

	};
