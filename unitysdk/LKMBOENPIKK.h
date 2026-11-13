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

#define LKMBOENPIKK_BEDEIMHLHPJ_OFFSET UNITYSDK_OFFSET(0x18CFBFD0)
#define LKMBOENPIKK_BNKGMDLBNKF_OFFSET UNITYSDK_OFFSET(0x18CFC340)
#define LKMBOENPIKK_CTOR_OFFSET UNITYSDK_OFFSET(0x18CFC420)
#define LKMBOENPIKK_HLCBFKOKKMB_OFFSET UNITYSDK_OFFSET(0x18CFC1E0)
#define LKMBOENPIKK_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0x18CFBC60)
#define LKMBOENPIKK_KMALLACLJKM_OFFSET UNITYSDK_OFFSET(0x18CFC020)
#define LKMBOENPIKK_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0x18CFBF40)
#define LKMBOENPIKK__ONBIND_OFFSET UNITYSDK_OFFSET(0x18CFB920)
#define LKMBOENPIKK__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0x18CFBB80)
#define LKMBOENPIKK__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x18CFBC10)

inline static constexpr unsigned int LKMBOENPIKK_TypeDefinitionIndex = 74002;

	class LKMBOENPIKK : public ::FMPCODLIOLG
	{
	public:
		::HDPEJIGDNJB* PNPNGCLCCNP; // 0x60
		::UnityEngine::RectTransform* AOABGBODJJL; // 0x68
		::DCGIDEKLGAJ* DBMOGHNMOKN; // 0x70
		::UnityEngine::UI::SmoothMask* MKEOGDIHACI; // 0x78
		::UnityEngine::Transform* MACEILOIEKA; // 0x80
		::UnityEngine::Animation* JLEKHHOCICA; // 0x88
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
