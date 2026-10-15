#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class MainMissionData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KPNBOEKLHBN___C__DISPLAYCLASS1_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB5BC290)
#define KPNBOEKLHBN___C__DISPLAYCLASS1_0___GETCANTRACKMISSION_B__0_OFFSET UNITYSDK_OFFSET(0xB5BC370)

inline static constexpr unsigned int KPNBOEKLHBN___c__DisplayClass1_0_TypeDefinitionIndex = 66179;

	class KPNBOEKLHBN___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* canTrackingChapter; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPNBOEKLHBN___C__DISPLAYCLASS1_0_CTOR_OFFSET))(this);
		}

		::System::Boolean __GetCanTrackMission_b__0(::RPG::Client::MainMissionData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MainMissionData*))((::PBYTE)hIl2Cpp + KPNBOEKLHBN___C__DISPLAYCLASS1_0___GETCANTRACKMISSION_B__0_OFFSET))(this, a1);
		}

	};
