#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/PassTagID.h"
class APCCFELCPKH_BMILOCEDDIE;
class APCCFELCPKH_MJFEMPECGGL;
namespace RPG::Client { class Stage; }
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }

#define APCCFELCPKH_HHFECHMBLPH_CTOR_OFFSET UNITYSDK_OFFSET(0x15BA1350)
#define APCCFELCPKH_HHFECHMBLPH_DDCBDPBGNCB_OFFSET UNITYSDK_OFFSET(0x15BA1D00)
#define APCCFELCPKH_HHFECHMBLPH_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15BA1920)
#define APCCFELCPKH_HHFECHMBLPH_NJAJMEMGLGH_OFFSET UNITYSDK_OFFSET(0x15BA1FB0)

inline static constexpr unsigned int APCCFELCPKH_HHFECHMBLPH_TypeDefinitionIndex = 60240;

	class APCCFELCPKH_HHFECHMBLPH : public ::System::Object
	{
	public:
		::UnityEngine::PassTagID NMJHGJGNJEH; // 0x10
		::RPG::Client::OpenWorld::StreamingItemData* BGFPGNDIOII; // 0x20
		::APCCFELCPKH_MJFEMPECGGL* MIPCILCJBMP; // 0x28
		::System::String* BDACPPLKLGL; // 0x30
		::RPG::Client::Stage* PPANBKDPFFK; // 0x38
		::UnityEngine::Material* IMOHCDHKBAJ; // 0x40
		::APCCFELCPKH_BMILOCEDDIE* POOGHHFHIAN; // 0x48
		::System::Boolean ALDHKBIELOG; // 0x50
		::System::Byte _padding0[0x3];
		::System::UInt32 FMLGGKAFMKC; // 0x54
		::System::UInt32 CMNOEFFFNPE; // 0x58
		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2, ::APCCFELCPKH_MJFEMPECGGL* a3, ::System::String* a4, ::RPG::Client::Stage* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::APCCFELCPKH_MJFEMPECGGL*, ::System::String*, ::RPG::Client::Stage*))((::PBYTE)hIl2Cpp + APCCFELCPKH_HHFECHMBLPH_CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APCCFELCPKH_HHFECHMBLPH_DISPOSE_OFFSET))(this);
		}

		::System::Void DDCBDPBGNCB(::UnityEngine::GameObject* a1, ::RPG::Client::OpenWorld::StreamingItemData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + APCCFELCPKH_HHFECHMBLPH_DDCBDPBGNCB_OFFSET))(this, a1, a2);
		}

		::System::Void NJAJMEMGLGH(::UnityEngine::GameObject* a1, ::RPG::Client::OpenWorld::StreamingItemData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + APCCFELCPKH_HHFECHMBLPH_NJAJMEMGLGH_OFFSET))(this, a1, a2);
		}

	};
