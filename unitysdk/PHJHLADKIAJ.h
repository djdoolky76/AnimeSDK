#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
class BBDFGMBNDGD;
class GEGMKAEMMBC;
class KNKPLOGICFO;
namespace RPG::Client { class PrefabLoadMeta; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }

#define PHJHLADKIAJ_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xC2490D0)
#define PHJHLADKIAJ_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xC2491C0)
#define PHJHLADKIAJ_CTOR_OFFSET UNITYSDK_OFFSET(0xC249290)
#define PHJHLADKIAJ_FFOJEKGBGJO_OFFSET UNITYSDK_OFFSET(0xC248A30)
#define PHJHLADKIAJ_FOPDCOJAKKG_OFFSET UNITYSDK_OFFSET(0xC248FE0)
#define PHJHLADKIAJ_GAPKCICCGGM_OFFSET UNITYSDK_OFFSET(0xC248C10)
#define PHJHLADKIAJ_HDGDHIPKJJF_OFFSET UNITYSDK_OFFSET(0xC2484A0)
#define PHJHLADKIAJ_IIEGFDPFHCB_OFFSET UNITYSDK_OFFSET(0xC2485D0)
#define PHJHLADKIAJ_JCFABPPHCDJ_OFFSET UNITYSDK_OFFSET(0xC248560)
#define PHJHLADKIAJ_LHEJLCKMPMK_OFFSET UNITYSDK_OFFSET(0xC2488B0)
#define PHJHLADKIAJ_ODLHKMIAFAI_OFFSET UNITYSDK_OFFSET(0xC2483B0)
#define PHJHLADKIAJ__ONBIND_OFFSET UNITYSDK_OFFSET(0xC247ED0)

inline static constexpr unsigned int PHJHLADKIAJ_TypeDefinitionIndex = 72217;

	class PHJHLADKIAJ : public ::FMPCODLIOLG
	{
	public:
		::System::Collections::Generic::Queue_1<::GEGMKAEMMBC*>* CCPJFLJECCF; // 0x60
		::KNKPLOGICFO* GAAOODNCNEJ; // 0x68
		::RPG::Client::PrefabLoadMeta* KJMOEBKALPF; // 0x70
		::System::Collections::Generic::Queue_1<::BBDFGMBNDGD*>* OPIHGPHHBDB; // 0x78
		::System::Collections::Generic::Stack_1<::GEGMKAEMMBC*>* ACGCNLDGEBJ; // 0x80
		// static const ::System::Object KJOKKLHJNDD; // 0x0
		// static const ::System::Object JIJPGDHDJOK; // 0x0
		// static const ::System::Object KPJDILBCFBF; // 0x0
		// static const ::System::Object HCOLAPFKGJN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHJHLADKIAJ_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHJHLADKIAJ__ONBIND_OFFSET))(this);
		}

		::System::Void ODLHKMIAFAI(::GEGMKAEMMBC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GEGMKAEMMBC*))((::PBYTE)hIl2Cpp + PHJHLADKIAJ_ODLHKMIAFAI_OFFSET))(this, a1);
		}

		::System::Void HDGDHIPKJJF(::BBDFGMBNDGD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BBDFGMBNDGD*))((::PBYTE)hIl2Cpp + PHJHLADKIAJ_HDGDHIPKJJF_OFFSET))(this, a1);
		}

		::System::Void JCFABPPHCDJ(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PHJHLADKIAJ_JCFABPPHCDJ_OFFSET))(this, a1);
		}

		::System::Boolean IIEGFDPFHCB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PHJHLADKIAJ_IIEGFDPFHCB_OFFSET))(this);
		}

		::System::Void GAPKCICCGGM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHJHLADKIAJ_GAPKCICCGGM_OFFSET))(this);
		}

		::System::Void LHEJLCKMPMK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHJHLADKIAJ_LHEJLCKMPMK_OFFSET))(this);
		}

		::System::Void FFOJEKGBGJO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHJHLADKIAJ_FFOJEKGBGJO_OFFSET))(this);
		}

		::System::Void FOPDCOJAKKG(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PHJHLADKIAJ_FOPDCOJAKKG_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHJHLADKIAJ_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHJHLADKIAJ_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
