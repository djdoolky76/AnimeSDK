#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
class CILNKGMHIIE;
class DPHBMOOMENK;
namespace RPG::GameCore { class TaskContext; }

#define BFCOALNOIMO_CTOR_OFFSET UNITYSDK_OFFSET(0x1A9548F0)
#define BFCOALNOIMO_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1A954920)
#define BFCOALNOIMO_LJJPIIGFHGA_OFFSET UNITYSDK_OFFSET(0x1A954C00)

inline static constexpr unsigned int BFCOALNOIMO_TypeDefinitionIndex = 55774;

	class BFCOALNOIMO
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::DPHBMOOMENK* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::DPHBMOOMENK*))((::PBYTE)hIl2Cpp + BFCOALNOIMO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BFCOALNOIMO_EVALUATE_OFFSET))(this);
		}

		static ::System::Nullable_1<::System::UInt32> LJJPIIGFHGA(::CILNKGMHIIE* a1, ::System::UInt32 a2)
		{
			return ((::System::Nullable_1<::System::UInt32>(*)(::CILNKGMHIIE*, ::System::UInt32))((::PBYTE)hIl2Cpp + BFCOALNOIMO_LJJPIIGFHGA_OFFSET))(a1, a2);
		}

	};
