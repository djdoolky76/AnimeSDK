#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PBJOCICFNGK.h"
#include "unitysdk/LIBOIKJGAIH.h"

class IOOIHHOJOPI;
namespace System { class Object; }
namespace System { class String; }
template <typename T> class LJHFMILANJA_1;

#define NIKIDLAAOLL_AMABEFBJFAA_OFFSET UNITYSDK_OFFSET(0x1AE23320)
#define NIKIDLAAOLL_EHEKAHIIGEH_OFFSET UNITYSDK_OFFSET(0x1AE22C90)
#define NIKIDLAAOLL_EJMLADDEHAE_OFFSET UNITYSDK_OFFSET(0x1AE227D0)
#define NIKIDLAAOLL_HPPLBNIKOLN_OFFSET UNITYSDK_OFFSET(0x1AE22D90)
#define NIKIDLAAOLL_IPCDDNMMKPF_OFFSET UNITYSDK_OFFSET(0x1AE23060)
#define NIKIDLAAOLL_JHMPNJLFHKC_OFFSET UNITYSDK_OFFSET(0x1AE22F60)
#define NIKIDLAAOLL_LOPABKBANAN_OFFSET UNITYSDK_OFFSET(0x1AE23160)
#define NIKIDLAAOLL__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE22C40)

inline static constexpr unsigned int NIKIDLAAOLL_TypeDefinitionIndex = 70130;

class NIKIDLAAOLL : public ::PBJOCICFNGK
{
public:
	::LJHFMILANJA_1<::System::Object*>* JMINOGAOFIL; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIKIDLAAOLL__CTOR_OFFSET))(this);
	}

	::System::Void EJMLADDEHAE(::LIBOIKJGAIH& EIEOJFEPMAB, ::IOOIHHOJOPI* IOKOLJDCKPN)
	{
		return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::IOOIHHOJOPI*))((::PBYTE)hIl2Cpp + NIKIDLAAOLL_EJMLADDEHAE_OFFSET))(this, EIEOJFEPMAB, IOKOLJDCKPN);
	}

	::System::Boolean EHEKAHIIGEH()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NIKIDLAAOLL_EHEKAHIIGEH_OFFSET))(this);
	}

	::System::Boolean HPPLBNIKOLN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NIKIDLAAOLL_HPPLBNIKOLN_OFFSET))(this);
	}

	::System::Boolean JHMPNJLFHKC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NIKIDLAAOLL_JHMPNJLFHKC_OFFSET))(this);
	}

	::System::String* IPCDDNMMKPF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NIKIDLAAOLL_IPCDDNMMKPF_OFFSET))(this);
	}

	::System::String* LOPABKBANAN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NIKIDLAAOLL_LOPABKBANAN_OFFSET))(this);
	}

	::System::String* AMABEFBJFAA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NIKIDLAAOLL_AMABEFBJFAA_OFFSET))(this);
	}
};
