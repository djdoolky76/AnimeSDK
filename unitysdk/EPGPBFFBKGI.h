#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MJHDNMKGLBJ.h"

namespace System { class Object; }

#define EPGPBFFBKGI_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x11CCA670)
#define EPGPBFFBKGI_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x11CCA7E0)
#define EPGPBFFBKGI_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x11CCA750)
#define EPGPBFFBKGI_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x11CCA490)
#define EPGPBFFBKGI__CCTOR_OFFSET UNITYSDK_OFFSET(0x11CCA6C0)
#define EPGPBFFBKGI__CTOR_OFFSET UNITYSDK_OFFSET(0x11CCA740)

inline static constexpr unsigned int EPGPBFFBKGI_TypeDefinitionIndex = 52542;

class EPGPBFFBKGI : public ::MJHDNMKGLBJ
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0x61; // 0x0
	::Il2CppArray<::System::Object*>* PIHFNNBDCHP; // 0x48
	::Il2CppArray<::System::Object*>* DLPODFAICLC; // 0x50
	::System::Boolean NDDIFFAHODF; // 0x58

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EPGPBFFBKGI__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPGPBFFBKGI__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPGPBFFBKGI_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPGPBFFBKGI_GETCLASSID_OFFSET))(this);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPGPBFFBKGI_MEFBHFEOKGH_OFFSET))(this);
	}

	static ::EPGPBFFBKGI* JFDOOELFAOA()
	{
		return ((::EPGPBFFBKGI*(*)())((::PBYTE)hIl2Cpp + EPGPBFFBKGI_JFDOOELFAOA_OFFSET))();
	}
};
