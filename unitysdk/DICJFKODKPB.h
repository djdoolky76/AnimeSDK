#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JKDPPEMHNLE.h"
#include "unitysdk/MJHDNMKGLBJ.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Config { class MovableTrait; }
namespace System { class String; }
namespace UnityEngine::Rendering::Universal::Internal { class OutlineObjectRenderer; }

#define DICJFKODKPB_AKOANLLMCJP_OFFSET UNITYSDK_OFFSET(0x149A7190)
#define DICJFKODKPB_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x149A7380)
#define DICJFKODKPB_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x149A7020)
#define DICJFKODKPB_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x149A7300)
#define DICJFKODKPB_LOCGNNJNFDP_OFFSET UNITYSDK_OFFSET(0x149A7280)
#define DICJFKODKPB_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x149A7100)
#define DICJFKODKPB_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x149A6FC0)
#define DICJFKODKPB__CCTOR_OFFSET UNITYSDK_OFFSET(0x149A7070)
#define DICJFKODKPB__CTOR_OFFSET UNITYSDK_OFFSET(0x149A70F0)

inline static constexpr unsigned int DICJFKODKPB_TypeDefinitionIndex = 55195;

class DICJFKODKPB : public ::MJHDNMKGLBJ
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0xC9; // 0x0
	::UnityEngine::Rendering::Universal::Internal::OutlineObjectRenderer* JAIHBFNBDED; // 0x48
	::System::String* OBCHLBGPHIL; // 0x50
	::UnityEngine::Vector3 EPFHFPPCAJB; // 0x58
	::UnityEngine::Vector3 HBLHBAJFAOM; // 0x64
	::System::Single KJBMKLPBLMF; // 0x70
	::System::Single IEACJOMFECJ; // 0x74
	::System::Boolean MFLJNPLCDEM; // 0x78
	::System::Byte _padding0[0x3];
	::JKDPPEMHNLE DDAPAAHOMDC; // 0x7C

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DICJFKODKPB__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DICJFKODKPB__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DICJFKODKPB_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DICJFKODKPB_GETCLASSID_OFFSET))(this);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DICJFKODKPB_MEFBHFEOKGH_OFFSET))(this);
	}

	::System::Void AKOANLLMCJP(::System::String* FIDGOIKJONI, ::JKDPPEMHNLE JCHNDMMNJEO, ::UnityEngine::Vector3 LCLDGBBHAIL, ::UnityEngine::Vector3 HCJGJLAMFIC)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::JKDPPEMHNLE, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DICJFKODKPB_AKOANLLMCJP_OFFSET))(this, FIDGOIKJONI, JCHNDMMNJEO, LCLDGBBHAIL, HCJGJLAMFIC);
	}

	::System::Void LOCGNNJNFDP(::System::Boolean NLMBKPAHFLH, ::System::Int32 IGDFGMIDJOG)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + DICJFKODKPB_LOCGNNJNFDP_OFFSET))(this, NLMBKPAHFLH, IGDFGMIDJOG);
	}

	static ::DICJFKODKPB* JFDOOELFAOA()
	{
		return ((::DICJFKODKPB*(*)())((::PBYTE)hIl2Cpp + DICJFKODKPB_JFDOOELFAOA_OFFSET))();
	}

	::System::Void BBOMJDBNHIC(::MoleMole::Config::MovableTrait* MFKJGCGHCPN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::MovableTrait*))((::PBYTE)hIl2Cpp + DICJFKODKPB_BBOMJDBNHIC_OFFSET))(this, MFKJGCGHCPN);
	}
};
