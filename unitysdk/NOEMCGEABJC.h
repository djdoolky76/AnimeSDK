#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GGDMGJHGBAL;
class NHNLOIOFFAO;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Threading::Tasks { class Task; }
namespace System::Threading::Tasks { template <typename T> class Task_1; }

#define NOEMCGEABJC_EFCLLPFNPJC_OFFSET UNITYSDK_OFFSET(0xFD11070)
#define NOEMCGEABJC_FBCJBBOMBFP_OFFSET UNITYSDK_OFFSET(0xFD11360)
#define NOEMCGEABJC_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0xFD11650)
#define NOEMCGEABJC_GLBCJEIKLPK_OFFSET UNITYSDK_OFFSET(0xFD10D50)
#define NOEMCGEABJC_KMLPPBJKCED_OFFSET UNITYSDK_OFFSET(0xFD11260)
#define NOEMCGEABJC_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0xFD11740)
#define NOEMCGEABJC_MGNMOIICJOD_OFFSET UNITYSDK_OFFSET(0xFD11560)
#define NOEMCGEABJC_OLPELAOHFNP_OFFSET UNITYSDK_OFFSET(0xFD10E30)
#define NOEMCGEABJC__CTOR_OFFSET UNITYSDK_OFFSET(0xFD10D40)

inline static constexpr unsigned int NOEMCGEABJC_TypeDefinitionIndex = 41593;

class NOEMCGEABJC : public ::System::Object
{
public:
	::GGDMGJHGBAL* AJMOJMGIODC; // 0x10
	::NHNLOIOFFAO* AADLEEEFFHG; // 0x18

	::System::Void _ctor(::NHNLOIOFFAO* DNEBLPJCLFC, ::GGDMGJHGBAL* DOOJLCGFKNL)
	{
		return ((::System::Void(*)(::PVOID, ::NHNLOIOFFAO*, ::GGDMGJHGBAL*))((::PBYTE)hIl2Cpp + NOEMCGEABJC__CTOR_OFFSET))(this, DNEBLPJCLFC, DOOJLCGFKNL);
	}

	::System::Threading::Tasks::Task_1<::System::Collections::Generic::List_1<::System::String*>*>* GLBCJEIKLPK()
	{
		return ((::System::Threading::Tasks::Task_1<::System::Collections::Generic::List_1<::System::String*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NOEMCGEABJC_GLBCJEIKLPK_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::String*>* OLPELAOHFNP()
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NOEMCGEABJC_OLPELAOHFNP_OFFSET))(this);
	}

	::System::Threading::Tasks::Task* EFCLLPFNPJC(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* LJBPECKCCEA)
	{
		return ((::System::Threading::Tasks::Task*(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*))((::PBYTE)hIl2Cpp + NOEMCGEABJC_EFCLLPFNPJC_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void KMLPPBJKCED(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*))((::PBYTE)hIl2Cpp + NOEMCGEABJC_KMLPPBJKCED_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Threading::Tasks::Task* FBCJBBOMBFP(::System::String* MCOHLHMKLIP)
	{
		return ((::System::Threading::Tasks::Task*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NOEMCGEABJC_FBCJBBOMBFP_OFFSET))(this, MCOHLHMKLIP);
	}

	::System::Void MGNMOIICJOD(::System::String* MCOHLHMKLIP)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NOEMCGEABJC_MGNMOIICJOD_OFFSET))(this, MCOHLHMKLIP);
	}

	::System::Threading::Tasks::Task_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* FPMKEGMLNHG(::System::Collections::Generic::HashSet_1<::System::String*>* DCKLNFBPDKN)
	{
		return ((::System::Threading::Tasks::Task_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::String*>*))((::PBYTE)hIl2Cpp + NOEMCGEABJC_FPMKEGMLNHG_OFFSET))(this, DCKLNFBPDKN);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* LNFENFDLMIG(::System::Collections::Generic::HashSet_1<::System::String*>* DCKLNFBPDKN)
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::String*>*))((::PBYTE)hIl2Cpp + NOEMCGEABJC_LNFENFDLMIG_OFFSET))(this, DCKLNFBPDKN);
	}
};
