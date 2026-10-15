#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class ActivityElationAvatarData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JCDIFIAMNEA___C__DISPLAYCLASS23_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1657CC20)
#define JCDIFIAMNEA___C__DISPLAYCLASS23_0___REFRESHLOADERVIEW_B__0_OFFSET UNITYSDK_OFFSET(0x1657D900)

inline static constexpr unsigned int JCDIFIAMNEA___c__DisplayClass23_0_TypeDefinitionIndex = 71367;

	class JCDIFIAMNEA___c__DisplayClass23_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* liveAvatarIDList; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCDIFIAMNEA___C__DISPLAYCLASS23_0_CTOR_OFFSET))(this);
		}

		::System::Boolean __RefreshLoaderView_b__0(::RPG::Client::ActivityElationAvatarData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityElationAvatarData*))((::PBYTE)hIl2Cpp + JCDIFIAMNEA___C__DISPLAYCLASS23_0___REFRESHLOADERVIEW_B__0_OFFSET))(this, a1);
		}

	};
