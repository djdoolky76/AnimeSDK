#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class NCOHFCFKLND;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EPPAGJLBGIK_EPDLFINGLJB_OFFSET UNITYSDK_OFFSET(0x10F50C90)
#define EPPAGJLBGIK_JKHFEJJKJCC_OFFSET UNITYSDK_OFFSET(0x10F50B90)
#define EPPAGJLBGIK_KBHPFCFCIOM_OFFSET UNITYSDK_OFFSET(0x10F50DD0)
#define EPPAGJLBGIK_LDPMNPDAPMD_OFFSET UNITYSDK_OFFSET(0x10F50CA0)
#define EPPAGJLBGIK_MOGLHJOAOPI_OFFSET UNITYSDK_OFFSET(0x10F50C80)
#define EPPAGJLBGIK__CTOR_OFFSET UNITYSDK_OFFSET(0x10F50B80)

inline static constexpr unsigned int EPPAGJLBGIK_TypeDefinitionIndex = 71813;

class EPPAGJLBGIK : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* _FONCIPDIJBK_k__BackingField; // 0x10

	::System::Void _ctor(::System::String* LCEGOBBEECM)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPPAGJLBGIK__CTOR_OFFSET))(this, LCEGOBBEECM);
	}

	::NCOHFCFKLND* JKHFEJJKJCC(::System::String* HNOPAJLDCFB)
	{
		return ((::NCOHFCFKLND*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPPAGJLBGIK_JKHFEJJKJCC_OFFSET))(this, HNOPAJLDCFB);
	}

	::System::Void MOGLHJOAOPI(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + EPPAGJLBGIK_MOGLHJOAOPI_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* EPDLFINGLJB()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPPAGJLBGIK_EPDLFINGLJB_OFFSET))(this);
	}

	::System::Boolean LDPMNPDAPMD(::System::String* MCOHLHMKLIP, ::System::Int32& HFMHOELKCAJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Int32&))((::PBYTE)hIl2Cpp + EPPAGJLBGIK_LDPMNPDAPMD_OFFSET))(this, MCOHLHMKLIP, HFMHOELKCAJ);
	}

	::System::Boolean KBHPFCFCIOM(::System::String* MCOHLHMKLIP, ::System::Boolean& HFMHOELKCAJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Boolean&))((::PBYTE)hIl2Cpp + EPPAGJLBGIK_KBHPFCFCIOM_OFFSET))(this, MCOHLHMKLIP, HFMHOELKCAJ);
	}
};
