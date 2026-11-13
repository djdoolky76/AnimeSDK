#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class NJFFGMEIDMM;
class PEPPJLLGLIM;
namespace RPG::GameCore { class TaskContext; }

#define MPOCECIGPDF_CTOR_OFFSET UNITYSDK_OFFSET(0x1B22B990)
#define MPOCECIGPDF_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B22BFD0)
#define MPOCECIGPDF_HJDEJLCBIKN_OFFSET UNITYSDK_OFFSET(0x1B22BEA0)
#define MPOCECIGPDF_NCCIBOKBOAC_OFFSET UNITYSDK_OFFSET(0x1B22BD00)
#define MPOCECIGPDF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1B22B9A0)
#define MPOCECIGPDF_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1B22BD90)
#define MPOCECIGPDF_TICK_OFFSET UNITYSDK_OFFSET(0x1B22BF70)
#define MPOCECIGPDF__ONTASKBEGIN_B__3_0_OFFSET UNITYSDK_OFFSET(0x1B22C0C0)

inline static constexpr unsigned int MPOCECIGPDF_TypeDefinitionIndex = 53841;

	class MPOCECIGPDF : public ::GELIALJDFBL
	{
	public:
		::PEPPJLLGLIM* DENNCALHBFN; // 0x18
		::NJFFGMEIDMM* OFKGLJOAMLD; // 0x20
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
