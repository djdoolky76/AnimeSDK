#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HLFHMKMJNPK.h"
#include "unitysdk/UnityEngine/Color.h"
class EMJIDLCDFMI;
class FDPALAEIHPB;
class HEAIEBHLCMJ;
class KHPOKIKCOFO;
class OHIGDGJLNJM;
class PLAGENLANML;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class MeshRenderer; }
namespace UnityEngine { class Transform; }

#define AIIBIJAKKKH_CCTOR_OFFSET UNITYSDK_OFFSET(0xEBA6E00)
#define AIIBIJAKKKH_COCCHMHOFIE_OFFSET UNITYSDK_OFFSET(0xEBA6650)
#define AIIBIJAKKKH_CTOR_OFFSET UNITYSDK_OFFSET(0xEBA5A80)
#define AIIBIJAKKKH_DHMJMEBEBNB_OFFSET UNITYSDK_OFFSET(0xEBA6990)
#define AIIBIJAKKKH_DJPEJOPFANL_OFFSET UNITYSDK_OFFSET(0xEBA5B10)
#define AIIBIJAKKKH_GCFBKFCAMJO_OFFSET UNITYSDK_OFFSET(0xEBA6C20)
#define AIIBIJAKKKH_GMFFJFCKHDA_OFFSET UNITYSDK_OFFSET(0xEBA6D20)
#define AIIBIJAKKKH_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0xEBA66C0)
#define AIIBIJAKKKH_KJMDJMBNCPE_OFFSET UNITYSDK_OFFSET(0xEBA67A0)
#define AIIBIJAKKKH_OBBGHDPPMHF_OFFSET UNITYSDK_OFFSET(0xEBA6140)

inline static constexpr unsigned int AIIBIJAKKKH_TypeDefinitionIndex = 75788;

	class AIIBIJAKKKH : public ::HLFHMKMJNPK
	{
	public:
		::EMJIDLCDFMI* CKJLAAOFGCC; // 0x18
		::System::Collections::Generic::List_1<::OHIGDGJLNJM*>* DGGAOHODICM; // 0x20
		::HEAIEBHLCMJ* MGBABGFLKHN; // 0x28
		::UnityEngine::Transform* CJLFBMEPOPA; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Transform*>* MBGGDLKCFDO; // 0x38
		static ::System::Int32* StaticGet_HPJODHFEFFC()
		{
			return (::System::Int32*)UnitySDK::FromName("", "AIIBIJAKKKH")->GetStaticField(0x13770);
		}

		static ::System::Int32* StaticGet_KMLBIOAMCOH()
		{
			return (::System::Int32*)UnitySDK::FromName("", "AIIBIJAKKKH")->GetStaticField(0x13774);
		}

		::System::Void _ctor(::FDPALAEIHPB* a1, ::EMJIDLCDFMI* a2, ::UnityEngine::Transform* a3)
		{
			return ((::System::Void(*)(::PVOID, ::FDPALAEIHPB*, ::EMJIDLCDFMI*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + AIIBIJAKKKH_CTOR_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AIIBIJAKKKH_CCTOR_OFFSET))();
		}

		::System::Void DJPEJOPFANL(::PLAGENLANML* a1, ::KHPOKIKCOFO* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::PLAGENLANML*, ::KHPOKIKCOFO*, ::System::String*))((::PBYTE)hIl2Cpp + AIIBIJAKKKH_DJPEJOPFANL_OFFSET))(this, a1, a2, a3);
		}

		::System::Void COCCHMHOFIE(::PLAGENLANML* a1, ::KHPOKIKCOFO* a2, ::System::String* a3, ::System::Action* a4)
		{
			return ((::System::Void(*)(::PVOID, ::PLAGENLANML*, ::KHPOKIKCOFO*, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + AIIBIJAKKKH_COCCHMHOFIE_OFFSET))(this, a1, a2, a3, a4);
		}

		::UnityEngine::Transform* OBBGHDPPMHF(::KHPOKIKCOFO* a1)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::KHPOKIKCOFO*))((::PBYTE)hIl2Cpp + AIIBIJAKKKH_OBBGHDPPMHF_OFFSET))(this, a1);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIIBIJAKKKH_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Void KJMDJMBNCPE(::KHPOKIKCOFO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KHPOKIKCOFO*))((::PBYTE)hIl2Cpp + AIIBIJAKKKH_KJMDJMBNCPE_OFFSET))(this, a1);
		}

		::System::Void DHMJMEBEBNB(::KHPOKIKCOFO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KHPOKIKCOFO*))((::PBYTE)hIl2Cpp + AIIBIJAKKKH_DHMJMEBEBNB_OFFSET))(this, a1);
		}

		::System::Void GCFBKFCAMJO(::UnityEngine::MeshRenderer* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MeshRenderer*, ::System::String*))((::PBYTE)hIl2Cpp + AIIBIJAKKKH_GCFBKFCAMJO_OFFSET))(this, a1, a2);
		}

		::System::Void GMFFJFCKHDA(::UnityEngine::MeshRenderer* a1, ::UnityEngine::Color a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MeshRenderer*, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + AIIBIJAKKKH_GMFFJFCKHDA_OFFSET))(this, a1, a2);
		}

	};
