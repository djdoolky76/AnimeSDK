#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/ByteHash16.h"
class AMEILLGKDMB;
class HGDELEAHIJO;
namespace System { class String; }

#define MEHEMFNHEMK_CTOR_OFFSET UNITYSDK_OFFSET(0x1C47CA10)
#define MEHEMFNHEMK_ICLDDLDJBFL_OFFSET UNITYSDK_OFFSET(0x1C48C1F0)
#define MEHEMFNHEMK_JLHENLIKDGF_OFFSET UNITYSDK_OFFSET(0x1C48C1A0)
#define MEHEMFNHEMK_KFGJGMFEMIG_OFFSET UNITYSDK_OFFSET(0x1C48C520)
#define MEHEMFNHEMK_LOJMCJIILCN_OFFSET UNITYSDK_OFFSET(0x1C48C3E0)
#define MEHEMFNHEMK_MCEMEHPCOLP_OFFSET UNITYSDK_OFFSET(0x1C48C240)
#define MEHEMFNHEMK_MFFKOKFNLAG_1_OFFSET UNITYSDK_OFFSET(0x1C48C780)
#define MEHEMFNHEMK_MFFKOKFNLAG_OFFSET UNITYSDK_OFFSET(0x1C48C700)
#define MEHEMFNHEMK_NGCFPFALCGD_OFFSET UNITYSDK_OFFSET(0x1C48C2B0)

inline static constexpr unsigned int MEHEMFNHEMK_TypeDefinitionIndex = 41526;

	class MEHEMFNHEMK : public ::System::Object
	{
	public:
		::Il2CppArray<::AMEILLGKDMB*>* FHABHGGFJOI; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEHEMFNHEMK_CTOR_OFFSET))(this);
		}

		::System::Void JLHENLIKDGF(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MEHEMFNHEMK_JLHENLIKDGF_OFFSET))(this, a1);
		}

		::System::Int32 ICLDDLDJBFL()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MEHEMFNHEMK_ICLDDLDJBFL_OFFSET))(this);
		}

		::HGDELEAHIJO* MCEMEHPCOLP(::System::Int32 a1)
		{
			return ((::HGDELEAHIJO*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MEHEMFNHEMK_MCEMEHPCOLP_OFFSET))(this, a1);
		}

		::System::Boolean NGCFPFALCGD(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MEHEMFNHEMK_NGCFPFALCGD_OFFSET))(this, a1);
		}

		::HGDELEAHIJO* LOJMCJIILCN(::System::String* a1)
		{
			return ((::HGDELEAHIJO*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MEHEMFNHEMK_LOJMCJIILCN_OFFSET))(this, a1);
		}

		::System::Boolean KFGJGMFEMIG(::System::String* a1, ::RPG::Client::ByteHash16 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::RPG::Client::ByteHash16))((::PBYTE)hIl2Cpp + MEHEMFNHEMK_KFGJGMFEMIG_OFFSET))(this, a1, a2);
		}

		::System::Boolean MFFKOKFNLAG(::System::String* a1, ::RPG::Client::ByteHash16 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::RPG::Client::ByteHash16))((::PBYTE)hIl2Cpp + MEHEMFNHEMK_MFFKOKFNLAG_OFFSET))(this, a1, a2);
		}

		::System::Boolean MFFKOKFNLAG_1(::System::String* a1, ::RPG::Client::ByteHash16 a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::RPG::Client::ByteHash16, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MEHEMFNHEMK_MFFKOKFNLAG_1_OFFSET))(this, a1, a2, a3, a4);
		}

	};
