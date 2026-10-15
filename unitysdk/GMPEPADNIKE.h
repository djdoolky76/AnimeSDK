#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/PuzzleOptionUIUtilType.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class TalkOptionData; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class OptionTalkInfo; }
namespace RPG::GameCore { class PropOptionTrigger_ButtonParam; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GMPEPADNIKE_AJMIHANJNPD_OFFSET UNITYSDK_OFFSET(0x15AD18D0)
#define GMPEPADNIKE_BKCPMPMKLFI_OFFSET UNITYSDK_OFFSET(0x15AD1A60)
#define GMPEPADNIKE_BOHPNBGHBIP_OFFSET UNITYSDK_OFFSET(0x15AD10C0)
#define GMPEPADNIKE_CTOR_OFFSET UNITYSDK_OFFSET(0x15AD1C70)
#define GMPEPADNIKE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15AD0EB0)
#define GMPEPADNIKE_DLBPAPFGDCN_OFFSET UNITYSDK_OFFSET(0x15AD1580)
#define GMPEPADNIKE_HPCNGBNHIDP_OFFSET UNITYSDK_OFFSET(0x15AD1990)
#define GMPEPADNIKE_JFJOIIHAJIP_OFFSET UNITYSDK_OFFSET(0x15AD0FD0)

inline static constexpr unsigned int GMPEPADNIKE_TypeDefinitionIndex = 78801;

	class GMPEPADNIKE : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::TalkOptionData*>* PBNEFDJDFBD; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action*>* PLOIEGDDOKF; // 0x18
		::RPG::GameCore::PropOptionTrigger_ButtonParam* EDNNMHBJOBK; // 0x20
		::RPG::GameCore::GameEntity* DGFJCKGNDMB; // 0x28
		::System::Collections::Generic::List_1<::RPG::GameCore::OptionTalkInfo*>* NEIHDGHAJMK; // 0x30
		::System::Boolean BAMMGAOFJHO; // 0x38
		::System::Byte _padding0[0x3];
		::RPG::Client::Prop::PuzzleOptionUIUtilType BKFIOOHCNEG; // 0x3C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMPEPADNIKE_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMPEPADNIKE_DISPOSE_OFFSET))(this);
		}

		::System::Void BOHPNBGHBIP(::Il2CppArray<::System::String*>* a1, ::Il2CppArray<::System::Action*>* a2, ::RPG::GameCore::GameEntity* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::Il2CppArray<::System::Action*>*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + GMPEPADNIKE_BOHPNBGHBIP_OFFSET))(this, a1, a2, a3);
		}

		::System::Void DLBPAPFGDCN(::Il2CppArray<::System::String*>* a1, ::Il2CppArray<::System::Action*>* a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::Il2CppArray<::System::Action*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + GMPEPADNIKE_DLBPAPFGDCN_OFFSET))(this, a1, a2, a3);
		}

		::System::Void AJMIHANJNPD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMPEPADNIKE_AJMIHANJNPD_OFFSET))(this);
		}

		::System::Void JFJOIIHAJIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMPEPADNIKE_JFJOIIHAJIP_OFFSET))(this);
		}

		::System::Void BKCPMPMKLFI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GMPEPADNIKE_BKCPMPMKLFI_OFFSET))(this, a1);
		}

		::System::Void HPCNGBNHIDP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMPEPADNIKE_HPCNGBNHIDP_OFFSET))(this);
		}

	};
