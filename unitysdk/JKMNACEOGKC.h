#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class KFELGAIGHAP;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WolfBroPuzzleFuncBtnListener; }
namespace System { class Object; }

#define JKMNACEOGKC_CTOR_OFFSET UNITYSDK_OFFSET(0xB21E020)
#define JKMNACEOGKC_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB21E270)
#define JKMNACEOGKC_HJLAFDBBJIB_OFFSET UNITYSDK_OFFSET(0xB21E4B0)
#define JKMNACEOGKC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB21E0A0)
#define JKMNACEOGKC_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB21E150)
#define JKMNACEOGKC_TICK_OFFSET UNITYSDK_OFFSET(0xB21E3D0)

inline static constexpr unsigned int JKMNACEOGKC_TypeDefinitionIndex = 58961;

	class JKMNACEOGKC : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x18
		::RPG::GameCore::WolfBroPuzzleFuncBtnListener* IGHAHBNLIJA; // 0x20
		::KFELGAIGHAP* HFOFIODMFGB; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WolfBroPuzzleFuncBtnListener* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WolfBroPuzzleFuncBtnListener*))((::PBYTE)hIl2Cpp + JKMNACEOGKC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKMNACEOGKC_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKMNACEOGKC_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKMNACEOGKC_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JKMNACEOGKC_TICK_OFFSET))(this, a1);
		}

		::System::Void HJLAFDBBJIB(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JKMNACEOGKC_HJLAFDBBJIB_OFFSET))(this, a1);
		}

	};
