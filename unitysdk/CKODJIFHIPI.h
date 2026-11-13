#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
class KILLLKIAIDO;
namespace UnityEngine { class Animation; }
namespace UnityEngine::UI { class Image; }

#define CKODJIFHIPI_CTOR_OFFSET UNITYSDK_OFFSET(0x1AD4EE00)
#define CKODJIFHIPI_DLAILGNMFGI_OFFSET UNITYSDK_OFFSET(0x1AD4E870)
#define CKODJIFHIPI_NAJOPNMPHPF_OFFSET UNITYSDK_OFFSET(0x1AD4E920)
#define CKODJIFHIPI_NMPNHKOLHNM_OFFSET UNITYSDK_OFFSET(0x1AD4EB70)
#define CKODJIFHIPI__ONBIND_OFFSET UNITYSDK_OFFSET(0x1AD4EC00)
#define CKODJIFHIPI__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x1AD4EDB0)

inline static constexpr unsigned int CKODJIFHIPI_TypeDefinitionIndex = 73793;

	class CKODJIFHIPI : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::UI::Image* EIAEMNMJOJI; // 0x60
		::UnityEngine::UI::Image* AONLGGIGCKE; // 0x68
		::UnityEngine::Animation* KCOAILOHDND; // 0x70
		::KILLLKIAIDO* HBKCICMELMM; // 0x78
		::System::Boolean CKCJMAHPDCK; // 0x80
		// static const ::System::String* FHNDHOMAAPK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKODJIFHIPI_CTOR_OFFSET))(this);
		}

		::System::Void DLAILGNMFGI(::KILLLKIAIDO* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::KILLLKIAIDO*, ::System::Boolean))((::PBYTE)hIl2Cpp + CKODJIFHIPI_DLAILGNMFGI_OFFSET))(this, a1, a2);
		}

		::System::Void NMPNHKOLHNM(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CKODJIFHIPI_NMPNHKOLHNM_OFFSET))(this, a1);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKODJIFHIPI__ONBIND_OFFSET))(this);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKODJIFHIPI__SETUPVIEW_OFFSET))(this);
		}

		::System::Void NAJOPNMPHPF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKODJIFHIPI_NAJOPNMPHPF_OFFSET))(this);
		}

	};
