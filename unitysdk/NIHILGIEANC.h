#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FDPALAEIHPB;
class KHPOKIKCOFO;
class OAFCCICMILM;
namespace Entitas { template <typename T> class IMatcher_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NIHILGIEANC_CKGEJIOPMED_OFFSET UNITYSDK_OFFSET(0x1C969DD0)
#define NIHILGIEANC_CKIDCIFCEOM_OFFSET UNITYSDK_OFFSET(0x1C96BBD0)
#define NIHILGIEANC_CTOR_OFFSET UNITYSDK_OFFSET(0x1C967ED0)
#define NIHILGIEANC_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1C967F40)
#define NIHILGIEANC_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1C96A390)
#define NIHILGIEANC_ONHIT_OFFSET UNITYSDK_OFFSET(0x1C96A4B0)

inline static constexpr unsigned int NIHILGIEANC_TypeDefinitionIndex = 42397;

	class NIHILGIEANC : public ::System::Object
	{
	public:
		::FDPALAEIHPB* MBKIEFPKECG; // 0x10
		::OAFCCICMILM* PDENFEFCAGN; // 0x18
		::System::Collections::Generic::List_1<::KHPOKIKCOFO*>* BLOMOEJJCIK; // 0x20
		::Entitas::IMatcher_1<::KHPOKIKCOFO*>* NNAGPBBJGAD; // 0x28
		::System::Boolean KAMEDHGHMEO; // 0x30
		::System::Boolean MJCAIPOIDEE; // 0x31
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
