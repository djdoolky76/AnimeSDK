#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightRichTextNodeCompiler.h"
class DNGMCNPJHBJ;
class FMKEJLGKEMH;
class LILKPFIJLBN;
namespace RPG::Client { class GridFightBonfireEventOption; }
namespace RPG::Client { class GridFightBonusDropData; }
namespace System { class String; }

#define LILKPFIJLBN_BGOIMIMGAHI_OFFSET UNITYSDK_OFFSET(0x172EF970)
#define LILKPFIJLBN_CAANBOLMLOE_1_OFFSET UNITYSDK_OFFSET(0x172EFDC0)
#define LILKPFIJLBN_CAANBOLMLOE_OFFSET UNITYSDK_OFFSET(0x172EFEA0)
#define LILKPFIJLBN_CCTOR_OFFSET UNITYSDK_OFFSET(0x172EFFC0)
#define LILKPFIJLBN_COMPILE_OFFSET UNITYSDK_OFFSET(0x172EF4B0)
#define LILKPFIJLBN_CTOR_OFFSET UNITYSDK_OFFSET(0x172EFFB0)
#define LILKPFIJLBN_DDIHDIGFBCF_OFFSET UNITYSDK_OFFSET(0x172EF3C0)
#define LILKPFIJLBN_FALKOFKEKCM_OFFSET UNITYSDK_OFFSET(0x172EF460)
#define LILKPFIJLBN_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x172EF2F0)
#define LILKPFIJLBN_GET_TAG_OFFSET UNITYSDK_OFFSET(0x172EF350)
#define LILKPFIJLBN_GLEFNFJPLMM_OFFSET UNITYSDK_OFFSET(0x172EF410)
#define LILKPFIJLBN_HJIPIEDLOLL_OFFSET UNITYSDK_OFFSET(0x172EF790)
#define LILKPFIJLBN_HPMKGJIJHLN_OFFSET UNITYSDK_OFFSET(0x172EF640)
#define LILKPFIJLBN_LAJNJNBHJOO_OFFSET UNITYSDK_OFFSET(0x172EFB30)

inline static constexpr unsigned int LILKPFIJLBN_TypeDefinitionIndex = 67030;

	class LILKPFIJLBN : public ::RPG::Client::GridFightRichTextNodeCompiler
	{
	public:
		::RPG::Client::GridFightBonfireEventOption* AMNOIMCFJJF; // 0x10
		::System::Boolean OBPOPPJEEEO; // 0x18
		static ::LILKPFIJLBN** StaticGet__Instance_k__BackingField()
		{
			return (::LILKPFIJLBN**)UnitySDK::FromName("", "LILKPFIJLBN")->GetStaticField(0x68410);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LILKPFIJLBN_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LILKPFIJLBN_CCTOR_OFFSET))();
		}

		static ::LILKPFIJLBN* get_Instance()
		{
			return ((::LILKPFIJLBN*(*)())((::PBYTE)hIl2Cpp + LILKPFIJLBN_GET_INSTANCE_OFFSET))();
		}

		::System::String* get_Tag()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LILKPFIJLBN_GET_TAG_OFFSET))(this);
		}

		::LILKPFIJLBN* DDIHDIGFBCF(::RPG::Client::GridFightBonfireEventOption* a1)
		{
			return ((::LILKPFIJLBN*(*)(::PVOID, ::RPG::Client::GridFightBonfireEventOption*))((::PBYTE)hIl2Cpp + LILKPFIJLBN_DDIHDIGFBCF_OFFSET))(this, a1);
		}

		::LILKPFIJLBN* GLEFNFJPLMM()
		{
			return ((::LILKPFIJLBN*(*)(::PVOID))((::PBYTE)hIl2Cpp + LILKPFIJLBN_GLEFNFJPLMM_OFFSET))(this);
		}

		::LILKPFIJLBN* FALKOFKEKCM()
		{
			return ((::LILKPFIJLBN*(*)(::PVOID))((::PBYTE)hIl2Cpp + LILKPFIJLBN_FALKOFKEKCM_OFFSET))(this);
		}

		::System::String* Compile(::FMKEJLGKEMH* a1, ::DNGMCNPJHBJ* a2)
		{
			return ((::System::String*(*)(::PVOID, ::FMKEJLGKEMH*, ::DNGMCNPJHBJ*))((::PBYTE)hIl2Cpp + LILKPFIJLBN_COMPILE_OFFSET))(this, a1, a2);
		}

		::System::String* HPMKGJIJHLN(::System::String* a1, ::FMKEJLGKEMH* a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::FMKEJLGKEMH*))((::PBYTE)hIl2Cpp + LILKPFIJLBN_HPMKGJIJHLN_OFFSET))(this, a1, a2);
		}

		::System::String* HJIPIEDLOLL(::System::UInt32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LILKPFIJLBN_HJIPIEDLOLL_OFFSET))(this, a1);
		}

		::System::String* BGOIMIMGAHI()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LILKPFIJLBN_BGOIMIMGAHI_OFFSET))(this);
		}

		::System::String* LAJNJNBHJOO(::FMKEJLGKEMH* a1)
		{
			return ((::System::String*(*)(::PVOID, ::FMKEJLGKEMH*))((::PBYTE)hIl2Cpp + LILKPFIJLBN_LAJNJNBHJOO_OFFSET))(this, a1);
		}

		::System::String* CAANBOLMLOE(::RPG::Client::GridFightBonusDropData* a1)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::Client::GridFightBonusDropData*))((::PBYTE)hIl2Cpp + LILKPFIJLBN_CAANBOLMLOE_OFFSET))(this, a1);
		}

		::System::String* CAANBOLMLOE_1(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + LILKPFIJLBN_CAANBOLMLOE_1_OFFSET))(this, a1);
		}

	};
