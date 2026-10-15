#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class RogueAdvRoomCandyCrashGroupProcess; }
namespace RPG::GameCore { class RogueAdvRoomCandyCrashGroupTemplate; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AMGDILBAPOM_AEIOLMDKKDG_OFFSET UNITYSDK_OFFSET(0x15572310)
#define AMGDILBAPOM_BEPKDGBGNAG_OFFSET UNITYSDK_OFFSET(0x155716F0)
#define AMGDILBAPOM_CCTOR_OFFSET UNITYSDK_OFFSET(0x15572E90)
#define AMGDILBAPOM_CTOR_OFFSET UNITYSDK_OFFSET(0x15571400)
#define AMGDILBAPOM_DGBGOIHKJOL_OFFSET UNITYSDK_OFFSET(0x15572100)
#define AMGDILBAPOM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15571490)
#define AMGDILBAPOM_GFNNOAPOPNC_OFFSET UNITYSDK_OFFSET(0x15571B50)
#define AMGDILBAPOM_GLHIHBLFAAG_OFFSET UNITYSDK_OFFSET(0x15572A00)
#define AMGDILBAPOM_HFPJFAHCOFL_OFFSET UNITYSDK_OFFSET(0x15572830)
#define AMGDILBAPOM_IIFINBAGBDG_OFFSET UNITYSDK_OFFSET(0x15571970)
#define AMGDILBAPOM_KAOIHHCJFDO_OFFSET UNITYSDK_OFFSET(0x15571860)
#define AMGDILBAPOM_LGGGOMPGBBA_OFFSET UNITYSDK_OFFSET(0x155714E0)
#define AMGDILBAPOM_LPNLBEEGDJD_OFFSET UNITYSDK_OFFSET(0x15572740)
#define AMGDILBAPOM_MLHAOLGPKKC_OFFSET UNITYSDK_OFFSET(0x15571EF0)
#define AMGDILBAPOM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15571800)
#define AMGDILBAPOM_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15571EA0)
#define AMGDILBAPOM_PGCFDFAAOLG_OFFSET UNITYSDK_OFFSET(0x15571770)
#define AMGDILBAPOM_TICK_OFFSET UNITYSDK_OFFSET(0x155715F0)

inline static constexpr unsigned int AMGDILBAPOM_TypeDefinitionIndex = 58439;

	class AMGDILBAPOM : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::RogueAdvRoomCandyCrashGroupProcess* OFKGLJOAMLD; // 0x18
		::System::Collections::Generic::HashSet_1<::System::Int32>* DCKMBGHLHEH; // 0x20
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28
		::System::Collections::Generic::List_1<::System::Object*>* LFCDPCNECEL; // 0x30
		::RPG::GameCore::RogueAdvRoomCandyCrashGroupTemplate* JILGFHGMAAC; // 0x38
		::System::Single JPMHMKAMPBA; // 0x40
		::System::Single ILENDFMOAAF; // 0x44
		static ::System::Single* StaticGet_HOEBEBCBIBM()
		{
			return (::System::Single*)UnitySDK::FromName("", "AMGDILBAPOM")->GetStaticField(0x13CA0);
		}

		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RogueAdvRoomCandyCrashGroupProcess* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RogueAdvRoomCandyCrashGroupProcess*))((::PBYTE)hIl2Cpp + AMGDILBAPOM_CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AMGDILBAPOM_CCTOR_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMGDILBAPOM_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AMGDILBAPOM_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMGDILBAPOM_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMGDILBAPOM_ONTASKRESET_OFFSET))(this);
		}

		::System::Void KAOIHHCJFDO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMGDILBAPOM_KAOIHHCJFDO_OFFSET))(this);
		}

		::System::Void LGGGOMPGBBA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMGDILBAPOM_LGGGOMPGBBA_OFFSET))(this);
		}

		::System::Void MLHAOLGPKKC(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AMGDILBAPOM_MLHAOLGPKKC_OFFSET))(this, a1);
		}

		::System::Void DGBGOIHKJOL(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AMGDILBAPOM_DGBGOIHKJOL_OFFSET))(this, a1);
		}

		::System::Void BEPKDGBGNAG(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AMGDILBAPOM_BEPKDGBGNAG_OFFSET))(this, a1);
		}

		::System::Void AEIOLMDKKDG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMGDILBAPOM_AEIOLMDKKDG_OFFSET))(this);
		}

		::System::Void LPNLBEEGDJD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMGDILBAPOM_LPNLBEEGDJD_OFFSET))(this);
		}

		::System::Void PGCFDFAAOLG(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AMGDILBAPOM_PGCFDFAAOLG_OFFSET))(this, a1);
		}

		::System::Void GLHIHBLFAAG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMGDILBAPOM_GLHIHBLFAAG_OFFSET))(this);
		}

		::System::Void IIFINBAGBDG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMGDILBAPOM_IIFINBAGBDG_OFFSET))(this);
		}

		::System::Void GFNNOAPOPNC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMGDILBAPOM_GFNNOAPOPNC_OFFSET))(this);
		}

		::System::Void HFPJFAHCOFL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMGDILBAPOM_HFPJFAHCOFL_OFFSET))(this);
		}

	};
