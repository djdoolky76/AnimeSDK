#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FJDDMMEHBLE;
namespace RPG::GameCore { class FreeStyleAnimClipGroupZoneInfo; }
namespace RPG::GameCore { class FreeStyleAnimClipZoneInfo; }
namespace RPG::GameCore { class FreeStyleAnimEventConfig; }
namespace RPG::GameCore { class FreeStyleAnimGroupEventConfig; }
namespace RPG::GameCore { class FreeStyleCharacterExtendLayerConfig; }
namespace RPG::GameCore { class FreeStyleState; }
namespace RPG::GameCore { class FreeStyleTransitionInfoConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FJDDMMEHBLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x157C3080)
#define FJDDMMEHBLE_CTOR_OFFSET UNITYSDK_OFFSET(0x157C2F00)
#define FJDDMMEHBLE_GET_EMPTY_OFFSET UNITYSDK_OFFSET(0x157C2ED0)

	class FJDDMMEHBLE : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::RPG::GameCore::FreeStyleAnimEventConfig*>*>* NJKBKILBNFJ; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::RPG::GameCore::FreeStyleAnimGroupEventConfig*>*>* EPLPGIANPBB; // 0x18
		::System::String* EJNNAIHIGOF; // 0x20
		::System::Collections::Generic::List_1<::RPG::GameCore::FreeStyleCharacterExtendLayerConfig*>* ALJOHFMHMMH; // 0x28
		::System::Collections::Generic::List_1<::RPG::GameCore::FreeStyleAnimClipZoneInfo*>* DEBJCMMNGHB; // 0x30
		::RPG::GameCore::FreeStyleTransitionInfoConfig* MDPAAKIKFGE; // 0x38
		::System::Collections::Generic::List_1<::RPG::GameCore::FreeStyleState*>* FGFIJFAEIOB; // 0x40
		::System::Collections::Generic::List_1<::RPG::GameCore::FreeStyleAnimClipGroupZoneInfo*>* GIELNNPHFMH; // 0x48
		::System::UInt32 JMBBLICLDPD; // 0x50
		::System::Single MDMMLALGEOA; // 0x54
		static ::FJDDMMEHBLE** StaticGet__Empty_k__BackingField()
		{
			return (::FJDDMMEHBLE**)UnitySDK::FromName("", "FJDDMMEHBLE")->GetStaticField(0x69710);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJDDMMEHBLE_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FJDDMMEHBLE_CCTOR_OFFSET))();
		}

		static ::FJDDMMEHBLE* get_Empty()
		{
			return ((::FJDDMMEHBLE*(*)())((::PBYTE)hIl2Cpp + FJDDMMEHBLE_GET_EMPTY_OFFSET))();
		}

	};
