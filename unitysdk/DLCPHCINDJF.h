#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DLCPHCINDJF;
class GEDMHFPPBHN;
class KOBGLFENCOL;
class PHKFMKDHNBO;
namespace System { class String; }

#define DLCPHCINDJF_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xF8983B0)
#define DLCPHCINDJF_CTOR_OFFSET UNITYSDK_OFFSET(0xF898420)
#define DLCPHCINDJF_IDBHAGEDEIP_OFFSET UNITYSDK_OFFSET(0xF898600)
#define DLCPHCINDJF_JAJHGFBIKIG_OFFSET UNITYSDK_OFFSET(0xF898520)
#define DLCPHCINDJF_MDPIAODLBID_OFFSET UNITYSDK_OFFSET(0xF898430)

inline static constexpr unsigned int DLCPHCINDJF_TypeDefinitionIndex = 72179;

	class DLCPHCINDJF : public ::System::Object
	{
	public:
		::KOBGLFENCOL* JLFENAPAFCI; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLCPHCINDJF_CTOR_OFFSET))(this);
		}

		static ::DLCPHCINDJF* BPLPBPMEODA(::KOBGLFENCOL* a1)
		{
			return ((::DLCPHCINDJF*(*)(::KOBGLFENCOL*))((::PBYTE)hIl2Cpp + DLCPHCINDJF_BPLPBPMEODA_OFFSET))(a1);
		}

		static ::DLCPHCINDJF* MDPIAODLBID(::GEDMHFPPBHN* a1)
		{
			return ((::DLCPHCINDJF*(*)(::GEDMHFPPBHN*))((::PBYTE)hIl2Cpp + DLCPHCINDJF_MDPIAODLBID_OFFSET))(a1);
		}

		static ::DLCPHCINDJF* JAJHGFBIKIG(::PHKFMKDHNBO* a1)
		{
			return ((::DLCPHCINDJF*(*)(::PHKFMKDHNBO*))((::PBYTE)hIl2Cpp + DLCPHCINDJF_JAJHGFBIKIG_OFFSET))(a1);
		}

		::System::String* IDBHAGEDEIP()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DLCPHCINDJF_IDBHAGEDEIP_OFFSET))(this);
		}

	};
