#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MJHDNMKGLBJ.h"
#include "unitysdk/UnityEngine/Vector3.h"

class GJOGLDHJJNP_BKNNJEKBIBC;
namespace System { class String; }

#define GJOGLDHJJNP_GALGFCPKMGC_OFFSET UNITYSDK_OFFSET(0x13D5D210)
#define GJOGLDHJJNP_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x13D5D0A0)
#define GJOGLDHJJNP_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x13D5D900)
#define GJOGLDHJJNP_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x13D5D180)
#define GJOGLDHJJNP_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x13D5D030)
#define GJOGLDHJJNP__CCTOR_OFFSET UNITYSDK_OFFSET(0x13D5D0F0)
#define GJOGLDHJJNP__CTOR_OFFSET UNITYSDK_OFFSET(0x13D5D170)

inline static constexpr unsigned int GJOGLDHJJNP_TypeDefinitionIndex = 85491;

class GJOGLDHJJNP : public ::MJHDNMKGLBJ
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0x83; // 0x0
	::GJOGLDHJJNP_BKNNJEKBIBC* IHPJEIDLNIA; // 0x48
	::System::String* BOACFKIAELP; // 0x50
	::System::String* BODECKIDFGF; // 0x58
	::System::String* EFAIHJCEDKI; // 0x60
	::UnityEngine::Vector3 BOJPNGCHLAI; // 0x68
	::UnityEngine::Vector3 NNIDMMBIJPI; // 0x74
	::System::UInt32 OMIBHJKLLDE; // 0x80
	::UnityEngine::Vector3 FHOJEAEANAL; // 0x84
	::System::Boolean DGGENNIJLNP; // 0x90
	::System::Byte _padding0[0x3];
	::UnityEngine::Vector3 LEOFNNBAGBF; // 0x94
	::UnityEngine::Vector3 EOJAGAIMAIG; // 0xA0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GJOGLDHJJNP__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJOGLDHJJNP__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJOGLDHJJNP_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GJOGLDHJJNP_GETCLASSID_OFFSET))(this);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GJOGLDHJJNP_MEFBHFEOKGH_OFFSET))(this);
	}

	::System::Void GALGFCPKMGC(::System::Int32 DKFLICMMOAO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GJOGLDHJJNP_GALGFCPKMGC_OFFSET))(this, DKFLICMMOAO);
	}

	static ::GJOGLDHJJNP* JFDOOELFAOA()
	{
		return ((::GJOGLDHJJNP*(*)())((::PBYTE)hIl2Cpp + GJOGLDHJJNP_JFDOOELFAOA_OFFSET))();
	}
};
