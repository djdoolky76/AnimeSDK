#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/HFNOBEJGGMK_EPOPAFKBKGH.h"
#include "unitysdk/System/Object.h"

class EIFBDMCNKAF;
class FPKIFHKCBEK;
namespace MoleMole { class UIGalgamePageContext; }
namespace MoleMole { class UIGalgamePageController; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HFNOBEJGGMK_JIBFKNHADON_FJDCJAIBFBB_OFFSET UNITYSDK_OFFSET(0x19E0D230)
#define HFNOBEJGGMK_JIBFKNHADON_FLDDBJDHGMO_OFFSET UNITYSDK_OFFSET(0x19E0D220)
#define HFNOBEJGGMK_JIBFKNHADON_OMBBDJDMGEC_OFFSET UNITYSDK_OFFSET(0x19E0D490)
#define HFNOBEJGGMK_JIBFKNHADON__CTOR_OFFSET UNITYSDK_OFFSET(0x19E0D160)

inline static constexpr unsigned int HFNOBEJGGMK_JIBFKNHADON_TypeDefinitionIndex = 68498;

class HFNOBEJGGMK_JIBFKNHADON : public ::System::Object
{
public:
	::System::String* CCMGBEDFBIL; // 0x10
	::Foundation::AssetRequestHandle IAFHBCHLBME; // 0x18
	::System::Action* PEGBHJCNKJG; // 0x38
	::System::Action* DIBJMKBGCBK; // 0x40
	::EIFBDMCNKAF* GNNDLFJBGJP; // 0x48
	::System::Action* IGPJKNNJECO; // 0x50
	::MoleMole::UIGalgamePageController* JGFKBBFIPJF; // 0x58
	::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>* BAMCHIEEGIK; // 0x60
	::System::Action_1<::FPKIFHKCBEK*>* NEJOHEOOPMC; // 0x68
	::MoleMole::UIGalgamePageContext* JLNMNKICCKE; // 0x70
	::System::Int64 GEHACPDKOHC; // 0x78
	::System::Boolean NHEHJOHCHOM; // 0x80
	::System::Byte _padding0[0x3];
	::System::Int32 _KDEMNEEDJDI_k__BackingField; // 0x84
	::HFNOBEJGGMK_EPOPAFKBKGH DOJAOFLMNEL; // 0x88

	::System::Void _ctor(::System::Int32 MGMDLMBEDJF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HFNOBEJGGMK_JIBFKNHADON__CTOR_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void FLDDBJDHGMO(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HFNOBEJGGMK_JIBFKNHADON_FLDDBJDHGMO_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void FJDCJAIBFBB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFNOBEJGGMK_JIBFKNHADON_FJDCJAIBFBB_OFFSET))(this);
	}

	::System::Int32 OMBBDJDMGEC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HFNOBEJGGMK_JIBFKNHADON_OMBBDJDMGEC_OFFSET))(this);
	}
};
