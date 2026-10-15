#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AFKFJCPELEM;
class AKMFECNJFBG;
class CGEOCOPMJGI;
class ECJGCFIJJKD;
class EOKPKNLFICD;
class FHHJMJFKIIH;
class FJFNJCPHFDM;
class GAGKMDGBGFL;
class GHGAFIIFPEC;
class MPEOLIBNMGE;
class NKIJFPHFJCO;
class OBJANKHLNGO;
namespace RPG::Client::Promises { class IPromise; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MFFPHMCGEOJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB8F4950)
#define MFFPHMCGEOJ_DHOFLOEPGHH_OFFSET UNITYSDK_OFFSET(0xB8F4F10)
#define MFFPHMCGEOJ_ECJKNEACBBC_OFFSET UNITYSDK_OFFSET(0xB8F56A0)
#define MFFPHMCGEOJ_JFPLCOMCDBN_OFFSET UNITYSDK_OFFSET(0xB8F49D0)
#define MFFPHMCGEOJ_JINOCNPJLFC_OFFSET UNITYSDK_OFFSET(0xB8F5420)

inline static constexpr unsigned int MFFPHMCGEOJ_TypeDefinitionIndex = 80246;

	class MFFPHMCGEOJ : public ::System::Object
	{
	public:
		::FHHJMJFKIIH* CEADMKKNLDH; // 0x10
		::MPEOLIBNMGE* MOOEPGBJJAF; // 0x18
		::FJFNJCPHFDM* GKPHGLBPCKD; // 0x20
		::GHGAFIIFPEC* DOIMIHLLDGH; // 0x28
		::GAGKMDGBGFL* MJHHLOPFDNK; // 0x30
		::System::Collections::Generic::List_1<::System::UInt32>* PCGJCDBJIKP; // 0x38
		::OBJANKHLNGO* GJALMBBNNOF; // 0x40
		::System::Void _ctor(::OBJANKHLNGO* a1, ::GAGKMDGBGFL* a2, ::FHHJMJFKIIH* a3, ::FJFNJCPHFDM* a4, ::MPEOLIBNMGE* a5, ::GHGAFIIFPEC* a6)
		{
			return ((::System::Void(*)(::PVOID, ::OBJANKHLNGO*, ::GAGKMDGBGFL*, ::FHHJMJFKIIH*, ::FJFNJCPHFDM*, ::MPEOLIBNMGE*, ::GHGAFIIFPEC*))((::PBYTE)hIl2Cpp + MFFPHMCGEOJ_CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::RPG::Client::Promises::IPromise* JFPLCOMCDBN(::System::UInt32 a1, ::System::Collections::Generic::IEnumerable_1<::NKIJFPHFJCO*>* a2, ::AKMFECNJFBG* a3)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::IEnumerable_1<::NKIJFPHFJCO*>*, ::AKMFECNJFBG*))((::PBYTE)hIl2Cpp + MFFPHMCGEOJ_JFPLCOMCDBN_OFFSET))(this, a1, a2, a3);
		}

		::System::Void DHOFLOEPGHH(::EOKPKNLFICD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EOKPKNLFICD*))((::PBYTE)hIl2Cpp + MFFPHMCGEOJ_DHOFLOEPGHH_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* JINOCNPJLFC(::System::UInt32 a1, ::AFKFJCPELEM* a2, ::AKMFECNJFBG* a3)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::UInt32, ::AFKFJCPELEM*, ::AKMFECNJFBG*))((::PBYTE)hIl2Cpp + MFFPHMCGEOJ_JINOCNPJLFC_OFFSET))(this, a1, a2, a3);
		}

		::ECJGCFIJJKD* ECJKNEACBBC(::System::UInt32 a1, ::AKMFECNJFBG* a2)
		{
			return ((::ECJGCFIJJKD*(*)(::PVOID, ::System::UInt32, ::AKMFECNJFBG*))((::PBYTE)hIl2Cpp + MFFPHMCGEOJ_ECJKNEACBBC_OFFSET))(this, a1, a2);
		}

	};
