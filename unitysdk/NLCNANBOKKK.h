#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class KFELGAIGHAP;
namespace RPG::GameCore { class RogueDLC1Dot3Teleport; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define NLCNANBOKKK_CTOR_OFFSET UNITYSDK_OFFSET(0x1A41FE10)
#define NLCNANBOKKK_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A41FE20)
#define NLCNANBOKKK_HICAEMAKHOD_OFFSET UNITYSDK_OFFSET(0x1A41FFC0)
#define NLCNANBOKKK_JEJLPHKIHLB_OFFSET UNITYSDK_OFFSET(0x1A4200C0)
#define NLCNANBOKKK_NEJOKGCBGPC_OFFSET UNITYSDK_OFFSET(0x1A420390)
#define NLCNANBOKKK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1A4201F0)
#define NLCNANBOKKK_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1A4202B0)
#define NLCNANBOKKK_PCECDHMCNMP_OFFSET UNITYSDK_OFFSET(0x1A420630)
#define NLCNANBOKKK_TICK_OFFSET UNITYSDK_OFFSET(0x1A420000)

inline static constexpr unsigned int NLCNANBOKKK_TypeDefinitionIndex = 59716;

	class NLCNANBOKKK : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::RogueDLC1Dot3Teleport* OFKGLJOAMLD; // 0x18
		::KFELGAIGHAP* HFOFIODMFGB; // 0x20
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28
		::System::UInt32 FLNGBDLPFAC; // 0x30
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RogueDLC1Dot3Teleport* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RogueDLC1Dot3Teleport*))((::PBYTE)hIl2Cpp + NLCNANBOKKK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLCNANBOKKK_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NLCNANBOKKK_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLCNANBOKKK_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLCNANBOKKK_ONTASKRESET_OFFSET))(this);
		}

		::System::Void NEJOKGCBGPC(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NLCNANBOKKK_NEJOKGCBGPC_OFFSET))(this, a1);
		}

		::System::Void JEJLPHKIHLB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLCNANBOKKK_JEJLPHKIHLB_OFFSET))(this);
		}

		::System::Void PCECDHMCNMP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLCNANBOKKK_PCECDHMCNMP_OFFSET))(this);
		}

		::System::Void HICAEMAKHOD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLCNANBOKKK_HICAEMAKHOD_OFFSET))(this);
		}

	};
