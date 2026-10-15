#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FLIGGMCNCHM;
namespace RPG::Client { class AudiencePrefabSpecialTag_Blink; }
namespace RPG::GameCore { class CharacterAtlasFaceSet; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HGPOFIGCPAM_CTOR_OFFSET UNITYSDK_OFFSET(0x15CB38F0)
#define HGPOFIGCPAM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15CB3D20)
#define HGPOFIGCPAM_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x15CB3D70)
#define HGPOFIGCPAM_MEFIGIGJAAF_OFFSET UNITYSDK_OFFSET(0x15CB3B80)
#define HGPOFIGCPAM_PKADDEPKJFN_OFFSET UNITYSDK_OFFSET(0x15CB3980)

	class HGPOFIGCPAM : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* OIKPPAFNOEJ; // 0x10
		::RPG::Client::AudiencePrefabSpecialTag_Blink* EIALGCHCOCN; // 0x18
		::RPG::GameCore::CharacterAtlasFaceSet* IBOHAFFKOJN; // 0x20
		::FLIGGMCNCHM* EDLCJHNBKDN; // 0x28
		::System::Single CLLHFCJIAHB; // 0x30
		::System::Single MLHIGPBLBPN; // 0x34
		::System::Void _ctor(::FLIGGMCNCHM* a1, ::RPG::Client::AudiencePrefabSpecialTag_Blink* a2, ::RPG::GameCore::CharacterAtlasFaceSet* a3)
		{
			return ((::System::Void(*)(::PVOID, ::FLIGGMCNCHM*, ::RPG::Client::AudiencePrefabSpecialTag_Blink*, ::RPG::GameCore::CharacterAtlasFaceSet*))((::PBYTE)hIl2Cpp + HGPOFIGCPAM_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void PKADDEPKJFN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGPOFIGCPAM_PKADDEPKJFN_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGPOFIGCPAM_DISPOSE_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HGPOFIGCPAM_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void MEFIGIGJAAF(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HGPOFIGCPAM_MEFIGIGJAAF_OFFSET))(this, a1);
		}

	};
