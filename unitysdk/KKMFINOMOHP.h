#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BGDGNJBCMBE;
class KDJNAAOFMMJ;
namespace RPG::Client { class TalkDebateUIControlData; }
namespace RPG::GameCore { class DebateTestimonySetting; }
namespace RPG::GameCore { class OptionTalkInfo; }
namespace RPG::GameCore { class SelectMissionItem; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KKMFINOMOHP_BCKAHADGFKC_OFFSET UNITYSDK_OFFSET(0x17359E40)
#define KKMFINOMOHP_BKCPMPMKLFI_OFFSET UNITYSDK_OFFSET(0x1735A830)
#define KKMFINOMOHP_CMNAMLHNMIK_OFFSET UNITYSDK_OFFSET(0x1735AA50)
#define KKMFINOMOHP_CPCEGGCABHE_OFFSET UNITYSDK_OFFSET(0x17359C10)
#define KKMFINOMOHP_CTOR_OFFSET UNITYSDK_OFFSET(0x17359440)
#define KKMFINOMOHP_DISPOSE_OFFSET UNITYSDK_OFFSET(0x173594D0)
#define KKMFINOMOHP_DOCCLCPLBLO_OFFSET UNITYSDK_OFFSET(0x17359910)
#define KKMFINOMOHP_EKDENEOMGHH_OFFSET UNITYSDK_OFFSET(0x17359CD0)
#define KKMFINOMOHP_EPDCBJOOMDI_OFFSET UNITYSDK_OFFSET(0x1735A0F0)
#define KKMFINOMOHP_FHBIHDJHGGO_OFFSET UNITYSDK_OFFSET(0x17359740)
#define KKMFINOMOHP_GOIGCJADMNB_OFFSET UNITYSDK_OFFSET(0x1735A4C0)
#define KKMFINOMOHP_LBDFKKOIGKA_OFFSET UNITYSDK_OFFSET(0x17359B80)
#define KKMFINOMOHP_LBDOPEBNGBI_OFFSET UNITYSDK_OFFSET(0x1735A680)
#define KKMFINOMOHP_NNBKKMGFLLF_OFFSET UNITYSDK_OFFSET(0x173598B0)
#define KKMFINOMOHP_OFDEKKCMGJD_OFFSET UNITYSDK_OFFSET(0x1735A170)
#define KKMFINOMOHP_TICK_OFFSET UNITYSDK_OFFSET(0x173596D0)

inline static constexpr unsigned int KKMFINOMOHP_TypeDefinitionIndex = 62071;

	class KKMFINOMOHP : public ::System::Object
	{
	public:
		::RPG::GameCore::DebateTestimonySetting* IGHAHBNLIJA; // 0x10
		::System::Collections::Generic::HashSet_1<::System::UInt32>* HNMOJBHHDCB; // 0x18
		::BGDGNJBCMBE* POMDJKCJGON; // 0x20
		::RPG::Client::TalkDebateUIControlData* JPCPACEEIIA; // 0x28
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x30
		::KDJNAAOFMMJ* DDDLPDOKLMO; // 0x38
		::RPG::GameCore::SelectMissionItem* MKMOICHFCGH; // 0x40
		::System::Collections::Generic::List_1<::RPG::GameCore::OptionTalkInfo*>* ODCFPDHDKNB; // 0x48
		::System::Boolean JAFJBPGEJAF; // 0x50
		// static const ::System::String* NDODDFDNBOO; // 0x0
		// static const ::System::String* FJBLBIIPDJK; // 0x0
		::System::Void _ctor(::RPG::GameCore::DebateTestimonySetting* a1, ::RPG::GameCore::TaskContext* a2, ::BGDGNJBCMBE* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DebateTestimonySetting*, ::RPG::GameCore::TaskContext*, ::BGDGNJBCMBE*))((::PBYTE)hIl2Cpp + KKMFINOMOHP_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKMFINOMOHP_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KKMFINOMOHP_TICK_OFFSET))(this, a1);
		}

		::System::Void FHBIHDJHGGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKMFINOMOHP_FHBIHDJHGGO_OFFSET))(this);
		}

		::System::Void DOCCLCPLBLO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKMFINOMOHP_DOCCLCPLBLO_OFFSET))(this);
		}

		::System::Boolean CPCEGGCABHE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KKMFINOMOHP_CPCEGGCABHE_OFFSET))(this);
		}

		::System::Void EKDENEOMGHH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKMFINOMOHP_EKDENEOMGHH_OFFSET))(this);
		}

		::System::Void BCKAHADGFKC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKMFINOMOHP_BCKAHADGFKC_OFFSET))(this);
		}

		::System::Void GOIGCJADMNB(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KKMFINOMOHP_GOIGCJADMNB_OFFSET))(this, a1);
		}

		::System::Void LBDOPEBNGBI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KKMFINOMOHP_LBDOPEBNGBI_OFFSET))(this, a1);
		}

		::System::Void BKCPMPMKLFI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KKMFINOMOHP_BKCPMPMKLFI_OFFSET))(this, a1);
		}

		::RPG::GameCore::SelectMissionItem* LBDFKKOIGKA()
		{
			return ((::RPG::GameCore::SelectMissionItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + KKMFINOMOHP_LBDFKKOIGKA_OFFSET))(this);
		}

		::RPG::GameCore::SelectMissionItem* CMNAMLHNMIK()
		{
			return ((::RPG::GameCore::SelectMissionItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + KKMFINOMOHP_CMNAMLHNMIK_OFFSET))(this);
		}

		::RPG::Client::TalkDebateUIControlData* EPDCBJOOMDI()
		{
			return ((::RPG::Client::TalkDebateUIControlData*(*)(::PVOID))((::PBYTE)hIl2Cpp + KKMFINOMOHP_EPDCBJOOMDI_OFFSET))(this);
		}

		::RPG::Client::TalkDebateUIControlData* NNBKKMGFLLF()
		{
			return ((::RPG::Client::TalkDebateUIControlData*(*)(::PVOID))((::PBYTE)hIl2Cpp + KKMFINOMOHP_NNBKKMGFLLF_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::OptionTalkInfo*>* OFDEKKCMGJD()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::OptionTalkInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KKMFINOMOHP_OFDEKKCMGJD_OFFSET))(this);
		}

	};
