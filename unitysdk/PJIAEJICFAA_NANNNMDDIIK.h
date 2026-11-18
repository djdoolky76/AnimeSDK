#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OJGICDJIDFN.h"

class MNJPCFNLLGO;
class PJIAEJICFAA;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PJIAEJICFAA_NANNNMDDIIK_BFDFONMOPBN_OFFSET UNITYSDK_OFFSET(0x178DD0C0)
#define PJIAEJICFAA_NANNNMDDIIK_HKOOFFIBJDN_OFFSET UNITYSDK_OFFSET(0x178DCFE0)
#define PJIAEJICFAA_NANNNMDDIIK_KDDEDEHDIGA_OFFSET UNITYSDK_OFFSET(0x178DCFD0)
#define PJIAEJICFAA_NANNNMDDIIK__CTOR_OFFSET UNITYSDK_OFFSET(0x178DCF40)

inline static constexpr unsigned int PJIAEJICFAA_NANNNMDDIIK_TypeDefinitionIndex = 39661;

class PJIAEJICFAA_NANNNMDDIIK : public ::OJGICDJIDFN
{
public:
	::System::Collections::Generic::List_1<::MNJPCFNLLGO*>* NEGLMJDONDD; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::UInt32>* LGIICPHHHBI; // 0x20
	::System::Boolean GKJEPGPLELL; // 0x28

	::System::Void _ctor(::PJIAEJICFAA* HBNBIBADGNH)
	{
		return ((::System::Void(*)(::PVOID, ::PJIAEJICFAA*))((::PBYTE)hIl2Cpp + PJIAEJICFAA_NANNNMDDIIK__CTOR_OFFSET))(this, HBNBIBADGNH);
	}

	::System::Void KDDEDEHDIGA(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PJIAEJICFAA_NANNNMDDIIK_KDDEDEHDIGA_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::UInt32>* HKOOFFIBJDN()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJIAEJICFAA_NANNNMDDIIK_HKOOFFIBJDN_OFFSET))(this);
	}

	::System::Boolean BFDFONMOPBN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PJIAEJICFAA_NANNNMDDIIK_BFDFONMOPBN_OFFSET))(this);
	}
};
