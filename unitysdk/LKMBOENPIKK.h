#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/IGKFNIEJGLM.h"
class DCGIDEKLGAJ;
class HDPEJIGDNJB;
class ILEICNLJLEF;
namespace UnityEngine { class Animation; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class SmoothMask; }

#define LKMBOENPIKK_BEDEIMHLHPJ_OFFSET UNITYSDK_OFFSET(0xBFF7720)
#define LKMBOENPIKK_BNKGMDLBNKF_OFFSET UNITYSDK_OFFSET(0xBFF7AA0)
#define LKMBOENPIKK_CTOR_OFFSET UNITYSDK_OFFSET(0xBFF7B80)
#define LKMBOENPIKK_HLCBFKOKKMB_OFFSET UNITYSDK_OFFSET(0xBFF7940)
#define LKMBOENPIKK_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0xBFF73A0)
#define LKMBOENPIKK_KMALLACLJKM_OFFSET UNITYSDK_OFFSET(0xBFF7780)
#define LKMBOENPIKK_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0xBFF7690)
#define LKMBOENPIKK__ONBIND_OFFSET UNITYSDK_OFFSET(0xBFF7060)
#define LKMBOENPIKK__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0xBFF72C0)
#define LKMBOENPIKK__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xBFF7350)

inline static constexpr unsigned int LKMBOENPIKK_TypeDefinitionIndex = 74003;

	class LKMBOENPIKK : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::Animation* JLEKHHOCICA; // 0x60
		::UnityEngine::RectTransform* AOABGBODJJL; // 0x68
		::UnityEngine::UI::SmoothMask* MKEOGDIHACI; // 0x70
		::DCGIDEKLGAJ* DBMOGHNMOKN; // 0x78
		::HDPEJIGDNJB* PNPNGCLCCNP; // 0x80
		::UnityEngine::Transform* MACEILOIEKA; // 0x88
		// static const ::System::Object LBBIJJIBEOG; // 0x0
		// static const ::System::Object MPOKBFFPFHE; // 0x0
		// static const ::System::Object LDCPPEPLOIJ; // 0x0
		// static const ::System::Object GMJJKFLKHNK; // 0x0
		// static const ::System::Object OCDMECINKMC; // 0x0
		// static const ::System::String* IALFONPILCN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKMBOENPIKK_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKMBOENPIKK__ONBIND_OFFSET))(this);
		}

		::System::Void _OnInitParams(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + LKMBOENPIKK__ONINITPARAMS_OFFSET))(this, a1);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKMBOENPIKK__SETUPVIEW_OFFSET))(this);
		}

		::System::Void NKPPGDENJAE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKMBOENPIKK_NKPPGDENJAE_OFFSET))(this);
		}

		::System::Void KANMCJHEFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKMBOENPIKK_KANMCJHEFJJ_OFFSET))(this);
		}

		::System::Void KMALLACLJKM(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + LKMBOENPIKK_KMALLACLJKM_OFFSET))(this, a1, a2);
		}

		::System::Void HLCBFKOKKMB(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + LKMBOENPIKK_HLCBFKOKKMB_OFFSET))(this, a1, a2);
		}

		::System::Void BNKGMDLBNKF(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LKMBOENPIKK_BNKGMDLBNKF_OFFSET))(this, a1);
		}

		::ILEICNLJLEF* BEDEIMHLHPJ()
		{
			return ((::ILEICNLJLEF*(*)(::PVOID))((::PBYTE)hIl2Cpp + LKMBOENPIKK_BEDEIMHLHPJ_OFFSET))(this);
		}

	};
