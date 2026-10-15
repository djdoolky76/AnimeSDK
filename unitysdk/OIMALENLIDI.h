#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector3.h"
class LELCKJPOPAO;
namespace RPG::GameCore { class MeshBound; }

#define OIMALENLIDI_BEBLJJOBMOM_OFFSET UNITYSDK_OFFSET(0x3C3D810)
#define OIMALENLIDI_CBBDBLPCMAA_OFFSET UNITYSDK_OFFSET(0x3C36500)
#define OIMALENLIDI_DISPOSE_OFFSET UNITYSDK_OFFSET(0x3C2D5A0)
#define OIMALENLIDI_FKHABBFPGFA_OFFSET UNITYSDK_OFFSET(0x3C3D880)
#define OIMALENLIDI_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x2FB0F40)
#define OIMALENLIDI_GET_OFFSET_OFFSET UNITYSDK_OFFSET(0xACE0)
#define OIMALENLIDI_GET_POOL_OFFSET UNITYSDK_OFFSET(0x1D30)
#define OIMALENLIDI_GFLKJLOFIPA_OFFSET UNITYSDK_OFFSET(0x3C3D8D0)
#define OIMALENLIDI_IKOCHGBIGPJ_OFFSET UNITYSDK_OFFSET(0x3C3D860)
#define OIMALENLIDI_INIT_OFFSET UNITYSDK_OFFSET(0x14160)
#define OIMALENLIDI_JLPFOJNDOAI_OFFSET UNITYSDK_OFFSET(0x3C3D7A0)
#define OIMALENLIDI_MOOENEIANFA_OFFSET UNITYSDK_OFFSET(0x3C3D7F0)

inline static constexpr unsigned int OIMALENLIDI_TypeDefinitionIndex = 10692;

	struct alignas(8) OIMALENLIDI
	{
		::LELCKJPOPAO* BEHHICMOFIE; // 0x10
		::System::UInt32 IKKNJMJCDOJ; // 0x18
		::System::Void Init(::LELCKJPOPAO* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::LELCKJPOPAO*, ::System::UInt32))((::PBYTE)hIl2Cpp + OIMALENLIDI_INIT_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OIMALENLIDI_GET_ISVALID_OFFSET))(this);
		}

		::System::UInt32 get_Offset()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OIMALENLIDI_GET_OFFSET_OFFSET))(this);
		}

		::LELCKJPOPAO* get_Pool()
		{
			return ((::LELCKJPOPAO*(*)(::PVOID))((::PBYTE)hIl2Cpp + OIMALENLIDI_GET_POOL_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIMALENLIDI_DISPOSE_OFFSET))(this);
		}

		::System::Int32 CBBDBLPCMAA()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OIMALENLIDI_CBBDBLPCMAA_OFFSET))(this);
		}

		::System::Void JLPFOJNDOAI(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OIMALENLIDI_JLPFOJNDOAI_OFFSET))(this, a1);
		}

		::RPG::MVector3 MOOENEIANFA()
		{
			return ((::RPG::MVector3(*)(::PVOID))((::PBYTE)hIl2Cpp + OIMALENLIDI_MOOENEIANFA_OFFSET))(this);
		}

		::System::Void BEBLJJOBMOM(::RPG::MVector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector3))((::PBYTE)hIl2Cpp + OIMALENLIDI_BEBLJJOBMOM_OFFSET))(this, a1);
		}

		::RPG::MVector3 IKOCHGBIGPJ()
		{
			return ((::RPG::MVector3(*)(::PVOID))((::PBYTE)hIl2Cpp + OIMALENLIDI_IKOCHGBIGPJ_OFFSET))(this);
		}

		::System::Void FKHABBFPGFA(::RPG::MVector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector3))((::PBYTE)hIl2Cpp + OIMALENLIDI_FKHABBFPGFA_OFFSET))(this, a1);
		}

		::RPG::GameCore::MeshBound* GFLKJLOFIPA()
		{
			return ((::RPG::GameCore::MeshBound*(*)(::PVOID))((::PBYTE)hIl2Cpp + OIMALENLIDI_GFLKJLOFIPA_OFFSET))(this);
		}

	};
