#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class BBOFEHOPCEC;
class BMHGFJLDCDO;
class FHLBIPIKFEJ;
class GELIALJDFBL;
namespace RPG::GameCore { class AIVariable; }
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class STTaskConfig; }
namespace RPG::GameCore { class StateTreeStateBaseConfig; }
namespace RPG::GameCore { class StateTreeTransitionConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FHLBIPIKFEJ_AIKBNOMDKAO_OFFSET UNITYSDK_OFFSET(0x15776FE0)
#define FHLBIPIKFEJ_BLNCFDKFHCO_OFFSET UNITYSDK_OFFSET(0x157777D0)
#define FHLBIPIKFEJ_CTOR_OFFSET UNITYSDK_OFFSET(0x15777F10)
#define FHLBIPIKFEJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15775920)
#define FHLBIPIKFEJ_ECIJJGIHGNJ_OFFSET UNITYSDK_OFFSET(0x15777790)
#define FHLBIPIKFEJ_EONPIKKPLLA_OFFSET UNITYSDK_OFFSET(0x157775A0)
#define FHLBIPIKFEJ_GAHIJOOEMFF_OFFSET UNITYSDK_OFFSET(0x157765B0)
#define FHLBIPIKFEJ_GECMMLMFJHO_OFFSET UNITYSDK_OFFSET(0x15777470)
#define FHLBIPIKFEJ_GJBOGLBHNME_OFFSET UNITYSDK_OFFSET(0x15777560)
#define FHLBIPIKFEJ_GKCGGHOBKAO_OFFSET UNITYSDK_OFFSET(0x15775EF0)
#define FHLBIPIKFEJ_HMONCHDAHIO_OFFSET UNITYSDK_OFFSET(0x15776290)
#define FHLBIPIKFEJ_HPCNMNHCJGF_OFFSET UNITYSDK_OFFSET(0x15777F00)
#define FHLBIPIKFEJ_IGEJDHLLLBG_OFFSET UNITYSDK_OFFSET(0x15777D20)
#define FHLBIPIKFEJ_JAENAEMJIOC_OFFSET UNITYSDK_OFFSET(0x157768F0)
#define FHLBIPIKFEJ_JBGEPANIEHJ_OFFSET UNITYSDK_OFFSET(0x15777230)
#define FHLBIPIKFEJ_JKCIKLEIAHO_OFFSET UNITYSDK_OFFSET(0x15777EE0)
#define FHLBIPIKFEJ_KHOCDMLJIAJ_OFFSET UNITYSDK_OFFSET(0x157760C0)
#define FHLBIPIKFEJ_LBHFJFNFHMP_OFFSET UNITYSDK_OFFSET(0x157775F0)
#define FHLBIPIKFEJ_LCMIDBBBOGG_OFFSET UNITYSDK_OFFSET(0x15777E50)
#define FHLBIPIKFEJ_LHKAIFBMDFO_OFFSET UNITYSDK_OFFSET(0x157771B0)
#define FHLBIPIKFEJ_LLFKCLGGENH_OFFSET UNITYSDK_OFFSET(0x15775E10)
#define FHLBIPIKFEJ_LNDJJFIKDKH_OFFSET UNITYSDK_OFFSET(0x157779C0)
#define FHLBIPIKFEJ_LNKFDPNJMBC_OFFSET UNITYSDK_OFFSET(0x15777B80)
#define FHLBIPIKFEJ_MCGLFLAMOON_OFFSET UNITYSDK_OFFSET(0x15777640)
#define FHLBIPIKFEJ_MLMGEFIOION_OFFSET UNITYSDK_OFFSET(0x15777ED0)
#define FHLBIPIKFEJ_NFANNGGMHAI_OFFSET UNITYSDK_OFFSET(0x157759D0)
#define FHLBIPIKFEJ_OBAOGFHPPFC_OFFSET UNITYSDK_OFFSET(0x15776CB0)
#define FHLBIPIKFEJ_ONIPLEMHAME_OFFSET UNITYSDK_OFFSET(0x15777810)
#define FHLBIPIKFEJ_PBDNAIDEIPK_OFFSET UNITYSDK_OFFSET(0x157773D0)
#define FHLBIPIKFEJ_PKIGEGFNMDL_OFFSET UNITYSDK_OFFSET(0x15777EF0)

inline static constexpr unsigned int FHLBIPIKFEJ_TypeDefinitionIndex = 53638;

	class FHLBIPIKFEJ : public ::System::Object
	{
	public:
		::GELIALJDFBL* PPDIOBBDINN; // 0x10
		::System::Collections::Generic::List_1<::GELIALJDFBL*>* IFMDBDJCCCI; // 0x18
		::System::String* GIDAEFPOGHI; // 0x20
		::BBOFEHOPCEC* HDMEPPFFIDK; // 0x28
		::System::Collections::Generic::List_1<::BMHGFJLDCDO*>* APNODHKMMOI; // 0x30
		::System::Collections::Generic::List_1<::FHLBIPIKFEJ*>* CBMJMBHHHJO; // 0x38
		::FHLBIPIKFEJ* CFJGFJOJEBG; // 0x40
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x48
		::System::Int32 ILBBFEMHLKA; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHLBIPIKFEJ_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHLBIPIKFEJ_DISPOSE_OFFSET))(this);
		}

		::System::Void NFANNGGMHAI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHLBIPIKFEJ_NFANNGGMHAI_OFFSET))(this);
		}

		::System::Void LLFKCLGGENH(::RPG::GameCore::PredicateConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PredicateConfig*))((::PBYTE)hIl2Cpp + FHLBIPIKFEJ_LLFKCLGGENH_OFFSET))(this, a1);
		}

		::System::Void GKCGGHOBKAO(::Il2CppArray<::RPG::GameCore::STTaskConfig*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::STTaskConfig*>*))((::PBYTE)hIl2Cpp + FHLBIPIKFEJ_GKCGGHOBKAO_OFFSET))(this, a1);
		}

		::System::Void KHOCDMLJIAJ(::Il2CppArray<::RPG::GameCore::StateTreeTransitionConfig*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::StateTreeTransitionConfig*>*))((::PBYTE)hIl2Cpp + FHLBIPIKFEJ_KHOCDMLJIAJ_OFFSET))(this, a1);
		}

		::System::Void HMONCHDAHIO(::Il2CppArray<::RPG::GameCore::StateTreeStateBaseConfig*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::StateTreeStateBaseConfig*>*))((::PBYTE)hIl2Cpp + FHLBIPIKFEJ_HMONCHDAHIO_OFFSET))(this, a1);
		}

		::System::Void GAHIJOOEMFF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHLBIPIKFEJ_GAHIJOOEMFF_OFFSET))(this);
		}

		::RPG::GameCore::TaskState JAENAEMJIOC(::System::Single a1)
		{
			return ((::RPG::GameCore::TaskState(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FHLBIPIKFEJ_JAENAEMJIOC_OFFSET))(this, a1);
		}

		::System::Void OBAOGFHPPFC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHLBIPIKFEJ_OBAOGFHPPFC_OFFSET))(this);
		}

		::System::Void AIKBNOMDKAO(::BBOFEHOPCEC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BBOFEHOPCEC*))((::PBYTE)hIl2Cpp + FHLBIPIKFEJ_AIKBNOMDKAO_OFFSET))(this, a1);
		}

		::System::Boolean LHKAIFBMDFO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FHLBIPIKFEJ_LHKAIFBMDFO_OFFSET))(this);
		}

		::FHLBIPIKFEJ* JBGEPANIEHJ()
		{
			return ((::FHLBIPIKFEJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHLBIPIKFEJ_JBGEPANIEHJ_OFFSET))(this);
		}

		::FHLBIPIKFEJ* PBDNAIDEIPK()
		{
			return ((::FHLBIPIKFEJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHLBIPIKFEJ_PBDNAIDEIPK_OFFSET))(this);
		}

		::FHLBIPIKFEJ* GECMMLMFJHO()
		{
			return ((::FHLBIPIKFEJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHLBIPIKFEJ_GECMMLMFJHO_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::BMHGFJLDCDO*>* GJBOGLBHNME()
		{
			return ((::System::Collections::Generic::List_1<::BMHGFJLDCDO*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHLBIPIKFEJ_GJBOGLBHNME_OFFSET))(this);
		}

		::System::Int32 EONPIKKPLLA()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FHLBIPIKFEJ_EONPIKKPLLA_OFFSET))(this);
		}

		::System::Int32 LBHFJFNFHMP()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FHLBIPIKFEJ_LBHFJFNFHMP_OFFSET))(this);
		}

		::RPG::GameCore::TaskState MCGLFLAMOON()
		{
			return ((::RPG::GameCore::TaskState(*)(::PVOID))((::PBYTE)hIl2Cpp + FHLBIPIKFEJ_MCGLFLAMOON_OFFSET))(this);
		}

		::System::String* ECIJJGIHGNJ()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHLBIPIKFEJ_ECIJJGIHGNJ_OFFSET))(this);
		}

		::System::String* BLNCFDKFHCO()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHLBIPIKFEJ_BLNCFDKFHCO_OFFSET))(this);
		}

		::System::Void ONIPLEMHAME(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + FHLBIPIKFEJ_ONIPLEMHAME_OFFSET))(this, a1, a2);
		}

		::System::Void LNDJJFIKDKH(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + FHLBIPIKFEJ_LNDJJFIKDKH_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::AIVariable* LNKFDPNJMBC(::System::String* a1)
		{
			return ((::RPG::GameCore::AIVariable*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FHLBIPIKFEJ_LNKFDPNJMBC_OFFSET))(this, a1);
		}

		::System::Boolean IGEJDHLLLBG(::System::String* a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + FHLBIPIKFEJ_IGEJDHLLLBG_OFFSET))(this, a1, a2);
		}

		::System::Boolean LCMIDBBBOGG(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FHLBIPIKFEJ_LCMIDBBBOGG_OFFSET))(this, a1);
		}

		::System::String* MLMGEFIOION()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHLBIPIKFEJ_MLMGEFIOION_OFFSET))(this);
		}

		::FHLBIPIKFEJ* JKCIKLEIAHO()
		{
			return ((::FHLBIPIKFEJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHLBIPIKFEJ_JKCIKLEIAHO_OFFSET))(this);
		}

		::BBOFEHOPCEC* PKIGEGFNMDL()
		{
			return ((::BBOFEHOPCEC*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHLBIPIKFEJ_PKIGEGFNMDL_OFFSET))(this);
		}

		::System::Int32 HPCNMNHCJGF()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FHLBIPIKFEJ_HPCNMNHCJGF_OFFSET))(this);
		}

	};
