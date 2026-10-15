#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector3.h"
class LELCKJPOPAO;
namespace RPG::GameCore { class MeshBound; }

#define MFMNHKPPJBC_BEBLJJOBMOM_OFFSET UNITYSDK_OFFSET(0x3C3CEB0)
#define MFMNHKPPJBC_CBBDBLPCMAA_OFFSET UNITYSDK_OFFSET(0x3C36500)
#define MFMNHKPPJBC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x3C2D5A0)
#define MFMNHKPPJBC_FKHABBFPGFA_OFFSET UNITYSDK_OFFSET(0x3C3CF20)
#define MFMNHKPPJBC_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x2FB0F40)
#define MFMNHKPPJBC_GET_OFFSET_OFFSET UNITYSDK_OFFSET(0xACE0)
#define MFMNHKPPJBC_GET_POOL_OFFSET UNITYSDK_OFFSET(0x1D30)
#define MFMNHKPPJBC_GFLKJLOFIPA_OFFSET UNITYSDK_OFFSET(0x3C3CF70)
#define MFMNHKPPJBC_IKOCHGBIGPJ_OFFSET UNITYSDK_OFFSET(0x3C3CF00)
#define MFMNHKPPJBC_INIT_OFFSET UNITYSDK_OFFSET(0x14160)
#define MFMNHKPPJBC_JLPFOJNDOAI_OFFSET UNITYSDK_OFFSET(0x3C3CE40)
#define MFMNHKPPJBC_MOOENEIANFA_OFFSET UNITYSDK_OFFSET(0x3C3CE90)

inline static constexpr unsigned int MFMNHKPPJBC_TypeDefinitionIndex = 10687;

	struct alignas(8) MFMNHKPPJBC
	{
		::LELCKJPOPAO* BEHHICMOFIE; // 0x10
		::System::UInt32 IKKNJMJCDOJ; // 0x18
		::System::Void Init(::LELCKJPOPAO* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::LELCKJPOPAO*, ::System::UInt32))((::PBYTE)hIl2Cpp + MFMNHKPPJBC_INIT_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MFMNHKPPJBC_GET_ISVALID_OFFSET))(this);
		}

		::System::UInt32 get_Offset()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MFMNHKPPJBC_GET_OFFSET_OFFSET))(this);
		}

		::LELCKJPOPAO* get_Pool()
		{
			return ((::LELCKJPOPAO*(*)(::PVOID))((::PBYTE)hIl2Cpp + MFMNHKPPJBC_GET_POOL_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFMNHKPPJBC_DISPOSE_OFFSET))(this);
		}

		::System::Int32 CBBDBLPCMAA()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MFMNHKPPJBC_CBBDBLPCMAA_OFFSET))(this);
		}

		::System::Void JLPFOJNDOAI(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MFMNHKPPJBC_JLPFOJNDOAI_OFFSET))(this, a1);
		}

		::RPG::MVector3 MOOENEIANFA()
		{
			return ((::RPG::MVector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MFMNHKPPJBC_MOOENEIANFA_OFFSET))(this);
		}

		::System::Void BEBLJJOBMOM(::RPG::MVector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector3))((::PBYTE)hIl2Cpp + MFMNHKPPJBC_BEBLJJOBMOM_OFFSET))(this, a1);
		}

		::RPG::MVector3 IKOCHGBIGPJ()
		{
			return ((::RPG::MVector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MFMNHKPPJBC_IKOCHGBIGPJ_OFFSET))(this);
		}

		::System::Void FKHABBFPGFA(::RPG::MVector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector3))((::PBYTE)hIl2Cpp + MFMNHKPPJBC_FKHABBFPGFA_OFFSET))(this, a1);
		}

		::RPG::GameCore::MeshBound* GFLKJLOFIPA()
		{
			return ((::RPG::GameCore::MeshBound*(*)(::PVOID))((::PBYTE)hIl2Cpp + MFMNHKPPJBC_GFLKJLOFIPA_OFFSET))(this);
		}

	};
