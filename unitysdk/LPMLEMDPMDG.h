#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector3.h"
class LELCKJPOPAO;
namespace RPG::GameCore { class MeshBound; }

#define LPMLEMDPMDG_BEBLJJOBMOM_OFFSET UNITYSDK_OFFSET(0x3C3CC30)
#define LPMLEMDPMDG_CBBDBLPCMAA_OFFSET UNITYSDK_OFFSET(0x3C36500)
#define LPMLEMDPMDG_DISPOSE_OFFSET UNITYSDK_OFFSET(0x3C2D5A0)
#define LPMLEMDPMDG_FKHABBFPGFA_OFFSET UNITYSDK_OFFSET(0x3C3CCA0)
#define LPMLEMDPMDG_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x2FB0F40)
#define LPMLEMDPMDG_GET_OFFSET_OFFSET UNITYSDK_OFFSET(0xACE0)
#define LPMLEMDPMDG_GET_POOL_OFFSET UNITYSDK_OFFSET(0x1D30)
#define LPMLEMDPMDG_GFLKJLOFIPA_OFFSET UNITYSDK_OFFSET(0x3C3CCF0)
#define LPMLEMDPMDG_IKOCHGBIGPJ_OFFSET UNITYSDK_OFFSET(0x3C3CC80)
#define LPMLEMDPMDG_INIT_OFFSET UNITYSDK_OFFSET(0x14160)
#define LPMLEMDPMDG_JLPFOJNDOAI_OFFSET UNITYSDK_OFFSET(0x3C3CBC0)
#define LPMLEMDPMDG_MOOENEIANFA_OFFSET UNITYSDK_OFFSET(0x3C3CC10)

inline static constexpr unsigned int LPMLEMDPMDG_TypeDefinitionIndex = 10677;

	struct alignas(8) LPMLEMDPMDG
	{
		::LELCKJPOPAO* BEHHICMOFIE; // 0x10
		::System::UInt32 IKKNJMJCDOJ; // 0x18
		::System::Void Init(::LELCKJPOPAO* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::LELCKJPOPAO*, ::System::UInt32))((::PBYTE)hIl2Cpp + LPMLEMDPMDG_INIT_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LPMLEMDPMDG_GET_ISVALID_OFFSET))(this);
		}

		::System::UInt32 get_Offset()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LPMLEMDPMDG_GET_OFFSET_OFFSET))(this);
		}

		::LELCKJPOPAO* get_Pool()
		{
			return ((::LELCKJPOPAO*(*)(::PVOID))((::PBYTE)hIl2Cpp + LPMLEMDPMDG_GET_POOL_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPMLEMDPMDG_DISPOSE_OFFSET))(this);
		}

		::System::Int32 CBBDBLPCMAA()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LPMLEMDPMDG_CBBDBLPCMAA_OFFSET))(this);
		}

		::System::Void JLPFOJNDOAI(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LPMLEMDPMDG_JLPFOJNDOAI_OFFSET))(this, a1);
		}

		::RPG::MVector3 MOOENEIANFA()
		{
			return ((::RPG::MVector3(*)(::PVOID))((::PBYTE)hIl2Cpp + LPMLEMDPMDG_MOOENEIANFA_OFFSET))(this);
		}

		::System::Void BEBLJJOBMOM(::RPG::MVector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector3))((::PBYTE)hIl2Cpp + LPMLEMDPMDG_BEBLJJOBMOM_OFFSET))(this, a1);
		}

		::RPG::MVector3 IKOCHGBIGPJ()
		{
			return ((::RPG::MVector3(*)(::PVOID))((::PBYTE)hIl2Cpp + LPMLEMDPMDG_IKOCHGBIGPJ_OFFSET))(this);
		}

		::System::Void FKHABBFPGFA(::RPG::MVector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector3))((::PBYTE)hIl2Cpp + LPMLEMDPMDG_FKHABBFPGFA_OFFSET))(this, a1);
		}

		::RPG::GameCore::MeshBound* GFLKJLOFIPA()
		{
			return ((::RPG::GameCore::MeshBound*(*)(::PVOID))((::PBYTE)hIl2Cpp + LPMLEMDPMDG_GFLKJLOFIPA_OFFSET))(this);
		}

	};
