#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HEOLKMLMPML.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
class DNGMCNPJHBJ;
class FMKEJLGKEMH;
class GEIFDGHFMMF;
namespace RPG::Client { class GridFightRole; }
namespace System { class String; }

#define OLDFFAGDODF_ACMPHJJOOHE_OFFSET UNITYSDK_OFFSET(0xBF01220)
#define OLDFFAGDODF_CTOR_OFFSET UNITYSDK_OFFSET(0xBF025F0)
#define OLDFFAGDODF_IGPNOGINEFD_OFFSET UNITYSDK_OFFSET(0xBF02530)
#define OLDFFAGDODF_KGJGHKHLIHA_OFFSET UNITYSDK_OFFSET(0xBF02350)
#define OLDFFAGDODF_NDMBDGKAJEK_OFFSET UNITYSDK_OFFSET(0xBF011B0)
#define OLDFFAGDODF_NJIBMEAFLGM_OFFSET UNITYSDK_OFFSET(0xBF01BB0)

inline static constexpr unsigned int OLDFFAGDODF_TypeDefinitionIndex = 65292;

	class OLDFFAGDODF : public ::HEOLKMLMPML
	{
	public:
		::GEIFDGHFMMF* GAJHLFGLCCK; // 0x10
		::FMKEJLGKEMH* JKLBAAHFJDJ; // 0x18
		::DNGMCNPJHBJ* EEFMDEHLLFI; // 0x20
		::RPG::Client::GridFightRole* IAHCEGHHCKB; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLDFFAGDODF_CTOR_OFFSET))(this);
		}

		::System::String* NDMBDGKAJEK()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OLDFFAGDODF_NDMBDGKAJEK_OFFSET))(this);
		}

		::System::String* ACMPHJJOOHE(::FMKEJLGKEMH* a1, ::DNGMCNPJHBJ* a2)
		{
			return ((::System::String*(*)(::PVOID, ::FMKEJLGKEMH*, ::DNGMCNPJHBJ*))((::PBYTE)hIl2Cpp + OLDFFAGDODF_ACMPHJJOOHE_OFFSET))(this, a1, a2);
		}

		::System::String* NJIBMEAFLGM()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OLDFFAGDODF_NJIBMEAFLGM_OFFSET))(this);
		}

		::System::String* KGJGHKHLIHA(::RPG::GameCore::AvatarPropertyType a1)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + OLDFFAGDODF_KGJGHKHLIHA_OFFSET))(this, a1);
		}

		::System::String* IGPNOGINEFD(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + OLDFFAGDODF_IGPNOGINEFD_OFFSET))(this, a1, a2);
		}

	};
