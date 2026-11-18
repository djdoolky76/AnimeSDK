#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MJHDNMKGLBJ.h"
#include "unitysdk/MoleMole/Config/BuddyFightModeType.h"

class AGJFDPBLDDF;
class DGOGFACOMBJ;
namespace System { class Action; }

#define DCAPDHHFBNN_ELCKEENAILK_OFFSET UNITYSDK_OFFSET(0x15A2B540)
#define DCAPDHHFBNN_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x15A2B340)
#define DCAPDHHFBNN_INLLEDGNGKL_OFFSET UNITYSDK_OFFSET(0x15A2B6E0)
#define DCAPDHHFBNN_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x15A2B420)
#define DCAPDHHFBNN_JLMEGPMJLGM_OFFSET UNITYSDK_OFFSET(0x15A2B4A0)
#define DCAPDHHFBNN_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x15A2B4B0)
#define DCAPDHHFBNN_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x15A2B2F0)
#define DCAPDHHFBNN__CCTOR_OFFSET UNITYSDK_OFFSET(0x15A2B390)
#define DCAPDHHFBNN__CTOR_OFFSET UNITYSDK_OFFSET(0x15A2B410)

inline static constexpr unsigned int DCAPDHHFBNN_TypeDefinitionIndex = 89699;

class DCAPDHHFBNN : public ::MJHDNMKGLBJ
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0xF; // 0x0
	::System::Action* BBFKJPBDBJI; // 0x48
	::AGJFDPBLDDF* PPLBNIIJHBB; // 0x50
	::AGJFDPBLDDF* MKIPFDHJHHO; // 0x58
	::System::Action* KIPNPKOCPAN; // 0x60
	::System::Action* KKJJLIMJDBA; // 0x68
	::MoleMole::Config::BuddyFightModeType CINEKABMNLE; // 0x70

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DCAPDHHFBNN__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCAPDHHFBNN__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCAPDHHFBNN_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DCAPDHHFBNN_GETCLASSID_OFFSET))(this);
	}

	static ::DCAPDHHFBNN* JFDOOELFAOA()
	{
		return ((::DCAPDHHFBNN*(*)())((::PBYTE)hIl2Cpp + DCAPDHHFBNN_JFDOOELFAOA_OFFSET))();
	}

	::MoleMole::Config::BuddyFightModeType JLMEGPMJLGM()
	{
		return ((::MoleMole::Config::BuddyFightModeType(*)(::PVOID))((::PBYTE)hIl2Cpp + DCAPDHHFBNN_JLMEGPMJLGM_OFFSET))(this);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DCAPDHHFBNN_MEFBHFEOKGH_OFFSET))(this);
	}

	::System::Void ELCKEENAILK(::MoleMole::Config::BuddyFightModeType EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::BuddyFightModeType))((::PBYTE)hIl2Cpp + DCAPDHHFBNN_ELCKEENAILK_OFFSET))(this, EGEGIMGMJHN);
	}

	::DGOGFACOMBJ* INLLEDGNGKL()
	{
		return ((::DGOGFACOMBJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + DCAPDHHFBNN_INLLEDGNGKL_OFFSET))(this);
	}
};
