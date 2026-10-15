#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class KFELGAIGHAP;
namespace RPG::GameCore { class MarbleNpcListener; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define AOLONABCMEK_CEGMOLMPIHG_OFFSET UNITYSDK_OFFSET(0x158B7720)
#define AOLONABCMEK_CTOR_OFFSET UNITYSDK_OFFSET(0x158B6F30)
#define AOLONABCMEK_DISPOSE_OFFSET UNITYSDK_OFFSET(0x158B72F0)
#define AOLONABCMEK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x158B71E0)
#define AOLONABCMEK_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x158B72A0)
#define AOLONABCMEK_TICK_OFFSET UNITYSDK_OFFSET(0x158B7B90)

inline static constexpr unsigned int AOLONABCMEK_TypeDefinitionIndex = 53009;

	class AOLONABCMEK : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::MarbleNpcListener* IGHAHBNLIJA; // 0x18
		::KFELGAIGHAP* NBGFNJOADKB; // 0x20
		::KFELGAIGHAP* LJOKDPABLLL; // 0x28
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x30
		::KFELGAIGHAP* KHFKIGICMCL; // 0x38
		::KFELGAIGHAP* DBNHKOCFADK; // 0x40
		::KFELGAIGHAP* JIJACLILLBI; // 0x48
		::KFELGAIGHAP* FHEGMOCMNLO; // 0x50
		::System::Boolean BHEIANKOOPN; // 0x58
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::MarbleNpcListener* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::MarbleNpcListener*))((::PBYTE)hIl2Cpp + AOLONABCMEK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOLONABCMEK_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOLONABCMEK_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOLONABCMEK_DISPOSE_OFFSET))(this);
		}

		::System::Void CEGMOLMPIHG(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AOLONABCMEK_CEGMOLMPIHG_OFFSET))(this, a1);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AOLONABCMEK_TICK_OFFSET))(this, a1);
		}

	};
