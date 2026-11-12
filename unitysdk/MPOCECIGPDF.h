#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class NJFFGMEIDMM;
class PEPPJLLGLIM;
namespace RPG::GameCore { class TaskContext; }

#define MPOCECIGPDF_CTOR_OFFSET UNITYSDK_OFFSET(0xC302BB0)
#define MPOCECIGPDF_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC3031E0)
#define MPOCECIGPDF_HJDEJLCBIKN_OFFSET UNITYSDK_OFFSET(0xC3030B0)
#define MPOCECIGPDF_NCCIBOKBOAC_OFFSET UNITYSDK_OFFSET(0xC302F10)
#define MPOCECIGPDF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC302BC0)
#define MPOCECIGPDF_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC302FB0)
#define MPOCECIGPDF_TICK_OFFSET UNITYSDK_OFFSET(0xC303180)
#define MPOCECIGPDF__ONTASKBEGIN_B__3_0_OFFSET UNITYSDK_OFFSET(0xC3032D0)

inline static constexpr unsigned int MPOCECIGPDF_TypeDefinitionIndex = 53841;

	class MPOCECIGPDF : public ::GELIALJDFBL
	{
	public:
		::NJFFGMEIDMM* OFKGLJOAMLD; // 0x18
		::PEPPJLLGLIM* DENNCALHBFN; // 0x20
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28
		::System::UInt32 LKAMAEFHHOG; // 0x30
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::NJFFGMEIDMM* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::NJFFGMEIDMM*))((::PBYTE)hIl2Cpp + MPOCECIGPDF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPOCECIGPDF_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPOCECIGPDF_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MPOCECIGPDF_TICK_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPOCECIGPDF_DISPOSE_OFFSET))(this);
		}

		::System::Void HJDEJLCBIKN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPOCECIGPDF_HJDEJLCBIKN_OFFSET))(this);
		}

		::PEPPJLLGLIM* NCCIBOKBOAC()
		{
			return ((::PEPPJLLGLIM*(*)(::PVOID))((::PBYTE)hIl2Cpp + MPOCECIGPDF_NCCIBOKBOAC_OFFSET))(this);
		}

		::System::Void _OnTaskBegin_b__3_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPOCECIGPDF__ONTASKBEGIN_B__3_0_OFFSET))(this);
		}

	};
