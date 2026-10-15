#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/IMMMHLKHCCO_EEFNNOGOKAL.h"
class BAJEFKOPOPL;
class CENEFPOMFKG;
class MIELDKPBNMB;
namespace RPG::GameCore { class JsonEnum; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IMMMHLKHCCO_CLEAR_OFFSET UNITYSDK_OFFSET(0x164DFC30)
#define IMMMHLKHCCO_CTOR_OFFSET UNITYSDK_OFFSET(0x164E0770)
#define IMMMHLKHCCO_DAPPBDOIOKG_OFFSET UNITYSDK_OFFSET(0x164E0670)
#define IMMMHLKHCCO_HHFDAIJIIJN_OFFSET UNITYSDK_OFFSET(0x164E05D0)
#define IMMMHLKHCCO_LEKLGJIKCFM_OFFSET UNITYSDK_OFFSET(0x164DFE00)
#define IMMMHLKHCCO_OKDDNAKMLBB_OFFSET UNITYSDK_OFFSET(0x164DFFE0)
#define IMMMHLKHCCO_PBPFJJOOGME_OFFSET UNITYSDK_OFFSET(0x164E02F0)
#define IMMMHLKHCCO_PEMDJJNOBAD_OFFSET UNITYSDK_OFFSET(0x164E00B0)
#define IMMMHLKHCCO_PHACOHCMNOA_OFFSET UNITYSDK_OFFSET(0x164E01A0)

inline static constexpr unsigned int IMMMHLKHCCO_TypeDefinitionIndex = 54241;

	class IMMMHLKHCCO : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* NEDAKDFAHPA; // 0x10
		::BAJEFKOPOPL* HKAGAPCAJDE; // 0x18
		::System::Boolean AIGLEHJMEDH; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMMMHLKHCCO_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMMMHLKHCCO_CLEAR_OFFSET))(this);
		}

		::System::Boolean OKDDNAKMLBB(::CENEFPOMFKG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CENEFPOMFKG*))((::PBYTE)hIl2Cpp + IMMMHLKHCCO_OKDDNAKMLBB_OFFSET))(this, a1);
		}

		::System::Boolean PEMDJJNOBAD(::RPG::GameCore::JsonEnum* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::JsonEnum*))((::PBYTE)hIl2Cpp + IMMMHLKHCCO_PEMDJJNOBAD_OFFSET))(this, a1);
		}

		::System::Void PHACOHCMNOA(::MIELDKPBNMB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MIELDKPBNMB*))((::PBYTE)hIl2Cpp + IMMMHLKHCCO_PHACOHCMNOA_OFFSET))(this, a1);
		}

		::System::Void PBPFJJOOGME(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IMMMHLKHCCO_PBPFJJOOGME_OFFSET))(this, a1);
		}

		::IMMMHLKHCCO_EEFNNOGOKAL HHFDAIJIIJN()
		{
			return ((::IMMMHLKHCCO_EEFNNOGOKAL(*)(::PVOID))((::PBYTE)hIl2Cpp + IMMMHLKHCCO_HHFDAIJIIJN_OFFSET))(this);
		}

		::CENEFPOMFKG* DAPPBDOIOKG()
		{
			return ((::CENEFPOMFKG*(*)(::PVOID))((::PBYTE)hIl2Cpp + IMMMHLKHCCO_DAPPBDOIOKG_OFFSET))(this);
		}

		::System::Void LEKLGJIKCFM(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IMMMHLKHCCO_LEKLGJIKCFM_OFFSET))(this, a1);
		}

	};
