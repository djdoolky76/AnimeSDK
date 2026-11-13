#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameSandboxLegacyHandled.h"
#include "unitysdk/RPG/Client/LockSource.h"
#include "unitysdk/RPG/GameCore/EntityLodTemplateName.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class HoyoTagContainer; }
namespace System { class String; }

#define JAIGIPGEHBL_CTOR_OFFSET UNITYSDK_OFFSET(0x19A54190)

inline static constexpr unsigned int JAIGIPGEHBL_TypeDefinitionIndex = 61920;

	class JAIGIPGEHBL : public ::System::Object
	{
	public:
		::RPG::GameCore::HoyoTagContainer* CGEOINELLKG; // 0x10
		::System::String* ILFEHHKFGIP; // 0x18
		::System::String* MAGJJKLMGNE; // 0x20
		::Il2CppArray<::System::UInt32>* FNHBPNPIEDA; // 0x28
		::System::String* HMDOHINAPIC; // 0x30
		::Il2CppArray<::System::String*>* HNFNDGEFNHF; // 0x38
		::System::String* HOPKDOHOPHJ; // 0x40
		::System::String* PAOKKLLJNOM; // 0x48
		::Il2CppArray<::System::String*>* LPONNNJEGCI; // 0x50
		::Il2CppArray<::RPG::Client::LockSource>* LPDGJIHDBLA; // 0x58
		::System::String* HPICKGCMNNL; // 0x60
		::System::Nullable_1<::System::Single> LPOGNGNLIGP; // 0x68
		::System::Boolean OMGOJMJPIBG; // 0x70
		::System::Boolean FDFEEEEBOKL; // 0x71
		::System::Boolean OBFDJMJNFKM; // 0x72
		::System::Boolean LDJFDNMNFEL; // 0x73
		::System::Boolean JENMLDDNKKD; // 0x74
		::System::Byte _padding0[0x3];
		::RPG::Client::LittleGameSandboxLegacyHandled GKABDIGPBEA; // 0x78
		::RPG::GameCore::EntityLodTemplateName BNEBOPEEPJA; // 0x7C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JAIGIPGEHBL_CTOR_OFFSET))(this);
		}

	};
