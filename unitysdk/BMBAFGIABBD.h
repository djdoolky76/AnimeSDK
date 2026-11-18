#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MJHDNMKGLBJ.h"

namespace MoleMole { class MonoEffectPluginScreenEffect; }

#define BMBAFGIABBD_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x113F3160)
#define BMBAFGIABBD_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x113F32D0)
#define BMBAFGIABBD_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x113F3240)
#define BMBAFGIABBD_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x113F3110)
#define BMBAFGIABBD__CCTOR_OFFSET UNITYSDK_OFFSET(0x113F31B0)
#define BMBAFGIABBD__CTOR_OFFSET UNITYSDK_OFFSET(0x113F3230)

inline static constexpr unsigned int BMBAFGIABBD_TypeDefinitionIndex = 48951;

class BMBAFGIABBD : public ::MJHDNMKGLBJ
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0x71; // 0x0
	::MoleMole::MonoEffectPluginScreenEffect* NPJOLCKIGIN; // 0x48
	::System::Boolean LJBPPLGABBB; // 0x50
	::System::Byte _padding0[0x3];
	::System::Single OCBIKJLBCIA; // 0x54

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BMBAFGIABBD__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMBAFGIABBD__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMBAFGIABBD_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BMBAFGIABBD_GETCLASSID_OFFSET))(this);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BMBAFGIABBD_MEFBHFEOKGH_OFFSET))(this);
	}

	static ::BMBAFGIABBD* JFDOOELFAOA()
	{
		return ((::BMBAFGIABBD*(*)())((::PBYTE)hIl2Cpp + BMBAFGIABBD_JFDOOELFAOA_OFFSET))();
	}
};
