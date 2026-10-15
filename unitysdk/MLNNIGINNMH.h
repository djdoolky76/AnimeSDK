#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftChipTraitType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
class ABNJPNLFKLN;
namespace System { class String; }

#define MLNNIGINNMH_COEPHIFKHCM_OFFSET UNITYSDK_OFFSET(0xB9B5670)
#define MLNNIGINNMH_CTOR_OFFSET UNITYSDK_OFFSET(0xB9B56C0)
#define MLNNIGINNMH_GET_CACHEKEY_OFFSET UNITYSDK_OFFSET(0xB9B54D0)
#define MLNNIGINNMH_HPDOCELINMF_OFFSET UNITYSDK_OFFSET(0xB9B55E0)
#define MLNNIGINNMH_JBIOGKPHKKC_OFFSET UNITYSDK_OFFSET(0xB9B5520)
#define MLNNIGINNMH_MLMGEFIOION_OFFSET UNITYSDK_OFFSET(0xB9B5570)

inline static constexpr unsigned int MLNNIGINNMH_TypeDefinitionIndex = 80156;

	class MLNNIGINNMH : public ::System::Object
	{
	public:
		::ABNJPNLFKLN* IBPBJBOKKMF; // 0x10
		::System::Void _ctor(::ABNJPNLFKLN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ABNJPNLFKLN*))((::PBYTE)hIl2Cpp + MLNNIGINNMH_CTOR_OFFSET))(this, a1);
		}

		::System::Int32 get_CacheKey()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MLNNIGINNMH_GET_CACHEKEY_OFFSET))(this);
		}

		::RPG::Client::MechCraft::MechCraftChipTraitType JBIOGKPHKKC()
		{
			return ((::RPG::Client::MechCraft::MechCraftChipTraitType(*)(::PVOID))((::PBYTE)hIl2Cpp + MLNNIGINNMH_JBIOGKPHKKC_OFFSET))(this);
		}

		::RPG::Client::TextID MLMGEFIOION()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + MLNNIGINNMH_MLMGEFIOION_OFFSET))(this);
		}

		::System::String* HPDOCELINMF()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MLNNIGINNMH_HPDOCELINMF_OFFSET))(this);
		}

		::System::Int32 COEPHIFKHCM()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MLNNIGINNMH_COEPHIFKHCM_OFFSET))(this);
		}

	};
