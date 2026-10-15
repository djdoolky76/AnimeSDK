#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HLFHMKMJNPK.h"
class EMJIDLCDFMI;
class KHPOKIKCOFO;
class OHIGDGJLNJM;
class PLAGENLANML;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define HBMDGCFBING_COCCHMHOFIE_OFFSET UNITYSDK_OFFSET(0x15C03400)
#define HBMDGCFBING_CTOR_OFFSET UNITYSDK_OFFSET(0x15C032E0)
#define HBMDGCFBING_DJPEJOPFANL_OFFSET UNITYSDK_OFFSET(0x15C03580)
#define HBMDGCFBING_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0x15C033A0)
#define HBMDGCFBING_KJMDJMBNCPE_OFFSET UNITYSDK_OFFSET(0x15C03BA0)

inline static constexpr unsigned int HBMDGCFBING_TypeDefinitionIndex = 76493;

	class HBMDGCFBING : public ::HLFHMKMJNPK
	{
	public:
		::EMJIDLCDFMI* CKJLAAOFGCC; // 0x18
		::System::Collections::Generic::List_1<::OHIGDGJLNJM*>* DGGAOHODICM; // 0x20
		::UnityEngine::Transform* CJLFBMEPOPA; // 0x28
		::System::Void _ctor(::PLAGENLANML* a1, ::EMJIDLCDFMI* a2, ::UnityEngine::Transform* a3)
		{
			return ((::System::Void(*)(::PVOID, ::PLAGENLANML*, ::EMJIDLCDFMI*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + HBMDGCFBING_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBMDGCFBING_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Void COCCHMHOFIE(::PLAGENLANML* a1, ::KHPOKIKCOFO* a2, ::System::String* a3, ::System::Action* a4)
		{
			return ((::System::Void(*)(::PVOID, ::PLAGENLANML*, ::KHPOKIKCOFO*, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + HBMDGCFBING_COCCHMHOFIE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void DJPEJOPFANL(::PLAGENLANML* a1, ::KHPOKIKCOFO* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::PLAGENLANML*, ::KHPOKIKCOFO*, ::System::String*))((::PBYTE)hIl2Cpp + HBMDGCFBING_DJPEJOPFANL_OFFSET))(this, a1, a2, a3);
		}

		::System::Void KJMDJMBNCPE(::KHPOKIKCOFO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KHPOKIKCOFO*))((::PBYTE)hIl2Cpp + HBMDGCFBING_KJMDJMBNCPE_OFFSET))(this, a1);
		}

	};
