#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HKENHAIMOCH;
class JHGAJMAOPJE;
namespace RPG::GameCore { class RuntimeGroupInfo; }
namespace System::Collections::Generic { template <typename T1, typename T2> class SortedList_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HKENHAIMOCH_ADILDHCDJDJ_OFFSET UNITYSDK_OFFSET(0x15D36460)
#define HKENHAIMOCH_CCTOR_OFFSET UNITYSDK_OFFSET(0x15D36530)
#define HKENHAIMOCH_CTOR_OFFSET UNITYSDK_OFFSET(0x15D363C0)
#define HKENHAIMOCH_DEPLIJCBDMG_OFFSET UNITYSDK_OFFSET(0x15D364C0)
#define HKENHAIMOCH_GHBGHGPMAGD_OFFSET UNITYSDK_OFFSET(0x15D363D0)
#define HKENHAIMOCH_MFCNJKGAELC_OFFSET UNITYSDK_OFFSET(0x15D34170)

inline static constexpr unsigned int HKENHAIMOCH_TypeDefinitionIndex = 64222;

	class HKENHAIMOCH : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::JHGAJMAOPJE*>* AFMBJMGJOCG; // 0x10
		static ::System::UInt32* StaticGet_LDBOLICCMOC()
		{
			return (::System::UInt32*)UnitySDK::FromName("", "HKENHAIMOCH")->GetStaticField(0x7990);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKENHAIMOCH_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HKENHAIMOCH_CCTOR_OFFSET))();
		}

		static ::HKENHAIMOCH* MFCNJKGAELC(::System::Collections::Generic::SortedList_2<::System::UInt32, ::RPG::GameCore::RuntimeGroupInfo*>* a1)
		{
			return ((::HKENHAIMOCH*(*)(::System::Collections::Generic::SortedList_2<::System::UInt32, ::RPG::GameCore::RuntimeGroupInfo*>*))((::PBYTE)hIl2Cpp + HKENHAIMOCH_MFCNJKGAELC_OFFSET))(a1);
		}

		static ::System::UInt32 ADILDHCDJDJ()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + HKENHAIMOCH_ADILDHCDJDJ_OFFSET))();
		}

		static ::System::Void DEPLIJCBDMG()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HKENHAIMOCH_DEPLIJCBDMG_OFFSET))();
		}

		static ::System::Boolean GHBGHGPMAGD(::RPG::GameCore::RuntimeGroupInfo* a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::RuntimeGroupInfo*, ::System::UInt32))((::PBYTE)hIl2Cpp + HKENHAIMOCH_GHBGHGPMAGD_OFFSET))(a1, a2);
		}

	};
