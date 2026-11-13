#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TSCRendererType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/NativeString.h"
class JPHKBAHBDGB;
namespace UnityEngine { class Renderer; }

#define IDEFMHBFDKL_ABKBOGIGAEH_OFFSET UNITYSDK_OFFSET(0x1777ABE0)
#define IDEFMHBFDKL_ABNMKAPKMGF_1_OFFSET UNITYSDK_OFFSET(0x1777A7C0)
#define IDEFMHBFDKL_ABNMKAPKMGF_OFFSET UNITYSDK_OFFSET(0x1777A770)
#define IDEFMHBFDKL_CLEAR_OFFSET UNITYSDK_OFFSET(0x1777AC70)
#define IDEFMHBFDKL_CTOR_OFFSET UNITYSDK_OFFSET(0x1777ACF0)
#define IDEFMHBFDKL_EFHDNNMCOPB_OFFSET UNITYSDK_OFFSET(0x1777ABA0)
#define IDEFMHBFDKL_EJHLHCOHBCE_OFFSET UNITYSDK_OFFSET(0x1777A6C0)
#define IDEFMHBFDKL_GLDEEJLAFEK_OFFSET UNITYSDK_OFFSET(0x1777A810)
#define IDEFMHBFDKL_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x1777AC20)
#define IDEFMHBFDKL_LFFIEGIEENI_OFFSET UNITYSDK_OFFSET(0x1777AB60)
#define IDEFMHBFDKL_LIACMNMJNBF_OFFSET UNITYSDK_OFFSET(0x1777A6D0)
#define IDEFMHBFDKL_MCJALPKNNMD_OFFSET UNITYSDK_OFFSET(0x1777A6B0)
#define IDEFMHBFDKL_MLNAPKIKHFO_OFFSET UNITYSDK_OFFSET(0x1777AAD0)
#define IDEFMHBFDKL_OBAGKFNPLKN_OFFSET UNITYSDK_OFFSET(0x1777A710)
#define IDEFMHBFDKL_OONEJNFHIBB_OFFSET UNITYSDK_OFFSET(0x1777AB20)
#define IDEFMHBFDKL_PJLOJLFPFFC_OFFSET UNITYSDK_OFFSET(0x1777AA80)
#define IDEFMHBFDKL_PJNMKHLHHGI_OFFSET UNITYSDK_OFFSET(0x1777A6A0)

inline static constexpr unsigned int IDEFMHBFDKL_TypeDefinitionIndex = 72181;

	class IDEFMHBFDKL : public ::System::Object
	{
	public:
		::System::Byte AOOBPOIBCOF; // 0x10
		::System::Byte ICJPJLLAOMC; // 0x11
		::System::Boolean ELLLBPMKMCE; // 0x12
		::System::Byte _padding0[0x1];
		::UnityEngine::Bounds EEEPHMILFKM; // 0x14
		::System::Byte DCCIALFFDPM; // 0x2C
		::RPG::Client::TSCRendererType GMPGDEINODK; // 0x2D
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDEFMHBFDKL_CTOR_OFFSET))(this);
		}

		::System::Boolean PJNMKHLHHGI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IDEFMHBFDKL_PJNMKHLHHGI_OFFSET))(this);
		}

		::UnityEngine::Renderer* MCJALPKNNMD()
		{
			return ((::UnityEngine::Renderer*(*)(::PVOID))((::PBYTE)hIl2Cpp + IDEFMHBFDKL_MCJALPKNNMD_OFFSET))(this);
		}

		::System::Boolean EJHLHCOHBCE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IDEFMHBFDKL_EJHLHCOHBCE_OFFSET))(this);
		}

		::System::Void LIACMNMJNBF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDEFMHBFDKL_LIACMNMJNBF_OFFSET))(this);
		}

		::UnityEngine::Bounds OBAGKFNPLKN()
		{
			return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + IDEFMHBFDKL_OBAGKFNPLKN_OFFSET))(this);
		}

		::System::Boolean ABNMKAPKMGF(::UnityEngine::Renderer* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + IDEFMHBFDKL_ABNMKAPKMGF_OFFSET))(this, a1);
		}

		::System::Boolean ABNMKAPKMGF_1(::JPHKBAHBDGB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JPHKBAHBDGB*))((::PBYTE)hIl2Cpp + IDEFMHBFDKL_ABNMKAPKMGF_1_OFFSET))(this, a1);
		}

		::System::Boolean GLDEEJLAFEK(::UnityEngine::NativeString a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::NativeString))((::PBYTE)hIl2Cpp + IDEFMHBFDKL_GLDEEJLAFEK_OFFSET))(this, a1);
		}

		::System::Void PJLOJLFPFFC(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + IDEFMHBFDKL_PJLOJLFPFFC_OFFSET))(this, a1, a2);
		}

		::System::Boolean MLNAPKIKHFO(::System::Boolean a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IDEFMHBFDKL_MLNAPKIKHFO_OFFSET))(this, a1);
		}

		::System::Void OONEJNFHIBB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDEFMHBFDKL_OONEJNFHIBB_OFFSET))(this);
		}

		::System::Void LFFIEGIEENI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDEFMHBFDKL_LFFIEGIEENI_OFFSET))(this);
		}

		::System::Void EFHDNNMCOPB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDEFMHBFDKL_EFHDNNMCOPB_OFFSET))(this);
		}

		::System::Void ABKBOGIGAEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDEFMHBFDKL_ABKBOGIGAEH_OFFSET))(this);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDEFMHBFDKL_KHGIKBFDLFB_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDEFMHBFDKL_CLEAR_OFFSET))(this);
		}

	};
