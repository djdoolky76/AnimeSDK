#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HFBEEIMEBHC.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::ChessStateMachine { class ConfigBase; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EBFNJNBLNEM_DJOKJMINOEE_OFFSET UNITYSDK_OFFSET(0x17220A40)
#define EBFNJNBLNEM_ENFNOFDMMCB_OFFSET UNITYSDK_OFFSET(0x17220680)
#define EBFNJNBLNEM_IIFBMDKHDMD_OFFSET UNITYSDK_OFFSET(0x17220960)
#define EBFNJNBLNEM_KGCIIOKGJMD_OFFSET UNITYSDK_OFFSET(0x172206E0)
#define EBFNJNBLNEM_ONEDKNKMJMD_OFFSET UNITYSDK_OFFSET(0x17220670)
#define EBFNJNBLNEM__CTOR_OFFSET UNITYSDK_OFFSET(0x172205C0)

inline static constexpr unsigned int EBFNJNBLNEM_TypeDefinitionIndex = 75831;

class EBFNJNBLNEM : public ::System::Object
{
public:
	::System::String* guid; // 0x10
	::EBFNJNBLNEM* CNHOJPKKFEB; // 0x18
	::System::String* HIAIKHDFCLN; // 0x20
	::EBFNJNBLNEM* IAPKABMDJNF; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::String*, ::EBFNJNBLNEM*>* CEEMNMIJPEF; // 0x30
	::EBFNJNBLNEM* CPOONGAGDHH; // 0x38
	::HFBEEIMEBHC OPALMJJBPJL; // 0x40
	::System::Boolean LPKPNICEIBH; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBFNJNBLNEM__CTOR_OFFSET))(this);
	}

	::System::Void ONEDKNKMJMD(::System::Collections::Generic::Dictionary_2<::System::String*, ::EBFNJNBLNEM*>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::EBFNJNBLNEM*>*))((::PBYTE)hIl2Cpp + EBFNJNBLNEM_ONEDKNKMJMD_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void ENFNOFDMMCB(::MoleMole::ChessStateMachine::ConfigBase* AELPPMCCDKM)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ChessStateMachine::ConfigBase*))((::PBYTE)hIl2Cpp + EBFNJNBLNEM_ENFNOFDMMCB_OFFSET))(this, AELPPMCCDKM);
	}

	::System::Collections::Generic::List_1<::EBFNJNBLNEM*>* KGCIIOKGJMD()
	{
		return ((::System::Collections::Generic::List_1<::EBFNJNBLNEM*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBFNJNBLNEM_KGCIIOKGJMD_OFFSET))(this);
	}

	::EBFNJNBLNEM* IIFBMDKHDMD(::System::String* FJECEBFCMGD)
	{
		return ((::EBFNJNBLNEM*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EBFNJNBLNEM_IIFBMDKHDMD_OFFSET))(this, FJECEBFCMGD);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::EBFNJNBLNEM*>* DJOKJMINOEE()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::EBFNJNBLNEM*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBFNJNBLNEM_DJOKJMINOEE_OFFSET))(this);
	}
};
