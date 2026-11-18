#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MENGGGFCOHA.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HOBLFHDCDKK_AOPDGFNELAN_OFFSET UNITYSDK_OFFSET(0x1A4F3EC0)
#define HOBLFHDCDKK_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1A4F3DD0)
#define HOBLFHDCDKK_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1A4F3DB0)
#define HOBLFHDCDKK_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1A4F3DC0)
#define HOBLFHDCDKK__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4F3DA0)

inline static constexpr unsigned int HOBLFHDCDKK_TypeDefinitionIndex = 11683;

class HOBLFHDCDKK : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* EHANHACHEIJ; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x18
	::MENGGGFCOHA HBDPAIKANDB; // 0x20
	::System::Byte BGNBHAPEFNC; // 0x30
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x31
	::System::Byte CNIAANMNOCF; // 0x32

	::System::Void _ctor(::MENGGGFCOHA LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::MENGGGFCOHA, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + HOBLFHDCDKK__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HOBLFHDCDKK_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOBLFHDCDKK_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOBLFHDCDKK_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* AOPDGFNELAN()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOBLFHDCDKK_AOPDGFNELAN_OFFSET))(this);
	}
};
