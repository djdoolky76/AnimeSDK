#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
class CFPDOGGNJNB;
class DILAPCEEDDN;
class NDAKLNGIAAL;
namespace RPG::GameCore { class LevelGameModeStateChanged; }
namespace System { class Object; }
namespace UnityEngine { class Animation; }

#define DFOJADNIOGD_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xE83A7C0)
#define DFOJADNIOGD_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xE83A9D0)
#define DFOJADNIOGD_CTOR_OFFSET UNITYSDK_OFFSET(0xE83ABB0)
#define DFOJADNIOGD_DOFNOIEDPFN_OFFSET UNITYSDK_OFFSET(0xE83A630)
#define DFOJADNIOGD_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0xE83A4D0)
#define DFOJADNIOGD_JIABCJLODJI_OFFSET UNITYSDK_OFFSET(0xE83A520)
#define DFOJADNIOGD_KGDIPFNECJH_OFFSET UNITYSDK_OFFSET(0xE83A5A0)
#define DFOJADNIOGD_LJDOJCKMMDD_OFFSET UNITYSDK_OFFSET(0xE83A700)
#define DFOJADNIOGD__ONBIND_OFFSET UNITYSDK_OFFSET(0xE83A400)

inline static constexpr unsigned int DFOJADNIOGD_TypeDefinitionIndex = 71645;

	class DFOJADNIOGD : public ::FMPCODLIOLG
	{
	public:
		::DILAPCEEDDN* JDLNLMEECOI; // 0x60
		::UnityEngine::Animation* EACCDAKEHLG; // 0x68
		::CFPDOGGNJNB* MBKDJAJJCCG; // 0x70
		::NDAKLNGIAAL* KMMINGNJJPK; // 0x78
		::UnityEngine::Animation* JPHOOFFIAAH; // 0x80
		::System::Boolean JEAACCEBNAH; // 0x88
		// static const ::System::String* CAKDJJLKLBP; // 0x0
		// static const ::System::String* NCGCBOFHGLK; // 0x0
		// static const ::System::String* JHOCKEGADFG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFOJADNIOGD_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFOJADNIOGD__ONBIND_OFFSET))(this);
		}

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFOJADNIOGD_EKGCGIDIFJJ_OFFSET))(this);
		}

		::System::Void JIABCJLODJI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DFOJADNIOGD_JIABCJLODJI_OFFSET))(this, a1);
		}

		::System::Void KGDIPFNECJH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DFOJADNIOGD_KGDIPFNECJH_OFFSET))(this, a1);
		}

		::System::Void DOFNOIEDPFN(::RPG::GameCore::LevelGameModeStateChanged* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelGameModeStateChanged*))((::PBYTE)hIl2Cpp + DFOJADNIOGD_DOFNOIEDPFN_OFFSET))(this, a1);
		}

		::System::Void LJDOJCKMMDD(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DFOJADNIOGD_LJDOJCKMMDD_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFOJADNIOGD_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFOJADNIOGD_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
