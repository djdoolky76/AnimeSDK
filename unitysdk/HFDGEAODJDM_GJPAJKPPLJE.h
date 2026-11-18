#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HOCDHMEPPEG.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"

#define HFDGEAODJDM_GJPAJKPPLJE_AAHMACBDCPN_OFFSET UNITYSDK_OFFSET(0x15B45500)
#define HFDGEAODJDM_GJPAJKPPLJE_LIDNPLMPHAL_OFFSET UNITYSDK_OFFSET(0x15B45460)
#define HFDGEAODJDM_GJPAJKPPLJE__CTOR_OFFSET UNITYSDK_OFFSET(0x15B451B0)

inline static constexpr unsigned int HFDGEAODJDM_GJPAJKPPLJE_TypeDefinitionIndex = 60776;

class HFDGEAODJDM_GJPAJKPPLJE : public ::System::Object
{
public:
	::HOCDHMEPPEG ABMKEFPKPMD; // 0x10
	::HOCDHMEPPEG GPELAKKMLBG; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFDGEAODJDM_GJPAJKPPLJE__CTOR_OFFSET))(this);
	}

	::System::Void LIDNPLMPHAL(::Foundation::ViewObject::ViewObjectHandle DMIAICJPPDL)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::ViewObjectHandle))((::PBYTE)hIl2Cpp + HFDGEAODJDM_GJPAJKPPLJE_LIDNPLMPHAL_OFFSET))(this, DMIAICJPPDL);
	}

	::System::Void AAHMACBDCPN(::System::Int32 NFFNEFLKPDG)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HFDGEAODJDM_GJPAJKPPLJE_AAHMACBDCPN_OFFSET))(this, NFFNEFLKPDG);
	}
};
