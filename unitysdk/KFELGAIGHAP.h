#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BNBOAMEBAOE.h"
#include "unitysdk/RPG/GameCore/TaskState.h"
class GELIALJDFBL;
class HBIJEDKIDDN;
class KFELGAIGHAP;
namespace RPG::GameCore { class SequenceConfig; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define KFELGAIGHAP_CIADCOCBJDB_OFFSET UNITYSDK_OFFSET(0xB399760)
#define KFELGAIGHAP_CTOR_1_OFFSET UNITYSDK_OFFSET(0xB3956A0)
#define KFELGAIGHAP_CTOR_OFFSET UNITYSDK_OFFSET(0xB397F60)
#define KFELGAIGHAP_DEAIODAMELG_OFFSET UNITYSDK_OFFSET(0xB399190)
#define KFELGAIGHAP_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB397FC0)
#define KFELGAIGHAP_FADEIFNLDDM_OFFSET UNITYSDK_OFFSET(0xB399C00)
#define KFELGAIGHAP_GET_TASKCONTEXT_OFFSET UNITYSDK_OFFSET(0xB399BE0)
#define KFELGAIGHAP_GGFAFBMDICN_OFFSET UNITYSDK_OFFSET(0xB399970)
#define KFELGAIGHAP_HHNAHAEAHCK_OFFSET UNITYSDK_OFFSET(0xB3998F0)
#define KFELGAIGHAP_IDDKILJLIGA_OFFSET UNITYSDK_OFFSET(0xB399270)
#define KFELGAIGHAP_JDHDNAFAKCN_OFFSET UNITYSDK_OFFSET(0xB398100)
#define KFELGAIGHAP_JKKLFGGCHGB_OFFSET UNITYSDK_OFFSET(0xB398C30)
#define KFELGAIGHAP_JOKKIBJNNEB_OFFSET UNITYSDK_OFFSET(0xB3997A0)
#define KFELGAIGHAP_KBIELBFJANO_OFFSET UNITYSDK_OFFSET(0xB398BE0)
#define KFELGAIGHAP_LHJDBDIPGJM_OFFSET UNITYSDK_OFFSET(0xB399B70)
#define KFELGAIGHAP_MGJIFCCCOJK_OFFSET UNITYSDK_OFFSET(0xB399020)
#define KFELGAIGHAP_NFMCLJCNAIK_OFFSET UNITYSDK_OFFSET(0xB399100)
#define KFELGAIGHAP_NOAEDJIMAEI_OFFSET UNITYSDK_OFFSET(0xB398920)
#define KFELGAIGHAP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB3961F0)
#define KFELGAIGHAP_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB395A90)
#define KFELGAIGHAP_SET_TASKCONTEXT_OFFSET UNITYSDK_OFFSET(0xB399BF0)
#define KFELGAIGHAP_TICK_OFFSET UNITYSDK_OFFSET(0xB395F80)

inline static constexpr unsigned int KFELGAIGHAP_TypeDefinitionIndex = 54769;

	class KFELGAIGHAP : public ::BNBOAMEBAOE
	{
	public:
		::RPG::GameCore::TaskContext* _TaskContext_k__BackingField; // 0x18
		::Il2CppArray<::GELIALJDFBL*>* ECMFFNPIHGD; // 0x20
		::System::Int32 FLBGELFEBCK; // 0x28
		::System::Boolean BNIMJJNOLAI; // 0x2C
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SequenceConfig* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SequenceConfig*))((::PBYTE)hIl2Cpp + KFELGAIGHAP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::TaskConfig*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::TaskConfig*>*))((::PBYTE)hIl2Cpp + KFELGAIGHAP_CTOR_1_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFELGAIGHAP_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFELGAIGHAP_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFELGAIGHAP_ONTASKRESET_OFFSET))(this);
		}

		::System::Void KBIELBFJANO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFELGAIGHAP_KBIELBFJANO_OFFSET))(this);
		}

		::GELIALJDFBL* JKKLFGGCHGB()
		{
			return ((::GELIALJDFBL*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFELGAIGHAP_JKKLFGGCHGB_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KFELGAIGHAP_TICK_OFFSET))(this, a1);
		}

		::System::Type* NFMCLJCNAIK()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFELGAIGHAP_NFMCLJCNAIK_OFFSET))(this);
		}

		::System::Void IDDKILJLIGA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFELGAIGHAP_IDDKILJLIGA_OFFSET))(this);
		}

		::RPG::GameCore::TaskContext* CIADCOCBJDB()
		{
			return ((::RPG::GameCore::TaskContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFELGAIGHAP_CIADCOCBJDB_OFFSET))(this);
		}

		::HBIJEDKIDDN* JOKKIBJNNEB(::GELIALJDFBL* a1)
		{
			return ((::HBIJEDKIDDN*(*)(::PVOID, ::GELIALJDFBL*))((::PBYTE)hIl2Cpp + KFELGAIGHAP_JOKKIBJNNEB_OFFSET))(this, a1);
		}

		::GELIALJDFBL* HHNAHAEAHCK()
		{
			return ((::GELIALJDFBL*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFELGAIGHAP_HHNAHAEAHCK_OFFSET))(this);
		}

		::RPG::GameCore::TaskState JDHDNAFAKCN(::System::Single a1)
		{
			return ((::RPG::GameCore::TaskState(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KFELGAIGHAP_JDHDNAFAKCN_OFFSET))(this, a1);
		}

		::System::Boolean MGJIFCCCOJK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KFELGAIGHAP_MGJIFCCCOJK_OFFSET))(this);
		}

		::System::Void NOAEDJIMAEI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFELGAIGHAP_NOAEDJIMAEI_OFFSET))(this);
		}

		::System::Void GGFAFBMDICN(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KFELGAIGHAP_GGFAFBMDICN_OFFSET))(this, a1);
		}

		static ::System::Int32 LHJDBDIPGJM(::KFELGAIGHAP* a1, ::KFELGAIGHAP* a2)
		{
			return ((::System::Int32(*)(::KFELGAIGHAP*, ::KFELGAIGHAP*))((::PBYTE)hIl2Cpp + KFELGAIGHAP_LHJDBDIPGJM_OFFSET))(a1, a2);
		}

		::RPG::GameCore::TaskContext* get_TaskContext()
		{
			return ((::RPG::GameCore::TaskContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFELGAIGHAP_GET_TASKCONTEXT_OFFSET))(this);
		}

		::System::Void set_TaskContext(::RPG::GameCore::TaskContext* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + KFELGAIGHAP_SET_TASKCONTEXT_OFFSET))(this, a1);
		}

		::System::Int32 DEAIODAMELG()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KFELGAIGHAP_DEAIODAMELG_OFFSET))(this);
		}

		::System::Collections::Generic::IList_1<::GELIALJDFBL*>* FADEIFNLDDM()
		{
			return ((::System::Collections::Generic::IList_1<::GELIALJDFBL*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFELGAIGHAP_FADEIFNLDDM_OFFSET))(this);
		}

	};
