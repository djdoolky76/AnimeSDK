#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NLKJJGNPCDE_NKDMOIIGLLP;
namespace System { class Action; }
namespace System { class IDisposable; }

#define NLKJJGNPCDE_BIDDPPEHBEC_OFFSET UNITYSDK_OFFSET(0x1EC89990)
#define NLKJJGNPCDE_CTOR_OFFSET UNITYSDK_OFFSET(0x1EC898E0)
#define NLKJJGNPCDE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1EC89B40)
#define NLKJJGNPCDE_GBMLHDDJMJM_OFFSET UNITYSDK_OFFSET(0x1EC89C80)

inline static constexpr unsigned int NLKJJGNPCDE_TypeDefinitionIndex = 44187;

	class NLKJJGNPCDE : public ::System::Object
	{
	public:
		::System::Action* IOGFELMDNEK; // 0x10
		::System::IDisposable* HDAKHNOIENL; // 0x18
		::System::Action* EDGCAOBECGF; // 0x20
		::System::Void _ctor(::System::Action* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + NLKJJGNPCDE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::IDisposable* BIDDPPEHBEC()
		{
			return ((::System::IDisposable*(*)(::PVOID))((::PBYTE)hIl2Cpp + NLKJJGNPCDE_BIDDPPEHBEC_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLKJJGNPCDE_DISPOSE_OFFSET))(this);
		}

		::System::Void GBMLHDDJMJM(::NLKJJGNPCDE_NKDMOIIGLLP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NLKJJGNPCDE_NKDMOIIGLLP*))((::PBYTE)hIl2Cpp + NLKJJGNPCDE_GBMLHDDJMJM_OFFSET))(this, a1);
		}

	};
