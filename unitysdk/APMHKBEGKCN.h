#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CGJEMKCKIJG;
class IPBNPLCKABD;
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define APMHKBEGKCN_AKLIBDKFJAO_1_OFFSET UNITYSDK_OFFSET(0x17E21CD0)
#define APMHKBEGKCN_BEPMHFLBNIM_OFFSET UNITYSDK_OFFSET(0x17DFC7F0)
#define APMHKBEGKCN_BJANDJKKNCD_OFFSET UNITYSDK_OFFSET(0x17E21C50)
#define APMHKBEGKCN_CJALOKABMCG_OFFSET UNITYSDK_OFFSET(0x169D8A00)
#define APMHKBEGKCN_CPKOJFLPMLB_OFFSET UNITYSDK_OFFSET(0x17E21640)
#define APMHKBEGKCN_HHPMEEBLNGA_OFFSET UNITYSDK_OFFSET(0x169D8B80)
#define APMHKBEGKCN_JPOLBPCHLHK_OFFSET UNITYSDK_OFFSET(0x17E21BB0)
#define APMHKBEGKCN_OELADBPLLEM_OFFSET UNITYSDK_OFFSET(0x169D8AE0)
#define APMHKBEGKCN_OPKCNKKGENG_OFFSET UNITYSDK_OFFSET(0x169D8A90)
#define APMHKBEGKCN__CTOR_OFFSET UNITYSDK_OFFSET(0x17DFC600)

inline static constexpr unsigned int APMHKBEGKCN_TypeDefinitionIndex = 50283;

class APMHKBEGKCN : public ::System::Object
{
public:
	static ::APMHKBEGKCN** StaticGet_GKKEJJFFMOO()
	{
		return (::APMHKBEGKCN**)Il2CppClass::FromTypeDefinitionIndex(APMHKBEGKCN_TypeDefinitionIndex)->GetStaticField(0x4E0B0);
	}
	::System::Collections::Generic::List_1<::CGJEMKCKIJG*>* MJKONHDAIPN; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* DNICBJBLEAH; // 0x18
	::System::Action* BEAELIEHCFI; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Func_1<::CGJEMKCKIJG*>*>* GIKCGLDCELF; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::IPBNPLCKABD*>* BCAANLMEJPC; // 0x30
	::System::Int32 MLNKCNJEOMI; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APMHKBEGKCN__CTOR_OFFSET))(this);
	}

	::System::Int32 CPKOJFLPMLB(::System::String* OKGKPMGCDMJ)
	{
		return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + APMHKBEGKCN_CPKOJFLPMLB_OFFSET))(this, OKGKPMGCDMJ);
	}

	static ::System::Void JPOLBPCHLHK()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + APMHKBEGKCN_JPOLBPCHLHK_OFFSET))();
	}

	::CGJEMKCKIJG* AKLIBDKFJAO_1(::System::Int32 ABHBKFJKINO)
	{
		return ((::CGJEMKCKIJG*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + APMHKBEGKCN_AKLIBDKFJAO_1_OFFSET))(this, ABHBKFJKINO);
	}

	static ::System::Void BJANDJKKNCD()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + APMHKBEGKCN_BJANDJKKNCD_OFFSET))();
	}

	::System::Void BEPMHFLBNIM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APMHKBEGKCN_BEPMHFLBNIM_OFFSET))(this);
	}

	::IPBNPLCKABD* CJALOKABMCG(::System::Int32 ABHBKFJKINO)
	{
		return ((::IPBNPLCKABD*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + APMHKBEGKCN_CJALOKABMCG_OFFSET))(this, ABHBKFJKINO);
	}

	::System::Int32 OPKCNKKGENG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + APMHKBEGKCN_OPKCNKKGENG_OFFSET))(this);
	}

	static ::APMHKBEGKCN* OELADBPLLEM()
	{
		return ((::APMHKBEGKCN*(*)())((::PBYTE)hIl2Cpp + APMHKBEGKCN_OELADBPLLEM_OFFSET))();
	}

	::System::Void HHPMEEBLNGA(::System::Action* PCOILHEBANG)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + APMHKBEGKCN_HHPMEEBLNGA_OFFSET))(this, PCOILHEBANG);
	}
};
