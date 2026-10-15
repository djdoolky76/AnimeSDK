#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/APCCFELCPKH_HJOJHIGBBKC.h"
class APCCFELCPKH_PBNOOPCGMKN;
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define APCCFELCPKH_INLFMGJIBLH_CTOR_OFFSET UNITYSDK_OFFSET(0x15B97A60)
#define APCCFELCPKH_INLFMGJIBLH_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15B97B70)
#define APCCFELCPKH_INLFMGJIBLH_EDMMDOLNANO_OFFSET UNITYSDK_OFFSET(0x15B97BC0)
#define APCCFELCPKH_INLFMGJIBLH_GET_OVERLAYEFFECTPATH_OFFSET UNITYSDK_OFFSET(0x15B97A50)
#define APCCFELCPKH_INLFMGJIBLH_IBDILDIDDCI_OFFSET UNITYSDK_OFFSET(0x15B97A40)

inline static constexpr unsigned int APCCFELCPKH_INLFMGJIBLH_TypeDefinitionIndex = 60242;

	class APCCFELCPKH_INLFMGJIBLH : public ::APCCFELCPKH_HJOJHIGBBKC
	{
	public:
		::APCCFELCPKH_PBNOOPCGMKN* HBKCICMELMM; // 0x20
		::System::String* _OverlayEffectPath_k__BackingField; // 0x28
		::System::Void _ctor(::APCCFELCPKH_PBNOOPCGMKN* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::APCCFELCPKH_PBNOOPCGMKN*, ::System::Boolean))((::PBYTE)hIl2Cpp + APCCFELCPKH_INLFMGJIBLH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean IBDILDIDDCI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + APCCFELCPKH_INLFMGJIBLH_IBDILDIDDCI_OFFSET))(this);
		}

		::System::String* get_OverlayEffectPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + APCCFELCPKH_INLFMGJIBLH_GET_OVERLAYEFFECTPATH_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APCCFELCPKH_INLFMGJIBLH_DISPOSE_OFFSET))(this);
		}

		::UnityEngine::GameObject* EDMMDOLNANO(::System::Int32 a1)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + APCCFELCPKH_INLFMGJIBLH_EDMMDOLNANO_OFFSET))(this, a1);
		}

	};
