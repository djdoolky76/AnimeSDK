#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TSCRendererType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/NativeString.h"
class JPHKBAHBDGB;
namespace UnityEngine { class Renderer; }

#define IDEFMHBFDKL_ABKBOGIGAEH_OFFSET UNITYSDK_OFFSET(0x15EC2E70)
#define IDEFMHBFDKL_ABNMKAPKMGF_1_OFFSET UNITYSDK_OFFSET(0x15EC2A50)
#define IDEFMHBFDKL_ABNMKAPKMGF_OFFSET UNITYSDK_OFFSET(0x15EC2A00)
#define IDEFMHBFDKL_CLEAR_OFFSET UNITYSDK_OFFSET(0x15EC2F00)
#define IDEFMHBFDKL_CTOR_OFFSET UNITYSDK_OFFSET(0x15EC2F80)
#define IDEFMHBFDKL_EFHDNNMCOPB_OFFSET UNITYSDK_OFFSET(0x15EC2E30)
#define IDEFMHBFDKL_EJHLHCOHBCE_OFFSET UNITYSDK_OFFSET(0x15EC2940)
#define IDEFMHBFDKL_GLDEEJLAFEK_OFFSET UNITYSDK_OFFSET(0x15EC2AA0)
#define IDEFMHBFDKL_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x15EC2EB0)
#define IDEFMHBFDKL_LFFIEGIEENI_OFFSET UNITYSDK_OFFSET(0x15EC2DF0)
#define IDEFMHBFDKL_LIACMNMJNBF_OFFSET UNITYSDK_OFFSET(0x15EC2950)
#define IDEFMHBFDKL_MCJALPKNNMD_OFFSET UNITYSDK_OFFSET(0x15EC2930)
#define IDEFMHBFDKL_MLNAPKIKHFO_OFFSET UNITYSDK_OFFSET(0x15EC2D60)
#define IDEFMHBFDKL_OBAGKFNPLKN_OFFSET UNITYSDK_OFFSET(0x15EC2990)
#define IDEFMHBFDKL_OONEJNFHIBB_OFFSET UNITYSDK_OFFSET(0x15EC2DB0)
#define IDEFMHBFDKL_PJLOJLFPFFC_OFFSET UNITYSDK_OFFSET(0x15EC2D10)
#define IDEFMHBFDKL_PJNMKHLHHGI_OFFSET UNITYSDK_OFFSET(0x15EC2920)

inline static constexpr unsigned int IDEFMHBFDKL_TypeDefinitionIndex = 70215;

	class IDEFMHBFDKL : public ::System::Object
	{
	public:
		::System::Byte DCCIALFFDPM; // 0x10
		::System::Boolean ELLLBPMKMCE; // 0x11
		::System::Byte AOOBPOIBCOF; // 0x12
		::RPG::Client::TSCRendererType GMPGDEINODK; // 0x13
		::System::Byte ICJPJLLAOMC; // 0x14
		::System::Byte _padding0[0x3];
		::UnityEngine::Bounds EEEPHMILFKM; // 0x18
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
