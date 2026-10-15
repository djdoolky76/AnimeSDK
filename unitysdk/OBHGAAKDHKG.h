#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class KFELGAIGHAP;
namespace RPG::GameCore { class ObserveMaterialSubmission; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define OBHGAAKDHKG_BHEIANKOOPN_OFFSET UNITYSDK_OFFSET(0xBD40110)
#define OBHGAAKDHKG_CTOR_OFFSET UNITYSDK_OFFSET(0xBD3FDB0)
#define OBHGAAKDHKG_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBD3FF20)
#define OBHGAAKDHKG_GFBKDBBJEII_OFFSET UNITYSDK_OFFSET(0xBD40310)
#define OBHGAAKDHKG_KFCJIDPGGNJ_OFFSET UNITYSDK_OFFSET(0xBD40570)
#define OBHGAAKDHKG_NFAONNAPFIL_OFFSET UNITYSDK_OFFSET(0xBD40440)
#define OBHGAAKDHKG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBD400C0)
#define OBHGAAKDHKG_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBD40260)
#define OBHGAAKDHKG_PGCBCKNNCGH_OFFSET UNITYSDK_OFFSET(0xBD3FF70)
#define OBHGAAKDHKG_TICK_OFFSET UNITYSDK_OFFSET(0xBD402B0)

inline static constexpr unsigned int OBHGAAKDHKG_TypeDefinitionIndex = 53037;

	class OBHGAAKDHKG : public ::GELIALJDFBL
	{
	public:
		::KFELGAIGHAP* MHKDOBGEEPG; // 0x18
		::KFELGAIGHAP* EGMGFMKIOHL; // 0x20
		::KFELGAIGHAP* HPPEGNGGFIL; // 0x28
		::System::UInt32 NJFKHPIHDEF; // 0x30
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ObserveMaterialSubmission* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ObserveMaterialSubmission*))((::PBYTE)hIl2Cpp + OBHGAAKDHKG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBHGAAKDHKG_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBHGAAKDHKG_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBHGAAKDHKG_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OBHGAAKDHKG_TICK_OFFSET))(this, a1);
		}

		::System::Void BHEIANKOOPN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBHGAAKDHKG_BHEIANKOOPN_OFFSET))(this);
		}

		::System::Void PGCBCKNNCGH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBHGAAKDHKG_PGCBCKNNCGH_OFFSET))(this);
		}

		::System::Void GFBKDBBJEII(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OBHGAAKDHKG_GFBKDBBJEII_OFFSET))(this, a1);
		}

		::System::Void NFAONNAPFIL(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OBHGAAKDHKG_NFAONNAPFIL_OFFSET))(this, a1);
		}

		::System::Void KFCJIDPGGNJ(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OBHGAAKDHKG_KFCJIDPGGNJ_OFFSET))(this, a1);
		}

	};
