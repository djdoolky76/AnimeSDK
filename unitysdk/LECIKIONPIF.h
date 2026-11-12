#pragma once
#include "unitysdk/unitysdk.h"
class HNLAMNAIFNF;
class KFELGAIGHAP;
namespace RPG::GameCore { class TaskContext; }

#define LECIKIONPIF_CTOR_OFFSET UNITYSDK_OFFSET(0xBEE3D90)
#define LECIKIONPIF_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBEE3E30)
#define LECIKIONPIF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBEE3F00)

inline static constexpr unsigned int LECIKIONPIF_TypeDefinitionIndex = 55037;

	class LECIKIONPIF
	{
	public:
		::KFELGAIGHAP* OODBJDPKKKF; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::HNLAMNAIFNF* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::HNLAMNAIFNF*))((::PBYTE)hIl2Cpp + LECIKIONPIF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LECIKIONPIF_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LECIKIONPIF_ONTASKBEGIN_OFFSET))(this);
		}

	};
