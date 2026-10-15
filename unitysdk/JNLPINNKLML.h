#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KNFCEJEJINK.h"
class DLECIKAMKEG;
class PEBLIEJAJPK;
namespace RPG::Client::Prop { class DuelChimeraProxy; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JNLPINNKLML_CTOR_OFFSET UNITYSDK_OFFSET(0xB28C3B0)
#define JNLPINNKLML_HKIJBAPILEC_OFFSET UNITYSDK_OFFSET(0xB28C420)
#define JNLPINNKLML_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xB28DD00)
#define JNLPINNKLML_KIIECEPAGJB_OFFSET UNITYSDK_OFFSET(0xB28C780)
#define JNLPINNKLML_MBNGKBHBNPP_OFFSET UNITYSDK_OFFSET(0xB28D240)
#define JNLPINNKLML_MGFLFCHMGPA_OFFSET UNITYSDK_OFFSET(0xB28C3C0)

	class JNLPINNKLML : public ::KNFCEJEJINK
	{
	public:
		::DLECIKAMKEG* EEFMDEHLLFI; // 0x18
		::PEBLIEJAJPK* MKKLHFCCCNF; // 0x20
		::System::Void _ctor(::PEBLIEJAJPK* a1, ::DLECIKAMKEG* a2)
		{
			return ((::System::Void(*)(::PVOID, ::PEBLIEJAJPK*, ::DLECIKAMKEG*))((::PBYTE)hIl2Cpp + JNLPINNKLML_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void MGFLFCHMGPA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNLPINNKLML_MGFLFCHMGPA_OFFSET))(this);
		}

		::System::Void HKIJBAPILEC(::PEBLIEJAJPK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PEBLIEJAJPK*))((::PBYTE)hIl2Cpp + JNLPINNKLML_HKIJBAPILEC_OFFSET))(this, a1);
		}

		::System::Void KIIECEPAGJB(::System::Collections::Generic::List_1<::RPG::Client::Prop::DuelChimeraProxy*>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::Prop::DuelChimeraProxy*>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + JNLPINNKLML_KIIECEPAGJB_OFFSET))(this, a1, a2, a3);
		}

		::System::Void MBNGKBHBNPP(::System::Collections::Generic::List_1<::RPG::Client::Prop::DuelChimeraProxy*>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::Prop::DuelChimeraProxy*>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + JNLPINNKLML_MBNGKBHBNPP_OFFSET))(this, a1, a2, a3);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JNLPINNKLML_JLANKNHFKCN_OFFSET))(this, a1);
		}

	};
