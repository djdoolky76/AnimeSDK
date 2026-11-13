#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/IGKFNIEJGLM.h"
namespace RPG::GameCore { class GameEntity; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class RectTransform; }

#define CLHHHJEKMHC_ACPEGOAKBDB_OFFSET UNITYSDK_OFFSET(0x1B17A090)
#define CLHHHJEKMHC_CTOR_OFFSET UNITYSDK_OFFSET(0x1B17A210)
#define CLHHHJEKMHC_EFLDIGOAAOE_OFFSET UNITYSDK_OFFSET(0x1B179DF0)
#define CLHHHJEKMHC_HGCGEDEBEFJ_OFFSET UNITYSDK_OFFSET(0x1B179E70)
#define CLHHHJEKMHC_HHMINAPGNGA_OFFSET UNITYSDK_OFFSET(0x1B17A010)
#define CLHHHJEKMHC_JCAPNOBKEGC_OFFSET UNITYSDK_OFFSET(0x1B179C70)
#define CLHHHJEKMHC_JIABCJLODJI_OFFSET UNITYSDK_OFFSET(0x1B179BA0)
#define CLHHHJEKMHC_MMHBFLPJDBP_OFFSET UNITYSDK_OFFSET(0x1B179D90)
#define CLHHHJEKMHC_MOJPLIOGEJN_OFFSET UNITYSDK_OFFSET(0x1B179B30)
#define CLHHHJEKMHC_OKIEJEGHDHJ_OFFSET UNITYSDK_OFFSET(0x1B17A160)
#define CLHHHJEKMHC_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0x1B179A50)
#define CLHHHJEKMHC_ONRETURN_OFFSET UNITYSDK_OFFSET(0x1B179AA0)
#define CLHHHJEKMHC__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x1B179D00)
#define CLHHHJEKMHC__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0x1B1799B0)

inline static constexpr unsigned int CLHHHJEKMHC_TypeDefinitionIndex = 73854;

	class CLHHHJEKMHC : public ::FMPCODLIOLG
	{
	public:
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x60
		::UnityEngine::RectTransform* EOFIPGLDONA; // 0x68
		::UnityEngine::Animation* JPHOOFFIAAH; // 0x70
		::System::Single IGGGPOBEEPK; // 0x78
		::System::Single NBCBLJAFBBJ; // 0x7C
		::System::Single KOLOABGLOFA; // 0x80
		// static const ::System::String* GMDBIIJGHHH; // 0x0
		// static const ::System::String* KDODNCFEJFD; // 0x0
		// static const ::System::String* NMHICHPNEHN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLHHHJEKMHC_CTOR_OFFSET))(this);
		}

		::System::Void _OnInitParams(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + CLHHHJEKMHC__ONINITPARAMS_OFFSET))(this, a1);
		}

		::System::Void OnAcquire(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLHHHJEKMHC_ONACQUIRE_OFFSET))(this, a1);
		}

		::System::Void OnReturn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLHHHJEKMHC_ONRETURN_OFFSET))(this);
		}

		::System::Void JIABCJLODJI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLHHHJEKMHC_JIABCJLODJI_OFFSET))(this, a1);
		}

		::System::Void _OnDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLHHHJEKMHC__ONDISPOSE_OFFSET))(this);
		}

		::System::Void MMHBFLPJDBP(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLHHHJEKMHC_MMHBFLPJDBP_OFFSET))(this, a1);
		}

		::System::Void EFLDIGOAAOE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLHHHJEKMHC_EFLDIGOAAOE_OFFSET))(this);
		}

		::System::Void HHMINAPGNGA(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLHHHJEKMHC_HHMINAPGNGA_OFFSET))(this, a1, a2);
		}

		::System::Void ACPEGOAKBDB(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLHHHJEKMHC_ACPEGOAKBDB_OFFSET))(this, a1);
		}

		::System::Void OKIEJEGHDHJ(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLHHHJEKMHC_OKIEJEGHDHJ_OFFSET))(this, a1);
		}

		::System::Void HGCGEDEBEFJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLHHHJEKMHC_HGCGEDEBEFJ_OFFSET))(this);
		}

		::System::Void MOJPLIOGEJN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLHHHJEKMHC_MOJPLIOGEJN_OFFSET))(this);
		}

		::System::Void JCAPNOBKEGC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLHHHJEKMHC_JCAPNOBKEGC_OFFSET))(this);
		}

	};
