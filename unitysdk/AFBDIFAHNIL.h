#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TutorialGuideShowType.h"
#include "unitysdk/System/Object.h"
class AFBDIFAHNIL;
class FCOEMCEDLNL;
namespace RPG::GameCore { class TutorialTriggerParam; }

#define AFBDIFAHNIL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E024600)
#define AFBDIFAHNIL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E024280)

inline static constexpr unsigned int AFBDIFAHNIL_TypeDefinitionIndex = 15551;

	class AFBDIFAHNIL : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::TutorialTriggerParam*>* JNDOMOJHOEF; // 0x10
		::Il2CppArray<::RPG::GameCore::TutorialTriggerParam*>* JMDGIBDPMJF; // 0x18
		::Il2CppArray<::System::UInt32>* BHHPLHIGOHE; // 0x20
		::System::UInt32 ODEKADIBFAO; // 0x28
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID HNLJKFJOACC; // 0x30
		::System::Boolean LPBKPCCKFJG; // 0x40
		::System::Byte _padding1[0x3];
		::System::UInt32 LLDCHLHNADA; // 0x44
		::System::UInt32 FLBGELFEBCK; // 0x48
		::RPG::GameCore::TutorialGuideShowType JMLNPBDIHDG; // 0x4C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFBDIFAHNIL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::AFBDIFAHNIL* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::AFBDIFAHNIL*))((::PBYTE)hIl2Cpp + AFBDIFAHNIL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
