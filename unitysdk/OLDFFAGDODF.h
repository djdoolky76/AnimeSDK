#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightRichTextNodeCompiler.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
class DNGMCNPJHBJ;
class FMKEJLGKEMH;
class GEIFDGHFMMF;
namespace RPG::Client { class GridFightRole; }
namespace System { class String; }

#define OLDFFAGDODF_COMPILE_OFFSET UNITYSDK_OFFSET(0xC7FC530)
#define OLDFFAGDODF_CTOR_OFFSET UNITYSDK_OFFSET(0xC7FD900)
#define OLDFFAGDODF_GET_TAG_OFFSET UNITYSDK_OFFSET(0xC7FC4C0)
#define OLDFFAGDODF_IGPNOGINEFD_OFFSET UNITYSDK_OFFSET(0xC7FD840)
#define OLDFFAGDODF_KGJGHKHLIHA_OFFSET UNITYSDK_OFFSET(0xC7FD660)
#define OLDFFAGDODF_NJIBMEAFLGM_OFFSET UNITYSDK_OFFSET(0xC7FCEC0)

inline static constexpr unsigned int OLDFFAGDODF_TypeDefinitionIndex = 67052;

	class OLDFFAGDODF : public ::RPG::Client::GridFightRichTextNodeCompiler
	{
	public:
		::FMKEJLGKEMH* JKLBAAHFJDJ; // 0x10
		::DNGMCNPJHBJ* EEFMDEHLLFI; // 0x18
		::RPG::Client::GridFightRole* IAHCEGHHCKB; // 0x20
		::GEIFDGHFMMF* GAJHLFGLCCK; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLDFFAGDODF_CTOR_OFFSET))(this);
		}

		::System::String* get_Tag()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OLDFFAGDODF_GET_TAG_OFFSET))(this);
		}

		::System::String* Compile(::FMKEJLGKEMH* a1, ::DNGMCNPJHBJ* a2)
		{
			return ((::System::String*(*)(::PVOID, ::FMKEJLGKEMH*, ::DNGMCNPJHBJ*))((::PBYTE)hIl2Cpp + OLDFFAGDODF_COMPILE_OFFSET))(this, a1, a2);
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
