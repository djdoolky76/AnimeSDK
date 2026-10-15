#pragma once
#include "unitysdk/unitysdk.h"
class OKCCOEHNEEF;
namespace RPG::GameCore { class TaskContext; }

#define EMPHBKABGPH_CBKHAOPPDCI_OFFSET UNITYSDK_OFFSET(0x155A3080)
#define EMPHBKABGPH_CTOR_OFFSET UNITYSDK_OFFSET(0x155A2BA0)
#define EMPHBKABGPH_EVALUATE_OFFSET UNITYSDK_OFFSET(0x155A2BD0)

	class EMPHBKABGPH
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::OKCCOEHNEEF* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::OKCCOEHNEEF*))((::PBYTE)hIl2Cpp + EMPHBKABGPH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EMPHBKABGPH_EVALUATE_OFFSET))(this);
		}

		static ::System::Boolean CBKHAOPPDCI(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + EMPHBKABGPH_CBKHAOPPDCI_OFFSET))(a1, a2);
		}

	};
