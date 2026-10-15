#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class KJIOGEFIOCD;
class NPMAIAEDIHK;
namespace RPG::GameCore { class PamChatGreetingRow; }

#define KJIOGEFIOCD_COMPARETO_OFFSET UNITYSDK_OFFSET(0xB459CC0)
#define KJIOGEFIOCD_CTOR_OFFSET UNITYSDK_OFFSET(0xB459C30)
#define KJIOGEFIOCD_DLGFMPNEHGO_OFFSET UNITYSDK_OFFSET(0xB459E60)
#define KJIOGEFIOCD_EAEEJCEFNCM_OFFSET UNITYSDK_OFFSET(0xB459F30)
#define KJIOGEFIOCD_FOKPGFJKKAJ_OFFSET UNITYSDK_OFFSET(0xB459FA0)
#define KJIOGEFIOCD_GET_GREETINGID_OFFSET UNITYSDK_OFFSET(0xB459FF0)
#define KJIOGEFIOCD_GET_HUDBUBBLE_OFFSET UNITYSDK_OFFSET(0xB45A000)
#define KJIOGEFIOCD_IIMMEOHDNJE_OFFSET UNITYSDK_OFFSET(0xB459D70)
#define KJIOGEFIOCD_JCGJHKAGMBH_OFFSET UNITYSDK_OFFSET(0xB459DB0)
#define KJIOGEFIOCD_NKMJLOIKMGL_OFFSET UNITYSDK_OFFSET(0xB459D30)

inline static constexpr unsigned int KJIOGEFIOCD_TypeDefinitionIndex = 63282;

	class KJIOGEFIOCD : public ::System::Object
	{
	public:
		::NPMAIAEDIHK* OLPNJHPNJNG; // 0x10
		::Il2CppArray<::System::UInt32>* MGPONEBFEIK; // 0x18
		::RPG::Client::TextID _HudBubble_k__BackingField; // 0x20
		::System::UInt32 _GreetingID_k__BackingField; // 0x30
		::System::Boolean IEMNCJIEFHC; // 0x34
		::System::Boolean FBOENDAOJJJ; // 0x35
		::System::Byte _padding0[0x2];
		::System::UInt32 BOCOKNFLKID; // 0x38
		::System::Void _ctor(::RPG::GameCore::PamChatGreetingRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PamChatGreetingRow*))((::PBYTE)hIl2Cpp + KJIOGEFIOCD_CTOR_OFFSET))(this, a1);
		}

		::System::Int32 CompareTo(::KJIOGEFIOCD* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::KJIOGEFIOCD*))((::PBYTE)hIl2Cpp + KJIOGEFIOCD_COMPARETO_OFFSET))(this, a1);
		}

		::System::Void NKMJLOIKMGL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJIOGEFIOCD_NKMJLOIKMGL_OFFSET))(this);
		}

		::System::Void IIMMEOHDNJE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJIOGEFIOCD_IIMMEOHDNJE_OFFSET))(this);
		}

		::System::Boolean JCGJHKAGMBH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KJIOGEFIOCD_JCGJHKAGMBH_OFFSET))(this);
		}

		::System::Boolean EAEEJCEFNCM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KJIOGEFIOCD_EAEEJCEFNCM_OFFSET))(this);
		}

		::System::Void FOKPGFJKKAJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJIOGEFIOCD_FOKPGFJKKAJ_OFFSET))(this);
		}

		::System::Boolean DLGFMPNEHGO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KJIOGEFIOCD_DLGFMPNEHGO_OFFSET))(this);
		}

		::System::UInt32 get_GreetingID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KJIOGEFIOCD_GET_GREETINGID_OFFSET))(this);
		}

		::RPG::Client::TextID get_HudBubble()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + KJIOGEFIOCD_GET_HUDBUBBLE_OFFSET))(this);
		}

	};
