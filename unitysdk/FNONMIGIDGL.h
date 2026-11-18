#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JHKOPDIHKJK.h"

class EMAPKALMOEF;

#define FNONMIGIDGL_BLIOCCCNKDK_OFFSET UNITYSDK_OFFSET(0x156CD9C0)
#define FNONMIGIDGL_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x156CD660)
#define FNONMIGIDGL_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x156CD8F0)
#define FNONMIGIDGL_JFNBOIBNHPA_OFFSET UNITYSDK_OFFSET(0x156CD8E0)
#define FNONMIGIDGL_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x156CD850)
#define FNONMIGIDGL_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x156CD730)
#define FNONMIGIDGL__CCTOR_OFFSET UNITYSDK_OFFSET(0x156CD6B0)
#define FNONMIGIDGL__CTOR_OFFSET UNITYSDK_OFFSET(0x156CD790)

inline static constexpr unsigned int FNONMIGIDGL_TypeDefinitionIndex = 83818;

class FNONMIGIDGL : public ::JHKOPDIHKJK
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0x205; // 0x0
	::EMAPKALMOEF* _FJAAAAACINE_k__BackingField; // 0x50

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FNONMIGIDGL__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNONMIGIDGL__CTOR_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FNONMIGIDGL_GETCLASSID_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNONMIGIDGL_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FNONMIGIDGL_MEFBHFEOKGH_OFFSET))(this);
	}

	::System::Void JFNBOIBNHPA(::EMAPKALMOEF* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::EMAPKALMOEF*))((::PBYTE)hIl2Cpp + FNONMIGIDGL_JFNBOIBNHPA_OFFSET))(this, EGEGIMGMJHN);
	}

	static ::FNONMIGIDGL* JFDOOELFAOA()
	{
		return ((::FNONMIGIDGL*(*)())((::PBYTE)hIl2Cpp + FNONMIGIDGL_JFDOOELFAOA_OFFSET))();
	}

	::EMAPKALMOEF* BLIOCCCNKDK()
	{
		return ((::EMAPKALMOEF*(*)(::PVOID))((::PBYTE)hIl2Cpp + FNONMIGIDGL_BLIOCCCNKDK_OFFSET))(this);
	}
};
