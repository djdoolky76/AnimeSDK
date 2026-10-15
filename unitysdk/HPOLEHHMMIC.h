#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HPOLEHHMMIC;
class KFELGAIGHAP;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TrackPhotoEvent; }

#define HPOLEHHMMIC_CTOR_OFFSET UNITYSDK_OFFSET(0x15DD5730)
#define HPOLEHHMMIC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15DD5A10)
#define HPOLEHHMMIC_GEHGFKCEKII_OFFSET UNITYSDK_OFFSET(0x15DD5890)
#define HPOLEHHMMIC_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x15DD57B0)
#define HPOLEHHMMIC_KGAFHLGGNHJ_OFFSET UNITYSDK_OFFSET(0x15DD5B40)
#define HPOLEHHMMIC_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x15DD5990)

	class HPOLEHHMMIC : public ::System::Object
	{
	public:
		::RPG::GameCore::TrackPhotoEvent* AJMCGNIDAEA; // 0x10
		::KFELGAIGHAP* FGOLPCMCNNM; // 0x18
		::System::Boolean ANGACHKEMLG; // 0x20
		::System::Void _ctor(::RPG::GameCore::TrackPhotoEvent* a1, ::RPG::GameCore::TaskContext* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TrackPhotoEvent*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + HPOLEHHMMIC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HPOLEHHMMIC_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void GEHGFKCEKII()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPOLEHHMMIC_GEHGFKCEKII_OFFSET))(this);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPOLEHHMMIC_KHGIKBFDLFB_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPOLEHHMMIC_DISPOSE_OFFSET))(this);
		}

		::System::Int32 KGAFHLGGNHJ(::HPOLEHHMMIC* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::HPOLEHHMMIC*))((::PBYTE)hIl2Cpp + HPOLEHHMMIC_KGAFHLGGNHJ_OFFSET))(this, a1);
		}

	};
