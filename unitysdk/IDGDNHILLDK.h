#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/B51Racing/EB51RacingResultState.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/GNEEDEDGCOI.h"
class BDHINPLKOPK;
class GLHGCJPGNGB;
class KBKFLNHFHPF;
class MJDKJEIAABG;
class OJHMEHAHDNI;
class OLBFLFEIIEN;
class PPEJPEMHNAO;
namespace RPG::Client::B51Racing { class B51RacingGameplayResultDialogViewModel; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IDGDNHILLDK_AKJABINEGDJ_OFFSET UNITYSDK_OFFSET(0x15ECF780)
#define IDGDNHILLDK_CCTOR_OFFSET UNITYSDK_OFFSET(0x15ED0AB0)
#define IDGDNHILLDK_CTOR_OFFSET UNITYSDK_OFFSET(0x15ECF710)
#define IDGDNHILLDK_EFNHLJNEHDA_OFFSET UNITYSDK_OFFSET(0x15ED01B0)
#define IDGDNHILLDK_IGPMECPOJMO_OFFSET UNITYSDK_OFFSET(0x15ED0880)
#define IDGDNHILLDK_JGLEADLIBDC_OFFSET UNITYSDK_OFFSET(0x15ED00A0)
#define IDGDNHILLDK_JLNGFGOPEOF_OFFSET UNITYSDK_OFFSET(0x15ED0900)
#define IDGDNHILLDK_KCJFPDGKCNN_OFFSET UNITYSDK_OFFSET(0x15ECFAF0)
#define IDGDNHILLDK_MKEFIOJBKEJ_OFFSET UNITYSDK_OFFSET(0x15ED0030)
#define IDGDNHILLDK_ONEPBLBGLKO_OFFSET UNITYSDK_OFFSET(0x15ED0130)
#define IDGDNHILLDK_PJKIPBDNHLC_OFFSET UNITYSDK_OFFSET(0x15ECFCF0)

	class IDGDNHILLDK : public ::System::Object
	{
	public:
		::KBKFLNHFHPF* APIINPIAPFI; // 0x10
		::PPEJPEMHNAO* NJNNCOCIGCC; // 0x18
		::BDHINPLKOPK* FPNMIGDJBIE; // 0x20
		::GLHGCJPGNGB* AAIODCKAFMH; // 0x28
		::OJHMEHAHDNI* JDGBDKHIEGG; // 0x30
		static ::Il2CppArray<::OLBFLFEIIEN*>** StaticGet_LCIHJAJOHNG()
		{
			return (::Il2CppArray<::OLBFLFEIIEN*>**)UnitySDK::FromName("", "IDGDNHILLDK")->GetStaticField(0x52790);
		}

		static ::RPG::Client::TextID* StaticGet_DALCMFEHLJI()
		{
			return (::RPG::Client::TextID*)UnitySDK::FromName("", "IDGDNHILLDK")->GetStaticField(0x12490);
		}

		static ::RPG::Client::TextID* StaticGet_MJNKALHBACO()
		{
			return (::RPG::Client::TextID*)UnitySDK::FromName("", "IDGDNHILLDK")->GetStaticField(0x124A0);
		}

		// static const ::System::Object MCHCHOEOHPJ; // 0x0
		::System::Void _ctor(::BDHINPLKOPK* a1, ::KBKFLNHFHPF* a2, ::PPEJPEMHNAO* a3, ::OJHMEHAHDNI* a4)
		{
			return ((::System::Void(*)(::PVOID, ::BDHINPLKOPK*, ::KBKFLNHFHPF*, ::PPEJPEMHNAO*, ::OJHMEHAHDNI*))((::PBYTE)hIl2Cpp + IDGDNHILLDK_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IDGDNHILLDK_CCTOR_OFFSET))();
		}

		::RPG::Client::B51Racing::B51RacingGameplayResultDialogViewModel* AKJABINEGDJ(::System::UInt32 a1, ::System::Int32 a2, ::System::Collections::Generic::List_1<::GNEEDEDGCOI>* a3, ::System::Int32 a4, ::System::String* a5, ::System::Single a6, ::System::Collections::Generic::IReadOnlyList_1<::System::Single>* a7)
		{
			return ((::RPG::Client::B51Racing::B51RacingGameplayResultDialogViewModel*(*)(::PVOID, ::System::UInt32, ::System::Int32, ::System::Collections::Generic::List_1<::GNEEDEDGCOI>*, ::System::Int32, ::System::String*, ::System::Single, ::System::Collections::Generic::IReadOnlyList_1<::System::Single>*))((::PBYTE)hIl2Cpp + IDGDNHILLDK_AKJABINEGDJ_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::MJDKJEIAABG* KCJFPDGKCNN(::System::UInt32 a1, ::System::Int32 a2, ::System::Collections::Generic::List_1<::GNEEDEDGCOI>* a3, ::System::Int32 a4, ::System::String* a5, ::System::Single a6, ::System::Collections::Generic::IReadOnlyList_1<::System::Single>* a7)
		{
			return ((::MJDKJEIAABG*(*)(::PVOID, ::System::UInt32, ::System::Int32, ::System::Collections::Generic::List_1<::GNEEDEDGCOI>*, ::System::Int32, ::System::String*, ::System::Single, ::System::Collections::Generic::IReadOnlyList_1<::System::Single>*))((::PBYTE)hIl2Cpp + IDGDNHILLDK_KCJFPDGKCNN_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::OLBFLFEIIEN* PJKIPBDNHLC(::MJDKJEIAABG* a1)
		{
			return ((::OLBFLFEIIEN*(*)(::PVOID, ::MJDKJEIAABG*))((::PBYTE)hIl2Cpp + IDGDNHILLDK_PJKIPBDNHLC_OFFSET))(this, a1);
		}

		::RPG::Client::B51Racing::EB51RacingResultState IGPMECPOJMO(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::RPG::Client::B51Racing::EB51RacingResultState(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + IDGDNHILLDK_IGPMECPOJMO_OFFSET))(this, a1, a2);
		}

		::System::Boolean ONEPBLBGLKO(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IDGDNHILLDK_ONEPBLBGLKO_OFFSET))(this, a1);
		}

		::System::UInt32 EFNHLJNEHDA(::System::Collections::Generic::IReadOnlyList_1<::GNEEDEDGCOI>* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::GNEEDEDGCOI>*))((::PBYTE)hIl2Cpp + IDGDNHILLDK_EFNHLJNEHDA_OFFSET))(this, a1);
		}

		::System::Void JGLEADLIBDC(::RPG::Client::B51Racing::B51RacingGameplayResultDialogViewModel* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::B51Racing::B51RacingGameplayResultDialogViewModel*, ::System::UInt32))((::PBYTE)hIl2Cpp + IDGDNHILLDK_JGLEADLIBDC_OFFSET))(this, a1, a2);
		}

		::System::Boolean MKEFIOJBKEJ(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IDGDNHILLDK_MKEFIOJBKEJ_OFFSET))(this, a1);
		}

		::System::Boolean JLNGFGOPEOF(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IDGDNHILLDK_JLNGFGOPEOF_OFFSET))(this, a1);
		}

	};
