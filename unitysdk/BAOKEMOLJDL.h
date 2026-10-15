#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class KDJNAAOFMMJ;
namespace RPG::Client { class LuaUIController; }
namespace RPG::Client { class NotifyHandler; }
namespace RPG::GameCore { class ShowShop; }
namespace RPG::GameCore { class TalkBehaviorRow; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BAOKEMOLJDL_CBDNNKAELBM_OFFSET UNITYSDK_OFFSET(0x15E723C0)
#define BAOKEMOLJDL_CTOR_OFFSET UNITYSDK_OFFSET(0x15E719A0)
#define BAOKEMOLJDL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15E71AD0)
#define BAOKEMOLJDL_DOKOMMCBAIH_OFFSET UNITYSDK_OFFSET(0x15E722F0)
#define BAOKEMOLJDL_GBDLGEFDPMF_OFFSET UNITYSDK_OFFSET(0x15E72840)
#define BAOKEMOLJDL_HCPCPFNKMOK_OFFSET UNITYSDK_OFFSET(0x15E720F0)
#define BAOKEMOLJDL_LKKFOIEGNND_OFFSET UNITYSDK_OFFSET(0x15E72500)
#define BAOKEMOLJDL_MPICLILDOKD_OFFSET UNITYSDK_OFFSET(0x15E71F10)
#define BAOKEMOLJDL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15E71B10)
#define BAOKEMOLJDL_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15E72220)
#define BAOKEMOLJDL_TICK_OFFSET UNITYSDK_OFFSET(0x15E72290)

inline static constexpr unsigned int BAOKEMOLJDL_TypeDefinitionIndex = 58691;

	class BAOKEMOLJDL : public ::GELIALJDFBL
	{
	public:
		::RPG::Client::NotifyHandler* ANMLHFBCPCF; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::Il2CppArray<::System::Int32>* CFKLLAOPMOG; // 0x28
		::RPG::Client::LuaUIController* OGOFNHAGOPO; // 0x30
		::System::Collections::Generic::List_1<::RPG::GameCore::TalkBehaviorRow*>* KKOHGABGELH; // 0x38
		::KDJNAAOFMMJ* PJHNKKIDLBE; // 0x40
		::RPG::GameCore::ShowShop* OFKGLJOAMLD; // 0x48
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* MHMCJJDFBGK; // 0x50
		::System::Double OLFCPNBKHLO; // 0x58
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowShop* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowShop*))((::PBYTE)hIl2Cpp + BAOKEMOLJDL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAOKEMOLJDL_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAOKEMOLJDL_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAOKEMOLJDL_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BAOKEMOLJDL_TICK_OFFSET))(this, a1);
		}

		::System::Void DOKOMMCBAIH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAOKEMOLJDL_DOKOMMCBAIH_OFFSET))(this);
		}

		::System::Void LKKFOIEGNND(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BAOKEMOLJDL_LKKFOIEGNND_OFFSET))(this, a1);
		}

		::System::Void HCPCPFNKMOK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAOKEMOLJDL_HCPCPFNKMOK_OFFSET))(this);
		}

		::System::Void MPICLILDOKD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAOKEMOLJDL_MPICLILDOKD_OFFSET))(this);
		}

		::System::Boolean CBDNNKAELBM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BAOKEMOLJDL_CBDNNKAELBM_OFFSET))(this);
		}

		::System::String* GBDLGEFDPMF(::RPG::GameCore::TalkBehaviorRow* a1)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::GameCore::TalkBehaviorRow*))((::PBYTE)hIl2Cpp + BAOKEMOLJDL_GBDLGEFDPMF_OFFSET))(this, a1);
		}

	};
