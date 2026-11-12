#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class HCHHCLCLCEI;
class KFELGAIGHAP;
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define LAKPHDOKIGE_CTOR_OFFSET UNITYSDK_OFFSET(0xBE78210)
#define LAKPHDOKIGE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBE78380)
#define LAKPHDOKIGE_LFEOGMDJCAH_OFFSET UNITYSDK_OFFSET(0xBE785B0)
#define LAKPHDOKIGE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBE784A0)
#define LAKPHDOKIGE_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBE78330)
#define LAKPHDOKIGE_TICK_OFFSET UNITYSDK_OFFSET(0xBE78290)

inline static constexpr unsigned int LAKPHDOKIGE_TypeDefinitionIndex = 59739;

	class LAKPHDOKIGE : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::KFELGAIGHAP* HIBJGHDJLJO; // 0x20
		::HCHHCLCLCEI* JKJPFJALGKO; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::HCHHCLCLCEI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::HCHHCLCLCEI*))((::PBYTE)hIl2Cpp + LAKPHDOKIGE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LAKPHDOKIGE_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAKPHDOKIGE_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAKPHDOKIGE_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAKPHDOKIGE_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void LFEOGMDJCAH(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LAKPHDOKIGE_LFEOGMDJCAH_OFFSET))(this, a1);
		}

	};
