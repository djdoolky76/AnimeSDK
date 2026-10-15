#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftAttributeType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
class AEOBCFPOIBP;
namespace System { class String; }

#define NGCGPIAHAMJ_CNHIDCKLBBF_OFFSET UNITYSDK_OFFSET(0xBB9C5D0)
#define NGCGPIAHAMJ_COEPHIFKHCM_OFFSET UNITYSDK_OFFSET(0xBB9C620)
#define NGCGPIAHAMJ_CTOR_OFFSET UNITYSDK_OFFSET(0xBB9C670)
#define NGCGPIAHAMJ_GET_CACHEKEY_OFFSET UNITYSDK_OFFSET(0xBB9C4C0)
#define NGCGPIAHAMJ_JBIOGKPHKKC_OFFSET UNITYSDK_OFFSET(0xBB9C510)
#define NGCGPIAHAMJ_MLMGEFIOION_OFFSET UNITYSDK_OFFSET(0xBB9C560)

inline static constexpr unsigned int NGCGPIAHAMJ_TypeDefinitionIndex = 80085;

	class NGCGPIAHAMJ : public ::System::Object
	{
	public:
		::AEOBCFPOIBP* IBPBJBOKKMF; // 0x10
		::System::Void _ctor(::AEOBCFPOIBP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AEOBCFPOIBP*))((::PBYTE)hIl2Cpp + NGCGPIAHAMJ_CTOR_OFFSET))(this, a1);
		}

		::System::Int32 get_CacheKey()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NGCGPIAHAMJ_GET_CACHEKEY_OFFSET))(this);
		}

		::RPG::Client::MechCraft::MechCraftAttributeType JBIOGKPHKKC()
		{
			return ((::RPG::Client::MechCraft::MechCraftAttributeType(*)(::PVOID))((::PBYTE)hIl2Cpp + NGCGPIAHAMJ_JBIOGKPHKKC_OFFSET))(this);
		}

		::RPG::Client::TextID MLMGEFIOION()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + NGCGPIAHAMJ_MLMGEFIOION_OFFSET))(this);
		}

		::System::String* CNHIDCKLBBF()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGCGPIAHAMJ_CNHIDCKLBBF_OFFSET))(this);
		}

		::System::Int32 COEPHIFKHCM()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NGCGPIAHAMJ_COEPHIFKHCM_OFFSET))(this);
		}

	};
