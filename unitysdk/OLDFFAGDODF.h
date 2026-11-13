#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightRichTextNodeCompiler.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
class DNGMCNPJHBJ;
class FMKEJLGKEMH;
class GEIFDGHFMMF;
namespace RPG::Client { class GridFightRole; }
namespace System { class String; }

#define OLDFFAGDODF_COMPILE_OFFSET UNITYSDK_OFFSET(0x178A01F0)
#define OLDFFAGDODF_CTOR_OFFSET UNITYSDK_OFFSET(0x178A15B0)
#define OLDFFAGDODF_GET_TAG_OFFSET UNITYSDK_OFFSET(0x178A0180)
#define OLDFFAGDODF_IGPNOGINEFD_OFFSET UNITYSDK_OFFSET(0x178A14F0)
#define OLDFFAGDODF_KGJGHKHLIHA_OFFSET UNITYSDK_OFFSET(0x178A1310)
#define OLDFFAGDODF_NJIBMEAFLGM_OFFSET UNITYSDK_OFFSET(0x178A0B70)

inline static constexpr unsigned int OLDFFAGDODF_TypeDefinitionIndex = 67052;

	class OLDFFAGDODF : public ::RPG::Client::GridFightRichTextNodeCompiler
	{
	public:
		::DNGMCNPJHBJ* EEFMDEHLLFI; // 0x10
		::GEIFDGHFMMF* GAJHLFGLCCK; // 0x18
		::FMKEJLGKEMH* JKLBAAHFJDJ; // 0x20
		::RPG::Client::GridFightRole* IAHCEGHHCKB; // 0x28
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
