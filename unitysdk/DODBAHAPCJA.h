#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NGFHCJIAOLH;
class OAIPJANPCEK;
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace RPG::Client::Promises { template <typename T> class Promise_1; }
namespace RPG::GameCore { class ChenLingFesPosition; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define DODBAHAPCJA_BFKAPHIDMIA_OFFSET UNITYSDK_OFFSET(0x12DD9E80)
#define DODBAHAPCJA_CFDAOKBADCL_OFFSET UNITYSDK_OFFSET(0x12DD95F0)
#define DODBAHAPCJA_CGKPLEDLODB_OFFSET UNITYSDK_OFFSET(0x12DD9F10)
#define DODBAHAPCJA_CTOR_OFFSET UNITYSDK_OFFSET(0x12DD9300)
#define DODBAHAPCJA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12DD93F0)
#define DODBAHAPCJA_FEOFILFMAMJ_OFFSET UNITYSDK_OFFSET(0x12DD9980)
#define DODBAHAPCJA_FLCBMNDHIDH_OFFSET UNITYSDK_OFFSET(0x12DD9B70)
#define DODBAHAPCJA_JEKOEJFOMPL_OFFSET UNITYSDK_OFFSET(0x12DD99F0)
#define DODBAHAPCJA_KPJBKCFJEAH_OFFSET UNITYSDK_OFFSET(0x12DD97F0)
#define DODBAHAPCJA_LNACFIDFBPH_OFFSET UNITYSDK_OFFSET(0x12DD9BD0)
#define DODBAHAPCJA_MOPEMHLBOBC_OFFSET UNITYSDK_OFFSET(0x12DD9C90)
#define DODBAHAPCJA_ODFIOHMGBLO_OFFSET UNITYSDK_OFFSET(0x12DD9710)
#define DODBAHAPCJA_OFEBJBHCCKF_OFFSET UNITYSDK_OFFSET(0x12DD9500)

inline static constexpr unsigned int DODBAHAPCJA_TypeDefinitionIndex = 80497;

	class DODBAHAPCJA : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::UInt32>* KDEODGPLDJI; // 0x10
		::System::Collections::Generic::HashSet_1<::RPG::GameCore::ChenLingFesPosition*>* GKOMNFGLMLP; // 0x18
		::RPG::Client::Promises::Promise_1<::System::Boolean>* NPDEMOGNIAE; // 0x20
		::OAIPJANPCEK* PDENFEFCAGN; // 0x28
		::RPG::Client::Promises::Promise_1<::System::Boolean>* JGIFKBIFFOJ; // 0x30
		::System::Boolean FMDPCEGDOPP; // 0x38
		::System::Boolean AGEBCFDADFA; // 0x39
		::System::Void _ctor(::OAIPJANPCEK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OAIPJANPCEK*))((::PBYTE)hIl2Cpp + DODBAHAPCJA_CTOR_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DODBAHAPCJA_DISPOSE_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise_1<::System::Boolean>* CFDAOKBADCL(::RPG::GameCore::ChenLingFesPosition* a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::Promises::IPromise_1<::System::Boolean>*(*)(::PVOID, ::RPG::GameCore::ChenLingFesPosition*, ::System::UInt32))((::PBYTE)hIl2Cpp + DODBAHAPCJA_CFDAOKBADCL_OFFSET))(this, a1, a2);
		}

		::RPG::Client::Promises::IPromise_1<::System::Boolean>* ODFIOHMGBLO(::RPG::GameCore::ChenLingFesPosition* a1)
		{
			return ((::RPG::Client::Promises::IPromise_1<::System::Boolean>*(*)(::PVOID, ::RPG::GameCore::ChenLingFesPosition*))((::PBYTE)hIl2Cpp + DODBAHAPCJA_ODFIOHMGBLO_OFFSET))(this, a1);
		}

		::System::Boolean KPJBKCFJEAH(::RPG::GameCore::ChenLingFesPosition* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChenLingFesPosition*))((::PBYTE)hIl2Cpp + DODBAHAPCJA_KPJBKCFJEAH_OFFSET))(this, a1);
		}

		::System::Boolean FEOFILFMAMJ(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DODBAHAPCJA_FEOFILFMAMJ_OFFSET))(this, a1);
		}

		::System::Boolean JEKOEJFOMPL(::NGFHCJIAOLH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NGFHCJIAOLH*))((::PBYTE)hIl2Cpp + DODBAHAPCJA_JEKOEJFOMPL_OFFSET))(this, a1);
		}

		::System::Void OFEBJBHCCKF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DODBAHAPCJA_OFEBJBHCCKF_OFFSET))(this);
		}

		::System::Void LNACFIDFBPH(::NGFHCJIAOLH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NGFHCJIAOLH*))((::PBYTE)hIl2Cpp + DODBAHAPCJA_LNACFIDFBPH_OFFSET))(this, a1);
		}

		::System::Boolean MOPEMHLBOBC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DODBAHAPCJA_MOPEMHLBOBC_OFFSET))(this);
		}

		::System::Boolean BFKAPHIDMIA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DODBAHAPCJA_BFKAPHIDMIA_OFFSET))(this);
		}

		::System::Void CGKPLEDLODB(::NGFHCJIAOLH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NGFHCJIAOLH*))((::PBYTE)hIl2Cpp + DODBAHAPCJA_CGKPLEDLODB_OFFSET))(this, a1);
		}

		::System::Boolean FLCBMNDHIDH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DODBAHAPCJA_FLCBMNDHIDH_OFFSET))(this);
		}

	};
