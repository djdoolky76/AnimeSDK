#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HEOLKMLMPML.h"
#include "unitysdk/IENBCIEKGFA_GridFightPropertyDisplayType.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
class DNGMCNPJHBJ;
class FMKEJLGKEMH;
namespace System { class String; }

#define IENBCIEKGFA_ACMPHJJOOHE_OFFSET UNITYSDK_OFFSET(0x15EF9940)
#define IENBCIEKGFA_CTOR_OFFSET UNITYSDK_OFFSET(0x15EF9E90)
#define IENBCIEKGFA_HPKMLKKCCOP_OFFSET UNITYSDK_OFFSET(0x15EF9A40)
#define IENBCIEKGFA_KGJGHKHLIHA_OFFSET UNITYSDK_OFFSET(0x15EF9C20)
#define IENBCIEKGFA_NDMBDGKAJEK_OFFSET UNITYSDK_OFFSET(0x15EF98F0)

inline static constexpr unsigned int IENBCIEKGFA_TypeDefinitionIndex = 65290;

	class IENBCIEKGFA : public ::HEOLKMLMPML
	{
	public:
		::DNGMCNPJHBJ* EEFMDEHLLFI; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IENBCIEKGFA_CTOR_OFFSET))(this);
		}

		::System::String* NDMBDGKAJEK()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IENBCIEKGFA_NDMBDGKAJEK_OFFSET))(this);
		}

		::System::String* ACMPHJJOOHE(::FMKEJLGKEMH* a1, ::DNGMCNPJHBJ* a2)
		{
			return ((::System::String*(*)(::PVOID, ::FMKEJLGKEMH*, ::DNGMCNPJHBJ*))((::PBYTE)hIl2Cpp + IENBCIEKGFA_ACMPHJJOOHE_OFFSET))(this, a1, a2);
		}

		::System::Boolean HPKMLKKCCOP(::FMKEJLGKEMH* a1, ::RPG::GameCore::AvatarPropertyType a2, ::IENBCIEKGFA_GridFightPropertyDisplayType a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::FMKEJLGKEMH*, ::RPG::GameCore::AvatarPropertyType, ::IENBCIEKGFA_GridFightPropertyDisplayType))((::PBYTE)hIl2Cpp + IENBCIEKGFA_HPKMLKKCCOP_OFFSET))(this, a1, a2, a3);
		}

		::System::String* KGJGHKHLIHA(::RPG::GameCore::AvatarPropertyType a1, ::IENBCIEKGFA_GridFightPropertyDisplayType a2)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType, ::IENBCIEKGFA_GridFightPropertyDisplayType))((::PBYTE)hIl2Cpp + IENBCIEKGFA_KGJGHKHLIHA_OFFSET))(this, a1, a2);
		}

	};
