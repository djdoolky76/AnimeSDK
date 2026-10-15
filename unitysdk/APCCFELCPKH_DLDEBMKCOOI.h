#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/APCCFELCPKH_HJOJHIGBBKC.h"
class APCCFELCPKH_PBNOOPCGMKN;
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define APCCFELCPKH_DLDEBMKCOOI_CTOR_OFFSET UNITYSDK_OFFSET(0x15B9FC70)
#define APCCFELCPKH_DLDEBMKCOOI_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15BA0B70)
#define APCCFELCPKH_DLDEBMKCOOI_EDMMDOLNANO_OFFSET UNITYSDK_OFFSET(0x15BA0BC0)
#define APCCFELCPKH_DLDEBMKCOOI_GET_OVERLAYEFFECTPATH_OFFSET UNITYSDK_OFFSET(0x15BA0B20)
#define APCCFELCPKH_DLDEBMKCOOI_IBDILDIDDCI_OFFSET UNITYSDK_OFFSET(0x15BA0B60)
#define APCCFELCPKH_DLDEBMKCOOI_LNGDBLEKGHG_OFFSET UNITYSDK_OFFSET(0x15BA0C90)

	class APCCFELCPKH_DLDEBMKCOOI : public ::APCCFELCPKH_HJOJHIGBBKC
	{
	public:
		::APCCFELCPKH_PBNOOPCGMKN* HBKCICMELMM; // 0x20
		// static const ::System::String* EDIAOIMCHEC; // 0x0
		::System::Void _ctor(::APCCFELCPKH_PBNOOPCGMKN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::APCCFELCPKH_PBNOOPCGMKN*))((::PBYTE)hIl2Cpp + APCCFELCPKH_DLDEBMKCOOI_CTOR_OFFSET))(this, a1);
		}

		::System::String* get_OverlayEffectPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + APCCFELCPKH_DLDEBMKCOOI_GET_OVERLAYEFFECTPATH_OFFSET))(this);
		}

		::System::Boolean IBDILDIDDCI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + APCCFELCPKH_DLDEBMKCOOI_IBDILDIDDCI_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APCCFELCPKH_DLDEBMKCOOI_DISPOSE_OFFSET))(this);
		}

		::UnityEngine::GameObject* EDMMDOLNANO(::System::Int32 a1)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + APCCFELCPKH_DLDEBMKCOOI_EDMMDOLNANO_OFFSET))(this, a1);
		}

		::System::Void LNGDBLEKGHG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APCCFELCPKH_DLDEBMKCOOI_LNGDBLEKGHG_OFFSET))(this);
		}

	};
