#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CLAADCBPCHM.h"
namespace RPG::GameCore { class LevelCharacterRevive; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class SmoothMask; }

#define EMPKMADIGMG_AFMHNCLHNDP_OFFSET UNITYSDK_OFFSET(0x155A5E70)
#define EMPKMADIGMG_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x155A6340)
#define EMPKMADIGMG_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x155A6410)
#define EMPKMADIGMG_BFDGGBJLEBA_OFFSET UNITYSDK_OFFSET(0x155A5CE0)
#define EMPKMADIGMG_BIOBBNGDGDF_OFFSET UNITYSDK_OFFSET(0x155A5570)
#define EMPKMADIGMG_CTOR_OFFSET UNITYSDK_OFFSET(0x155A64E0)
#define EMPKMADIGMG_EIAFGCLFMNL_OFFSET UNITYSDK_OFFSET(0x155A5FF0)
#define EMPKMADIGMG_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0x155A5400)
#define EMPKMADIGMG_FLJMKABENAD_OFFSET UNITYSDK_OFFSET(0x155A5F30)
#define EMPKMADIGMG_FNMAFAJCMLC_OFFSET UNITYSDK_OFFSET(0x155A6040)
#define EMPKMADIGMG_GNNLGCPMHBM_OFFSET UNITYSDK_OFFSET(0x155A6250)
#define EMPKMADIGMG_JMNFOCENFLP_OFFSET UNITYSDK_OFFSET(0x155A6190)
#define EMPKMADIGMG_JOOGNNINJKL_OFFSET UNITYSDK_OFFSET(0x155A5950)
#define EMPKMADIGMG_MPPEBPAINNI_OFFSET UNITYSDK_OFFSET(0x155A5DA0)
#define EMPKMADIGMG_NGNACJONELO_OFFSET UNITYSDK_OFFSET(0x155A5670)
#define EMPKMADIGMG__ONBIND_OFFSET UNITYSDK_OFFSET(0x155A52A0)

inline static constexpr unsigned int EMPKMADIGMG_TypeDefinitionIndex = 71927;

	class EMPKMADIGMG : public ::CLAADCBPCHM
	{
	public:
		::UnityEngine::UI::Image* IHDDCCAIDIB; // 0xB8
		::UnityEngine::Animation* LIFEJLAJJKO; // 0xC0
		::UnityEngine::Transform* CEGHCGEHNGI; // 0xC8
		::UnityEngine::UI::SmoothMask* MNMNCOJKIID; // 0xD0
		::UnityEngine::UI::Image* AJKPFICIIIP; // 0xD8
		// static const ::System::String* DJCBDJMACFH; // 0x0
		// static const ::System::String* NBJIGEOCMJC; // 0x0
		// static const ::System::String* LMHJHHEELLO; // 0x0
		// static const ::System::String* NNMNBGDBJAN; // 0x0
		// static const ::System::String* JPPPJGGAMJP; // 0x0
		// static const ::System::String* BGDHPOFDKAM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMPKMADIGMG_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMPKMADIGMG__ONBIND_OFFSET))(this);
		}

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMPKMADIGMG_EKGCGIDIFJJ_OFFSET))(this);
		}

		::System::Void NGNACJONELO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMPKMADIGMG_NGNACJONELO_OFFSET))(this);
		}

		::System::Void JOOGNNINJKL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMPKMADIGMG_JOOGNNINJKL_OFFSET))(this);
		}

		::System::Void BFDGGBJLEBA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMPKMADIGMG_BFDGGBJLEBA_OFFSET))(this);
		}

		::System::Void MPPEBPAINNI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EMPKMADIGMG_MPPEBPAINNI_OFFSET))(this, a1);
		}

		::System::Void AFMHNCLHNDP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMPKMADIGMG_AFMHNCLHNDP_OFFSET))(this);
		}

		::System::Void FLJMKABENAD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMPKMADIGMG_FLJMKABENAD_OFFSET))(this);
		}

		::UnityEngine::Transform* EIAFGCLFMNL()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + EMPKMADIGMG_EIAFGCLFMNL_OFFSET))(this);
		}

		::System::Void FNMAFAJCMLC(::RPG::GameCore::LevelCharacterRevive* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelCharacterRevive*))((::PBYTE)hIl2Cpp + EMPKMADIGMG_FNMAFAJCMLC_OFFSET))(this, a1);
		}

		::System::Void JMNFOCENFLP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMPKMADIGMG_JMNFOCENFLP_OFFSET))(this);
		}

		::System::Void BIOBBNGDGDF(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + EMPKMADIGMG_BIOBBNGDGDF_OFFSET))(this, a1, a2);
		}

		::System::Void GNNLGCPMHBM(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EMPKMADIGMG_GNNLGCPMHBM_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMPKMADIGMG_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMPKMADIGMG_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
