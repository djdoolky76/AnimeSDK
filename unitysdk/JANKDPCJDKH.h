#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JANKDPCJDKH_KEOGIKIPECH;
namespace System { class Action; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JANKDPCJDKH_AABALFLGKPE_OFFSET UNITYSDK_OFFSET(0x1CFBB1B0)
#define JANKDPCJDKH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CFD6E80)
#define JANKDPCJDKH_CTOR_OFFSET UNITYSDK_OFFSET(0x1CFD6E70)
#define JANKDPCJDKH_EMOLMLBAMDH_OFFSET UNITYSDK_OFFSET(0x1CFD6E20)
#define JANKDPCJDKH_FNPMJDIAOCM_OFFSET UNITYSDK_OFFSET(0x1CF35940)
#define JANKDPCJDKH_JNNMHAJLFJB_OFFSET UNITYSDK_OFFSET(0x1CF558B0)
#define JANKDPCJDKH_KNDDJKPMOCO_OFFSET UNITYSDK_OFFSET(0x1CF515E0)

inline static constexpr unsigned int JANKDPCJDKH_TypeDefinitionIndex = 13250;

	class JANKDPCJDKH : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet_GAGGHJBPEEA()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "JANKDPCJDKH")->GetStaticField(0x8460);
		}

		static ::System::Boolean* StaticGet_PHMOENAMGHA()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "JANKDPCJDKH")->GetStaticField(0x8461);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JANKDPCJDKH_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JANKDPCJDKH_CCTOR_OFFSET))();
		}

		static ::System::Void FNPMJDIAOCM()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JANKDPCJDKH_FNPMJDIAOCM_OFFSET))();
		}

		static ::System::Void KNDDJKPMOCO()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JANKDPCJDKH_KNDDJKPMOCO_OFFSET))();
		}

		static ::System::Collections::Generic::List_1<::System::Action*>* JNNMHAJLFJB()
		{
			return ((::System::Collections::Generic::List_1<::System::Action*>*(*)())((::PBYTE)hIl2Cpp + JANKDPCJDKH_JNNMHAJLFJB_OFFSET))();
		}

		static ::System::Void AABALFLGKPE()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JANKDPCJDKH_AABALFLGKPE_OFFSET))();
		}

		static ::System::Collections::IEnumerator* EMOLMLBAMDH(::JANKDPCJDKH_KEOGIKIPECH* a1, ::System::Func_1<::System::Boolean>* a2, ::System::Action* a3)
		{
			return ((::System::Collections::IEnumerator*(*)(::JANKDPCJDKH_KEOGIKIPECH*, ::System::Func_1<::System::Boolean>*, ::System::Action*))((::PBYTE)hIl2Cpp + JANKDPCJDKH_EMOLMLBAMDH_OFFSET))(a1, a2, a3);
		}

	};
