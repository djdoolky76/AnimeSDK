#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EIJFHONJPAK;
class FCOEMCEDLNL;

#define EIJFHONJPAK_CTOR_OFFSET UNITYSDK_OFFSET(0x1CD8A530)
#define EIJFHONJPAK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CD8A410)

	class EIJFHONJPAK : public ::System::Object
	{
	public:
		::System::UInt32 LLICIMBCNPF; // 0x10
		::System::UInt32 AAGKEBFHLMC; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIJFHONJPAK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::EIJFHONJPAK* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::EIJFHONJPAK*))((::PBYTE)hIl2Cpp + EIJFHONJPAK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
