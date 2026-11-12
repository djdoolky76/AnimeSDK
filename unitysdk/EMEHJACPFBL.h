#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightRichTextNodeCompiler.h"
class DNGMCNPJHBJ;
class EMEHJACPFBL;
class FMKEJLGKEMH;
namespace RPG::Client { class GridFightBonusDropData; }
namespace RPG::Client { class GridFightPrayQuest; }
namespace System { class String; }

#define EMEHJACPFBL_AOCODPICJFI_OFFSET UNITYSDK_OFFSET(0x1647E370)
#define EMEHJACPFBL_COMPILE_OFFSET UNITYSDK_OFFSET(0x1647E460)
#define EMEHJACPFBL_CTOR_OFFSET UNITYSDK_OFFSET(0x1647EC30)
#define EMEHJACPFBL_EHPLCCHHPFK_OFFSET UNITYSDK_OFFSET(0x1647E7F0)
#define EMEHJACPFBL_FALKOFKEKCM_OFFSET UNITYSDK_OFFSET(0x1647E410)
#define EMEHJACPFBL_GET_TAG_OFFSET UNITYSDK_OFFSET(0x1647E300)
#define EMEHJACPFBL_GLEFNFJPLMM_OFFSET UNITYSDK_OFFSET(0x1647E3C0)
#define EMEHJACPFBL_HPMKGJIJHLN_OFFSET UNITYSDK_OFFSET(0x1647E5F0)
#define EMEHJACPFBL_MMAEHEOGGPI_OFFSET UNITYSDK_OFFSET(0x1647E6F0)
#define EMEHJACPFBL_NLJMLJIGJGM_OFFSET UNITYSDK_OFFSET(0x1647EB20)

inline static constexpr unsigned int EMEHJACPFBL_TypeDefinitionIndex = 67049;

	class EMEHJACPFBL : public ::RPG::Client::GridFightRichTextNodeCompiler
	{
	public:
		::RPG::Client::GridFightPrayQuest* NFALPNEJCGP; // 0x10
		::System::Boolean OBPOPPJEEEO; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMEHJACPFBL_CTOR_OFFSET))(this);
		}

		::System::String* get_Tag()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EMEHJACPFBL_GET_TAG_OFFSET))(this);
		}

		::EMEHJACPFBL* AOCODPICJFI(::RPG::Client::GridFightPrayQuest* a1)
		{
			return ((::EMEHJACPFBL*(*)(::PVOID, ::RPG::Client::GridFightPrayQuest*))((::PBYTE)hIl2Cpp + EMEHJACPFBL_AOCODPICJFI_OFFSET))(this, a1);
		}

		::EMEHJACPFBL* GLEFNFJPLMM()
		{
			return ((::EMEHJACPFBL*(*)(::PVOID))((::PBYTE)hIl2Cpp + EMEHJACPFBL_GLEFNFJPLMM_OFFSET))(this);
		}

		::EMEHJACPFBL* FALKOFKEKCM()
		{
			return ((::EMEHJACPFBL*(*)(::PVOID))((::PBYTE)hIl2Cpp + EMEHJACPFBL_FALKOFKEKCM_OFFSET))(this);
		}

		::System::String* Compile(::FMKEJLGKEMH* a1, ::DNGMCNPJHBJ* a2)
		{
			return ((::System::String*(*)(::PVOID, ::FMKEJLGKEMH*, ::DNGMCNPJHBJ*))((::PBYTE)hIl2Cpp + EMEHJACPFBL_COMPILE_OFFSET))(this, a1, a2);
		}

		::System::String* HPMKGJIJHLN(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EMEHJACPFBL_HPMKGJIJHLN_OFFSET))(this, a1);
		}

		::System::String* MMAEHEOGGPI()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EMEHJACPFBL_MMAEHEOGGPI_OFFSET))(this);
		}

		::System::String* EHPLCCHHPFK()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EMEHJACPFBL_EHPLCCHHPFK_OFFSET))(this);
		}

		::System::String* NLJMLJIGJGM(::RPG::Client::GridFightBonusDropData* a1)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::Client::GridFightBonusDropData*))((::PBYTE)hIl2Cpp + EMEHJACPFBL_NLJMLJIGJGM_OFFSET))(this, a1);
		}

	};
