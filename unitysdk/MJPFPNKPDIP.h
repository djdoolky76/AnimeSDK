#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MJHDNMKGLBJ.h"

class PCMDFMNIDKF;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MJPFPNKPDIP_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x11F535F0)
#define MJPFPNKPDIP_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x11F537F0)
#define MJPFPNKPDIP_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x11F53760)
#define MJPFPNKPDIP_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x11F53550)
#define MJPFPNKPDIP__CCTOR_OFFSET UNITYSDK_OFFSET(0x11F53640)
#define MJPFPNKPDIP__CTOR_OFFSET UNITYSDK_OFFSET(0x11F536C0)

inline static constexpr unsigned int MJPFPNKPDIP_TypeDefinitionIndex = 46206;

class MJPFPNKPDIP : public ::MJHDNMKGLBJ
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0xE2; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::PCMDFMNIDKF*>* HLAGADJALGO; // 0x48

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MJPFPNKPDIP__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJPFPNKPDIP__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJPFPNKPDIP_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MJPFPNKPDIP_GETCLASSID_OFFSET))(this);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MJPFPNKPDIP_MEFBHFEOKGH_OFFSET))(this);
	}

	static ::MJPFPNKPDIP* JFDOOELFAOA()
	{
		return ((::MJPFPNKPDIP*(*)())((::PBYTE)hIl2Cpp + MJPFPNKPDIP_JFDOOELFAOA_OFFSET))();
	}
};
