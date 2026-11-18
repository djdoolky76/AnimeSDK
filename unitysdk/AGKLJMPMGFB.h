#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/CinemaCameraPosEnum.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ENFBLKAMAFO.h"

class LPCJLPMNJEL;
namespace MoleMole { class UICinemaPlayPageController; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AGKLJMPMGFB_AKMKCGILOHB_OFFSET UNITYSDK_OFFSET(0x17CC7FE0)
#define AGKLJMPMGFB_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x17CC7D00)
#define AGKLJMPMGFB_BDBIMHEFCED_OFFSET UNITYSDK_OFFSET(0x17CC8C10)
#define AGKLJMPMGFB_BDJJPDKCHKO_OFFSET UNITYSDK_OFFSET(0x17CC8A50)
#define AGKLJMPMGFB_CLPPPADACHN_OFFSET UNITYSDK_OFFSET(0x17CC8710)
#define AGKLJMPMGFB_FLKOEECJLDF_OFFSET UNITYSDK_OFFSET(0x17CC93B0)
#define AGKLJMPMGFB_GCFPNJJANJC_OFFSET UNITYSDK_OFFSET(0x17CC8B10)
#define AGKLJMPMGFB_HGOPMPEJKFL_OFFSET UNITYSDK_OFFSET(0x17CC85B0)
#define AGKLJMPMGFB_NNMGAOGBCBL_OFFSET UNITYSDK_OFFSET(0x17CC94B0)
#define AGKLJMPMGFB_OICOHGKPNCN_OFFSET UNITYSDK_OFFSET(0x17CC92B0)
#define AGKLJMPMGFB_PBNILIAKGEB_OFFSET UNITYSDK_OFFSET(0x17CC7E20)
#define AGKLJMPMGFB__CTOR_OFFSET UNITYSDK_OFFSET(0x17CC7CF0)

inline static constexpr unsigned int AGKLJMPMGFB_TypeDefinitionIndex = 59284;

class AGKLJMPMGFB : public ::System::Object
{
public:
	::System::Action* FMEOGKNCBEO; // 0x10
	::MoleMole::UICinemaPlayPageController* JGFKBBFIPJF; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::LPCJLPMNJEL*>* MJNINAFEAPA; // 0x20
	::System::Collections::Generic::List_1<::System::Int32>* CMGFNEHDPHA; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGKLJMPMGFB__CTOR_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC(::MoleMole::UICinemaPlayPageController* JGFKBBFIPJF)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UICinemaPlayPageController*))((::PBYTE)hIl2Cpp + AGKLJMPMGFB_BBOMJDBNHIC_OFFSET))(this, JGFKBBFIPJF);
	}

	::System::Void PBNILIAKGEB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGKLJMPMGFB_PBNILIAKGEB_OFFSET))(this);
	}

	::System::Void AKMKCGILOHB(::ENFBLKAMAFO MNABELGACPC)
	{
		return ((::System::Void(*)(::PVOID, ::ENFBLKAMAFO))((::PBYTE)hIl2Cpp + AGKLJMPMGFB_AKMKCGILOHB_OFFSET))(this, MNABELGACPC);
	}

	::System::Void HGOPMPEJKFL(::ENFBLKAMAFO MNABELGACPC)
	{
		return ((::System::Void(*)(::PVOID, ::ENFBLKAMAFO))((::PBYTE)hIl2Cpp + AGKLJMPMGFB_HGOPMPEJKFL_OFFSET))(this, MNABELGACPC);
	}

	::System::Void CLPPPADACHN(::MoleMole::CinemaCameraPosEnum FDAOLKDNALL)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::CinemaCameraPosEnum))((::PBYTE)hIl2Cpp + AGKLJMPMGFB_CLPPPADACHN_OFFSET))(this, FDAOLKDNALL);
	}

	::System::Void BDBIMHEFCED(::LPCJLPMNJEL* BDHOILPIGKB, ::System::Boolean CAAFEGLOALC)
	{
		return ((::System::Void(*)(::PVOID, ::LPCJLPMNJEL*, ::System::Boolean))((::PBYTE)hIl2Cpp + AGKLJMPMGFB_BDBIMHEFCED_OFFSET))(this, BDHOILPIGKB, CAAFEGLOALC);
	}

	::System::Void OICOHGKPNCN(::System::Int32 KNHKFCBJHAI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AGKLJMPMGFB_OICOHGKPNCN_OFFSET))(this, KNHKFCBJHAI);
	}

	::System::Void BDJJPDKCHKO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGKLJMPMGFB_BDJJPDKCHKO_OFFSET))(this);
	}

	::System::Void NNMGAOGBCBL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGKLJMPMGFB_NNMGAOGBCBL_OFFSET))(this);
	}

	::System::Void GCFPNJJANJC(::System::Int32 KNHKFCBJHAI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AGKLJMPMGFB_GCFPNJJANJC_OFFSET))(this, KNHKFCBJHAI);
	}

	::System::Void FLKOEECJLDF(::System::Int32 KNHKFCBJHAI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AGKLJMPMGFB_FLKOEECJLDF_OFFSET))(this, KNHKFCBJHAI);
	}
};
