#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MJHDNMKGLBJ.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Config { class MovableFollowTrait; }

#define OGECDNFEBIO_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0xFB86070)
#define OGECDNFEBIO_GETCLASSID_OFFSET UNITYSDK_OFFSET(0xFB85F00)
#define OGECDNFEBIO_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0xFB860E0)
#define OGECDNFEBIO_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0xFB85FE0)
#define OGECDNFEBIO_ONCLEAN_OFFSET UNITYSDK_OFFSET(0xFB85DC0)
#define OGECDNFEBIO__CCTOR_OFFSET UNITYSDK_OFFSET(0xFB85F50)
#define OGECDNFEBIO__CTOR_OFFSET UNITYSDK_OFFSET(0xFB85FD0)

inline static constexpr unsigned int OGECDNFEBIO_TypeDefinitionIndex = 90792;

class OGECDNFEBIO : public ::MJHDNMKGLBJ
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0xC8; // 0x0
	::MoleMole::EntityHandle OHPPIFAHIJI; // 0x48
	::UnityEngine::Vector3 ODNKEAPMILG; // 0x58
	::System::Boolean LMOIANFHLFK; // 0x64
	::System::Byte _padding0[0x3];
	::System::UInt32 KKKCECGDOFN; // 0x68

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OGECDNFEBIO__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGECDNFEBIO__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGECDNFEBIO_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OGECDNFEBIO_GETCLASSID_OFFSET))(this);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OGECDNFEBIO_MEFBHFEOKGH_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC(::MoleMole::Config::MovableFollowTrait* CGMNNBDIGDJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::MovableFollowTrait*))((::PBYTE)hIl2Cpp + OGECDNFEBIO_BBOMJDBNHIC_OFFSET))(this, CGMNNBDIGDJ);
	}

	static ::OGECDNFEBIO* JFDOOELFAOA()
	{
		return ((::OGECDNFEBIO*(*)())((::PBYTE)hIl2Cpp + OGECDNFEBIO_JFDOOELFAOA_OFFSET))();
	}
};
