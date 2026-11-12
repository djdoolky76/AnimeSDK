#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FDPALAEIHPB;
class KHPOKIKCOFO;
class OAFCCICMILM;
namespace Entitas { template <typename T> class IMatcher_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NIHILGIEANC_CKGEJIOPMED_OFFSET UNITYSDK_OFFSET(0x1DB2BBA0)
#define NIHILGIEANC_CKIDCIFCEOM_OFFSET UNITYSDK_OFFSET(0x1DB2D9A0)
#define NIHILGIEANC_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB29CA0)
#define NIHILGIEANC_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1DB29D10)
#define NIHILGIEANC_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1DB2C160)
#define NIHILGIEANC_ONHIT_OFFSET UNITYSDK_OFFSET(0x1DB2C280)

inline static constexpr unsigned int NIHILGIEANC_TypeDefinitionIndex = 43372;

	class NIHILGIEANC : public ::System::Object
	{
	public:
		::Entitas::IMatcher_1<::KHPOKIKCOFO*>* NNAGPBBJGAD; // 0x10
		::FDPALAEIHPB* MBKIEFPKECG; // 0x18
		::OAFCCICMILM* PDENFEFCAGN; // 0x20
		::System::Collections::Generic::List_1<::KHPOKIKCOFO*>* BLOMOEJJCIK; // 0x28
		::System::Boolean MJCAIPOIDEE; // 0x30
		::System::Boolean KAMEDHGHMEO; // 0x31
		::System::Void _ctor(::FDPALAEIHPB* a1, ::OAFCCICMILM* a2)
		{
			return ((::System::Void(*)(::PVOID, ::FDPALAEIHPB*, ::OAFCCICMILM*))((::PBYTE)hIl2Cpp + NIHILGIEANC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIHILGIEANC_EXECUTE_OFFSET))(this);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIHILGIEANC_INITIALIZE_OFFSET))(this);
		}

		::System::Void OnHit(::KHPOKIKCOFO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KHPOKIKCOFO*))((::PBYTE)hIl2Cpp + NIHILGIEANC_ONHIT_OFFSET))(this, a1);
		}

		::System::Void CKGEJIOPMED()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIHILGIEANC_CKGEJIOPMED_OFFSET))(this);
		}

		::System::Void CKIDCIFCEOM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIHILGIEANC_CKIDCIFCEOM_OFFSET))(this);
		}

	};
