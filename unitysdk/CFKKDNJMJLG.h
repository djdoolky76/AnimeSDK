#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class KFELGAIGHAP;
namespace RPG::GameCore { class MarbleSimulateListener; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CFKKDNJMJLG_CMMHAKEAFAC_OFFSET UNITYSDK_OFFSET(0xCC4A5B0)
#define CFKKDNJMJLG_CTOR_OFFSET UNITYSDK_OFFSET(0xCC4A2B0)
#define CFKKDNJMJLG_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCC4A450)
#define CFKKDNJMJLG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xCC4A340)
#define CFKKDNJMJLG_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xCC4A400)
#define CFKKDNJMJLG_TICK_OFFSET UNITYSDK_OFFSET(0xCC4A780)

inline static constexpr unsigned int CFKKDNJMJLG_TypeDefinitionIndex = 52305;

	class CFKKDNJMJLG : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::MarbleSimulateListener* IGHAHBNLIJA; // 0x18
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x20
		::KFELGAIGHAP* BGGKBBLAGKN; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::MarbleSimulateListener* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::MarbleSimulateListener*))((::PBYTE)hIl2Cpp + CFKKDNJMJLG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFKKDNJMJLG_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFKKDNJMJLG_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFKKDNJMJLG_DISPOSE_OFFSET))(this);
		}

		::System::Void CMMHAKEAFAC(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CFKKDNJMJLG_CMMHAKEAFAC_OFFSET))(this, a1);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CFKKDNJMJLG_TICK_OFFSET))(this, a1);
		}

	};
