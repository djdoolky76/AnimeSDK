#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/NoteInputResult.h"
#include "unitysdk/System/Object.h"
class HMABMBCFEJH;
class NEKAOEFLAMO;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class NoteGroupConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JOKBBIDAKOF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1B4E1F70)
#define JOKBBIDAKOF_CTOR_OFFSET UNITYSDK_OFFSET(0x1B4E0680)
#define JOKBBIDAKOF_EGGDMIOCLFK_OFFSET UNITYSDK_OFFSET(0x1B4E1D10)
#define JOKBBIDAKOF_ELEDIGBHACB_OFFSET UNITYSDK_OFFSET(0x1B4E1A20)
#define JOKBBIDAKOF_FPIODPFOMMF_OFFSET UNITYSDK_OFFSET(0x1B4E1620)
#define JOKBBIDAKOF_GET_AUTOBUBBLE_OFFSET UNITYSDK_OFFSET(0x1B4E1DB0)
#define JOKBBIDAKOF_GET_ENDTIME_OFFSET UNITYSDK_OFFSET(0x1B4E1E70)
#define JOKBBIDAKOF_GET_FAILINPUT_OFFSET UNITYSDK_OFFSET(0x1B4E1F50)
#define JOKBBIDAKOF_GET_IGNORELOOP_OFFSET UNITYSDK_OFFSET(0x1B4E1EF0)
#define JOKBBIDAKOF_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x1B4E1D70)
#define JOKBBIDAKOF_GET_INPUTNOTECOUNT_OFFSET UNITYSDK_OFFSET(0x1B4E1DF0)
#define JOKBBIDAKOF_GET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x1B4E1D90)
#define JOKBBIDAKOF_GET_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x1B4E1ED0)
#define JOKBBIDAKOF_GET_ISFINISH_OFFSET UNITYSDK_OFFSET(0x1B4E1EB0)
#define JOKBBIDAKOF_GET_OWNERMODE_OFFSET UNITYSDK_OFFSET(0x1B4E1DD0)
#define JOKBBIDAKOF_GET_PERFECTINPUT_OFFSET UNITYSDK_OFFSET(0x1B4E1F30)
#define JOKBBIDAKOF_GET_REALENDTIME_OFFSET UNITYSDK_OFFSET(0x1B4E1E30)
#define JOKBBIDAKOF_GET_REALSTARTTIME_OFFSET UNITYSDK_OFFSET(0x1B4E1E10)
#define JOKBBIDAKOF_GET_STARTTIME_OFFSET UNITYSDK_OFFSET(0x1B4E1E50)
#define JOKBBIDAKOF_GET_SUCCESSINPUT_OFFSET UNITYSDK_OFFSET(0x1B4E1F10)
#define JOKBBIDAKOF_GET_TUTORIALSCORE_OFFSET UNITYSDK_OFFSET(0x1B4E1E90)
#define JOKBBIDAKOF_GIGKBOIECDM_OFFSET UNITYSDK_OFFSET(0x1B4E19B0)
#define JOKBBIDAKOF_JCPOAOLAHHA_OFFSET UNITYSDK_OFFSET(0x1B4E1670)
#define JOKBBIDAKOF_JEMHLHGJFHM_OFFSET UNITYSDK_OFFSET(0x1B4E15C0)
#define JOKBBIDAKOF_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x1B4E1000)
#define JOKBBIDAKOF_KBADALMFDJH_OFFSET UNITYSDK_OFFSET(0x1B4E1510)
#define JOKBBIDAKOF_KLOMMNGBMDL_OFFSET UNITYSDK_OFFSET(0x1B4E16C0)
#define JOKBBIDAKOF_LJBCDJNNBJH_OFFSET UNITYSDK_OFFSET(0x1B4E1AF0)
#define JOKBBIDAKOF_MHMMBCKNJEJ_OFFSET UNITYSDK_OFFSET(0x1B4E1CC0)
#define JOKBBIDAKOF_OHBMPHAJKEP_OFFSET UNITYSDK_OFFSET(0x1B4E1830)
#define JOKBBIDAKOF_SET_AUTOBUBBLE_OFFSET UNITYSDK_OFFSET(0x1B4E1DC0)
#define JOKBBIDAKOF_SET_ENDTIME_OFFSET UNITYSDK_OFFSET(0x1B4E1E80)
#define JOKBBIDAKOF_SET_FAILINPUT_OFFSET UNITYSDK_OFFSET(0x1B4E1F60)
#define JOKBBIDAKOF_SET_IGNORELOOP_OFFSET UNITYSDK_OFFSET(0x1B4E1F00)
#define JOKBBIDAKOF_SET_INDEX_OFFSET UNITYSDK_OFFSET(0x1B4E1D80)
#define JOKBBIDAKOF_SET_INPUTNOTECOUNT_OFFSET UNITYSDK_OFFSET(0x1B4E1E00)
#define JOKBBIDAKOF_SET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x1B4E1DA0)
#define JOKBBIDAKOF_SET_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x1B4E1EE0)
#define JOKBBIDAKOF_SET_ISFINISH_OFFSET UNITYSDK_OFFSET(0x1B4E1EC0)
#define JOKBBIDAKOF_SET_OWNERMODE_OFFSET UNITYSDK_OFFSET(0x1B4E1DE0)
#define JOKBBIDAKOF_SET_PERFECTINPUT_OFFSET UNITYSDK_OFFSET(0x1B4E1F40)
#define JOKBBIDAKOF_SET_REALENDTIME_OFFSET UNITYSDK_OFFSET(0x1B4E1E40)
#define JOKBBIDAKOF_SET_REALSTARTTIME_OFFSET UNITYSDK_OFFSET(0x1B4E1E20)
#define JOKBBIDAKOF_SET_STARTTIME_OFFSET UNITYSDK_OFFSET(0x1B4E1E60)
#define JOKBBIDAKOF_SET_SUCCESSINPUT_OFFSET UNITYSDK_OFFSET(0x1B4E1F20)
#define JOKBBIDAKOF_SET_TUTORIALSCORE_OFFSET UNITYSDK_OFFSET(0x1B4E1EA0)

inline static constexpr unsigned int JOKBBIDAKOF_TypeDefinitionIndex = 61457;

	class JOKBBIDAKOF : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* JIKFGDDKPGD; // 0x10
		::NEKAOEFLAMO* _OwnerMode_k__BackingField; // 0x18
		::System::String* IIOKHKJFPJP; // 0x20
		::System::Collections::Generic::List_1<::System::Int32>* BHIELOIELOF; // 0x28
		::Il2CppArray<::System::String*>* EMJEMMIDBOA; // 0x30
		::Il2CppArray<::System::String*>* DFBLMGNPONL; // 0x38
		::System::Collections::Generic::List_1<::HMABMBCFEJH*>* AFEDOJIIAOK; // 0x40
		::System::Single _EndTime_k__BackingField; // 0x48
		::System::Single _RealEndTime_k__BackingField; // 0x4C
		::System::Boolean _IsFinish_k__BackingField; // 0x50
		::System::Boolean _IsActive_k__BackingField; // 0x51
		::System::Byte _padding0[0x2];
		::System::Int32 IKDNNMFCBPE; // 0x54
		::System::UInt32 _InputNoteCount_k__BackingField; // 0x58
		::System::Single JGJBJKELJDD; // 0x5C
		::System::Int32 _Index_k__BackingField; // 0x60
		::System::Single _RealStartTime_k__BackingField; // 0x64
		::System::Single IDMGGEHNDBC; // 0x68
		::System::Single _StartTime_k__BackingField; // 0x6C
		::System::Int32 _SuccessInput_k__BackingField; // 0x70
		::System::Int32 _FailInput_k__BackingField; // 0x74
		::System::Int32 INLKDCHNFPP; // 0x78
		::System::Int32 _PerfectInput_k__BackingField; // 0x7C
		::System::Boolean _TutorialScore_k__BackingField; // 0x80
		::System::Boolean _AutoBubble_k__BackingField; // 0x81
		::System::Boolean _IgnoreLoop_k__BackingField; // 0x82
		::System::Boolean _IsEmpty_k__BackingField; // 0x83
		static ::System::String** StaticGet_FLIIKCMBHMF()
		{
			return (::System::String**)UnitySDK::FromName("", "JOKBBIDAKOF")->GetStaticField(0x29110);
		}

		::System::Void _ctor(::NEKAOEFLAMO* a1, ::System::Int32 a2, ::RPG::GameCore::NoteGroupConfig* a3)
		{
			return ((::System::Void(*)(::PVOID, ::NEKAOEFLAMO*, ::System::Int32, ::RPG::GameCore::NoteGroupConfig*))((::PBYTE)hIl2Cpp + JOKBBIDAKOF_CTOR_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JOKBBIDAKOF_CCTOR_OFFSET))();
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JOKBBIDAKOF_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Boolean KBADALMFDJH(::System::Single a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JOKBBIDAKOF_KBADALMFDJH_OFFSET))(this, a1);
		}

		::System::Boolean JEMHLHGJFHM(::System::Single a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JOKBBIDAKOF_JEMHLHGJFHM_OFFSET))(this, a1);
		}

		::System::Void FPIODPFOMMF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOKBBIDAKOF_FPIODPFOMMF_OFFSET))(this);
		}

		::System::Void JCPOAOLAHHA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOKBBIDAKOF_JCPOAOLAHHA_OFFSET))(this);
		}

		::HMABMBCFEJH* KLOMMNGBMDL(::System::Single a1)
		{
			return ((::HMABMBCFEJH*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JOKBBIDAKOF_KLOMMNGBMDL_OFFSET))(this, a1);
		}

		::System::Boolean OHBMPHAJKEP(::System::Single a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JOKBBIDAKOF_OHBMPHAJKEP_OFFSET))(this, a1);
		}

		::System::Void GIGKBOIECDM(::RPG::Client::NoteInputResult a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::NoteInputResult))((::PBYTE)hIl2Cpp + JOKBBIDAKOF_GIGKBOIECDM_OFFSET))(this, a1);
		}

		::System::Void ELEDIGBHACB(::RPG::Client::NoteInputResult a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::NoteInputResult))((::PBYTE)hIl2Cpp + JOKBBIDAKOF_ELEDIGBHACB_OFFSET))(this, a1);
		}

		::System::Void LJBCDJNNBJH(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JOKBBIDAKOF_LJBCDJNNBJH_OFFSET))(this, a1);
		}

		::System::Boolean MHMMBCKNJEJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JOKBBIDAKOF_MHMMBCKNJEJ_OFFSET))(this);
		}

		::System::Boolean EGGDMIOCLFK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JOKBBIDAKOF_EGGDMIOCLFK_OFFSET))(this);
		}

		::System::Int32 get_Index()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JOKBBIDAKOF_GET_INDEX_OFFSET))(this);
		}

		::System::Void set_Index(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + JOKBBIDAKOF_SET_INDEX_OFFSET))(this, a1);
		}

		::System::Boolean get_IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JOKBBIDAKOF_GET_ISACTIVE_OFFSET))(this);
		}

		::System::Void set_IsActive(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JOKBBIDAKOF_SET_ISACTIVE_OFFSET))(this, a1);
		}

		::System::Boolean get_AutoBubble()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JOKBBIDAKOF_GET_AUTOBUBBLE_OFFSET))(this);
		}

		::System::Void set_AutoBubble(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JOKBBIDAKOF_SET_AUTOBUBBLE_OFFSET))(this, a1);
		}

		::NEKAOEFLAMO* get_OwnerMode()
		{
			return ((::NEKAOEFLAMO*(*)(::PVOID))((::PBYTE)hIl2Cpp + JOKBBIDAKOF_GET_OWNERMODE_OFFSET))(this);
		}

		::System::Void set_OwnerMode(::NEKAOEFLAMO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NEKAOEFLAMO*))((::PBYTE)hIl2Cpp + JOKBBIDAKOF_SET_OWNERMODE_OFFSET))(this, a1);
		}

		::System::UInt32 get_InputNoteCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JOKBBIDAKOF_GET_INPUTNOTECOUNT_OFFSET))(this);
		}

		::System::Void set_InputNoteCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JOKBBIDAKOF_SET_INPUTNOTECOUNT_OFFSET))(this, a1);
		}

		::System::Single get_RealStartTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + JOKBBIDAKOF_GET_REALSTARTTIME_OFFSET))(this);
		}

		::System::Void set_RealStartTime(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JOKBBIDAKOF_SET_REALSTARTTIME_OFFSET))(this, a1);
		}

		::System::Single get_RealEndTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + JOKBBIDAKOF_GET_REALENDTIME_OFFSET))(this);
		}

		::System::Void set_RealEndTime(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JOKBBIDAKOF_SET_REALENDTIME_OFFSET))(this, a1);
		}

		::System::Single get_StartTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + JOKBBIDAKOF_GET_STARTTIME_OFFSET))(this);
		}

		::System::Void set_StartTime(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JOKBBIDAKOF_SET_STARTTIME_OFFSET))(this, a1);
		}

		::System::Single get_EndTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + JOKBBIDAKOF_GET_ENDTIME_OFFSET))(this);
		}

		::System::Void set_EndTime(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JOKBBIDAKOF_SET_ENDTIME_OFFSET))(this, a1);
		}

		::System::Boolean get_TutorialScore()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JOKBBIDAKOF_GET_TUTORIALSCORE_OFFSET))(this);
		}

		::System::Void set_TutorialScore(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JOKBBIDAKOF_SET_TUTORIALSCORE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JOKBBIDAKOF_GET_ISFINISH_OFFSET))(this);
		}

		::System::Void set_IsFinish(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JOKBBIDAKOF_SET_ISFINISH_OFFSET))(this, a1);
		}

		::System::Boolean get_IsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JOKBBIDAKOF_GET_ISEMPTY_OFFSET))(this);
		}

		::System::Void set_IsEmpty(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JOKBBIDAKOF_SET_ISEMPTY_OFFSET))(this, a1);
		}

		::System::Boolean get_IgnoreLoop()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JOKBBIDAKOF_GET_IGNORELOOP_OFFSET))(this);
		}

		::System::Void set_IgnoreLoop(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JOKBBIDAKOF_SET_IGNORELOOP_OFFSET))(this, a1);
		}

		::System::Int32 get_SuccessInput()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JOKBBIDAKOF_GET_SUCCESSINPUT_OFFSET))(this);
		}

		::System::Void set_SuccessInput(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + JOKBBIDAKOF_SET_SUCCESSINPUT_OFFSET))(this, a1);
		}

		::System::Int32 get_PerfectInput()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JOKBBIDAKOF_GET_PERFECTINPUT_OFFSET))(this);
		}

		::System::Void set_PerfectInput(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + JOKBBIDAKOF_SET_PERFECTINPUT_OFFSET))(this, a1);
		}

		::System::Int32 get_FailInput()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JOKBBIDAKOF_GET_FAILINPUT_OFFSET))(this);
		}

		::System::Void set_FailInput(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + JOKBBIDAKOF_SET_FAILINPUT_OFFSET))(this, a1);
		}

	};
