#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class KFELGAIGHAP;
class NGAIPAPNNNH;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }

#define GFIMPBCEEMM_BPPILILFAHI_OFFSET UNITYSDK_OFFSET(0x159FA330)
#define GFIMPBCEEMM_CHOOMNGLJHI_OFFSET UNITYSDK_OFFSET(0x159FA520)
#define GFIMPBCEEMM_CTOR_OFFSET UNITYSDK_OFFSET(0x159F9FA0)
#define GFIMPBCEEMM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x159FA030)
#define GFIMPBCEEMM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x159FA160)
#define GFIMPBCEEMM_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x159FA110)
#define GFIMPBCEEMM_TICK_OFFSET UNITYSDK_OFFSET(0x159FA4B0)

inline static constexpr unsigned int GFIMPBCEEMM_TypeDefinitionIndex = 54944;

	class GFIMPBCEEMM : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::GameEntity* OJAHLJGABMJ; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::NGAIPAPNNNH* OFKGLJOAMLD; // 0x28
		::KFELGAIGHAP* MACKGFGJMLE; // 0x30
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::NGAIPAPNNNH* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::NGAIPAPNNNH*))((::PBYTE)hIl2Cpp + GFIMPBCEEMM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFIMPBCEEMM_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFIMPBCEEMM_ONTASKRESET_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFIMPBCEEMM_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GFIMPBCEEMM_TICK_OFFSET))(this, a1);
		}

		::System::Void CHOOMNGLJHI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFIMPBCEEMM_CHOOMNGLJHI_OFFSET))(this);
		}

		::System::Boolean BPPILILFAHI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GFIMPBCEEMM_BPPILILFAHI_OFFSET))(this);
		}

	};
