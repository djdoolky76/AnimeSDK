#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Component; }

#define IKHKAONICLI_CHGJNDEILIF_OFFSET UNITYSDK_OFFSET(0x1648D760)
#define IKHKAONICLI_CTOR_OFFSET UNITYSDK_OFFSET(0x1648D3A0)
#define IKHKAONICLI_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0x1648D4F0)
#define IKHKAONICLI_KAOIHHCJFDO_OFFSET UNITYSDK_OFFSET(0x1648D400)
#define IKHKAONICLI_LGGGOMPGBBA_OFFSET UNITYSDK_OFFSET(0x1648D600)
#define IKHKAONICLI_OBICHPFIBJM_OFFSET UNITYSDK_OFFSET(0x1648D9E0)
#define IKHKAONICLI_PBGLIBBBGBA_OFFSET UNITYSDK_OFFSET(0x1648D680)
#define IKHKAONICLI_PHNIPINIDNO_OFFSET UNITYSDK_OFFSET(0x1648D7F0)

	class IKHKAONICLI : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::Component*>* NKENHJHADAO; // 0x10
		::System::Collections::Generic::List_1<::UnityEngine::Component*>* LHFPNKOJLGB; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKHKAONICLI_CTOR_OFFSET))(this);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKHKAONICLI_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Void PBGLIBBBGBA(::UnityEngine::Component* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Component*))((::PBYTE)hIl2Cpp + IKHKAONICLI_PBGLIBBBGBA_OFFSET))(this, a1);
		}

		::System::Void CHGJNDEILIF(::UnityEngine::Component* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Component*))((::PBYTE)hIl2Cpp + IKHKAONICLI_CHGJNDEILIF_OFFSET))(this, a1);
		}

		::System::Void KAOIHHCJFDO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKHKAONICLI_KAOIHHCJFDO_OFFSET))(this);
		}

		::System::Void LGGGOMPGBBA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKHKAONICLI_LGGGOMPGBBA_OFFSET))(this);
		}

		::System::Void PHNIPINIDNO(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IKHKAONICLI_PHNIPINIDNO_OFFSET))(this, a1);
		}

		::System::Void OBICHPFIBJM(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IKHKAONICLI_OBICHPFIBJM_OFFSET))(this, a1);
		}

	};
