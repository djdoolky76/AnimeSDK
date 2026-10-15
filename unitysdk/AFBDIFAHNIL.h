#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TutorialGuideShowType.h"
#include "unitysdk/System/Object.h"
class AFBDIFAHNIL;
class FCOEMCEDLNL;
namespace RPG::GameCore { class TutorialTriggerParam; }

#define AFBDIFAHNIL_CTOR_OFFSET UNITYSDK_OFFSET(0x1CCB3B50)
#define AFBDIFAHNIL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CCB37D0)

	class AFBDIFAHNIL : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* BHHPLHIGOHE; // 0x10
		::Il2CppArray<::RPG::GameCore::TutorialTriggerParam*>* JMDGIBDPMJF; // 0x18
		::Il2CppArray<::RPG::GameCore::TutorialTriggerParam*>* JNDOMOJHOEF; // 0x20
		::RPG::Client::TextID HNLJKFJOACC; // 0x28
		::System::UInt32 LLDCHLHNADA; // 0x38
		::System::UInt32 FLBGELFEBCK; // 0x3C
		::System::UInt32 ODEKADIBFAO; // 0x40
		::System::Boolean LPBKPCCKFJG; // 0x44
		::System::Byte _padding0[0x3];
		::RPG::GameCore::TutorialGuideShowType JMLNPBDIHDG; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFBDIFAHNIL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::AFBDIFAHNIL* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::AFBDIFAHNIL*))((::PBYTE)hIl2Cpp + AFBDIFAHNIL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
