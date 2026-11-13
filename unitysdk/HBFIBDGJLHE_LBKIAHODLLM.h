#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HBFIBDGJLHE;
class HBFIBDGJLHE_GIFMIOMFGNE;
class HBFIBDGJLHE_LBKIAHODLLM_PLJAJMFJPOK;
class HBFIBDGJLHE_NOIHNPGDCDL;
namespace RPG::Client::CityCarFlow { class MonoCityCarEmitter; }
namespace System { class Object; }
namespace System { class String; }

#define HBFIBDGJLHE_LBKIAHODLLM_CHLJIPECLKA_OFFSET UNITYSDK_OFFSET(0x1C16CBC0)
#define HBFIBDGJLHE_LBKIAHODLLM_CTOR_OFFSET UNITYSDK_OFFSET(0x1C15EFF0)
#define HBFIBDGJLHE_LBKIAHODLLM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C1614C0)
#define HBFIBDGJLHE_LBKIAHODLLM_GET_BINDROADNAMES_OFFSET UNITYSDK_OFFSET(0x1C16CAD0)
#define HBFIBDGJLHE_LBKIAHODLLM_GET_BINDROADS_OFFSET UNITYSDK_OFFSET(0x1C16CAF0)
#define HBFIBDGJLHE_LBKIAHODLLM_GET_DATAS_OFFSET UNITYSDK_OFFSET(0x1C16CAB0)
#define HBFIBDGJLHE_LBKIAHODLLM_GET_DATAWEIGHT_OFFSET UNITYSDK_OFFSET(0x1C16CA90)
#define HBFIBDGJLHE_LBKIAHODLLM_GET_FIRERATIO_OFFSET UNITYSDK_OFFSET(0x1C16CB10)
#define HBFIBDGJLHE_LBKIAHODLLM_GET_MAXDELTATIME_OFFSET UNITYSDK_OFFSET(0x1C16CA70)
#define HBFIBDGJLHE_LBKIAHODLLM_GET_MINDELTATIME_OFFSET UNITYSDK_OFFSET(0x1C16CA50)
#define HBFIBDGJLHE_LBKIAHODLLM_GET_PROXY_OFFSET UNITYSDK_OFFSET(0x1C16CA30)
#define HBFIBDGJLHE_LBKIAHODLLM_GET_WAITSECONDS_OFFSET UNITYSDK_OFFSET(0x1C16CB30)
#define HBFIBDGJLHE_LBKIAHODLLM_HEFPBEONHNF_OFFSET UNITYSDK_OFFSET(0x1C1642E0)
#define HBFIBDGJLHE_LBKIAHODLLM_JDEKJLHMPLG_OFFSET UNITYSDK_OFFSET(0x1C160450)
#define HBFIBDGJLHE_LBKIAHODLLM_KDJCDEEONJB_OFFSET UNITYSDK_OFFSET(0x1C162D00)
#define HBFIBDGJLHE_LBKIAHODLLM_LMBHJGDFGNN_OFFSET UNITYSDK_OFFSET(0x1C163F80)
#define HBFIBDGJLHE_LBKIAHODLLM_NLDHKPHENBI_OFFSET UNITYSDK_OFFSET(0x1C16CD80)
#define HBFIBDGJLHE_LBKIAHODLLM_OGOHDLIKPLE_OFFSET UNITYSDK_OFFSET(0x1C16CE40)
#define HBFIBDGJLHE_LBKIAHODLLM_OIAENCEMNHK_OFFSET UNITYSDK_OFFSET(0x1C16CB60)
#define HBFIBDGJLHE_LBKIAHODLLM_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0x1C162C90)
#define HBFIBDGJLHE_LBKIAHODLLM_SET_BINDROADNAMES_OFFSET UNITYSDK_OFFSET(0x1C16CAE0)
#define HBFIBDGJLHE_LBKIAHODLLM_SET_BINDROADS_OFFSET UNITYSDK_OFFSET(0x1C16CB00)
#define HBFIBDGJLHE_LBKIAHODLLM_SET_DATAS_OFFSET UNITYSDK_OFFSET(0x1C16CAC0)
#define HBFIBDGJLHE_LBKIAHODLLM_SET_DATAWEIGHT_OFFSET UNITYSDK_OFFSET(0x1C16CAA0)
#define HBFIBDGJLHE_LBKIAHODLLM_SET_FIRERATIO_OFFSET UNITYSDK_OFFSET(0x1C16CB20)
#define HBFIBDGJLHE_LBKIAHODLLM_SET_MAXDELTATIME_OFFSET UNITYSDK_OFFSET(0x1C16CA80)
#define HBFIBDGJLHE_LBKIAHODLLM_SET_MINDELTATIME_OFFSET UNITYSDK_OFFSET(0x1C16CA60)
#define HBFIBDGJLHE_LBKIAHODLLM_SET_PROXY_OFFSET UNITYSDK_OFFSET(0x1C16CA40)
#define HBFIBDGJLHE_LBKIAHODLLM_SET_WAITSECONDS_OFFSET UNITYSDK_OFFSET(0x1C16CB40)

inline static constexpr unsigned int HBFIBDGJLHE_LBKIAHODLLM_TypeDefinitionIndex = 85045;

	class HBFIBDGJLHE_LBKIAHODLLM : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Object*>* _Datas_k__BackingField; // 0x10
		::Il2CppArray<::System::String*>* _BindRoadNames_k__BackingField; // 0x18
		::Il2CppArray<::System::Object*>* _BindRoads_k__BackingField; // 0x20
		::HBFIBDGJLHE* _Proxy_k__BackingField; // 0x28
		::System::Single _DataWeight_k__BackingField; // 0x30
		::System::Single _MaxDeltaTime_k__BackingField; // 0x34
		::System::Single _MinDeltaTime_k__BackingField; // 0x38
		::System::Single _FireRatio_k__BackingField; // 0x3C
		::System::Single _WaitSeconds_k__BackingField; // 0x40
		::System::Void _ctor(::HBFIBDGJLHE* a1, ::RPG::Client::CityCarFlow::MonoCityCarEmitter* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::HBFIBDGJLHE*, ::RPG::Client::CityCarFlow::MonoCityCarEmitter*, ::System::String*))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_LBKIAHODLLM_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::HBFIBDGJLHE* get_Proxy()
		{
			return ((::HBFIBDGJLHE*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_LBKIAHODLLM_GET_PROXY_OFFSET))(this);
		}

		::System::Void set_Proxy(::HBFIBDGJLHE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HBFIBDGJLHE*))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_LBKIAHODLLM_SET_PROXY_OFFSET))(this, a1);
		}

		::System::Single get_MinDeltaTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_LBKIAHODLLM_GET_MINDELTATIME_OFFSET))(this);
		}

		::System::Void set_MinDeltaTime(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_LBKIAHODLLM_SET_MINDELTATIME_OFFSET))(this, a1);
		}

		::System::Single get_MaxDeltaTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_LBKIAHODLLM_GET_MAXDELTATIME_OFFSET))(this);
		}

		::System::Void set_MaxDeltaTime(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_LBKIAHODLLM_SET_MAXDELTATIME_OFFSET))(this, a1);
		}

		::System::Single get_DataWeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_LBKIAHODLLM_GET_DATAWEIGHT_OFFSET))(this);
		}

		::System::Void set_DataWeight(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_LBKIAHODLLM_SET_DATAWEIGHT_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Object*>* get_Datas()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_LBKIAHODLLM_GET_DATAS_OFFSET))(this);
		}

		::System::Void set_Datas(::Il2CppArray<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_LBKIAHODLLM_SET_DATAS_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::String*>* get_BindRoadNames()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_LBKIAHODLLM_GET_BINDROADNAMES_OFFSET))(this);
		}

		::System::Void set_BindRoadNames(::Il2CppArray<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_LBKIAHODLLM_SET_BINDROADNAMES_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Object*>* get_BindRoads()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_LBKIAHODLLM_GET_BINDROADS_OFFSET))(this);
		}

		::System::Void set_BindRoads(::Il2CppArray<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_LBKIAHODLLM_SET_BINDROADS_OFFSET))(this, a1);
		}

		::System::Single get_FireRatio()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_LBKIAHODLLM_GET_FIRERATIO_OFFSET))(this);
		}

		::System::Void set_FireRatio(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_LBKIAHODLLM_SET_FIRERATIO_OFFSET))(this, a1);
		}

		::System::Single get_WaitSeconds()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_LBKIAHODLLM_GET_WAITSECONDS_OFFSET))(this);
		}

		::System::Void set_WaitSeconds(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_LBKIAHODLLM_SET_WAITSECONDS_OFFSET))(this, a1);
		}

		::System::Void JDEKJLHMPLG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_LBKIAHODLLM_JDEKJLHMPLG_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_LBKIAHODLLM_DISPOSE_OFFSET))(this);
		}

		::System::Boolean PAGKOAEOLKA(::System::Single a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_LBKIAHODLLM_PAGKOAEOLKA_OFFSET))(this, a1);
		}

		::System::Boolean KDJCDEEONJB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_LBKIAHODLLM_KDJCDEEONJB_OFFSET))(this);
		}

		::System::Void LMBHJGDFGNN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_LBKIAHODLLM_LMBHJGDFGNN_OFFSET))(this, a1);
		}

		::System::Single OIAENCEMNHK()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_LBKIAHODLLM_OIAENCEMNHK_OFFSET))(this);
		}

		::HBFIBDGJLHE_LBKIAHODLLM_PLJAJMFJPOK* NLDHKPHENBI()
		{
			return ((::HBFIBDGJLHE_LBKIAHODLLM_PLJAJMFJPOK*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_LBKIAHODLLM_NLDHKPHENBI_OFFSET))(this);
		}

		::HBFIBDGJLHE_GIFMIOMFGNE* CHLJIPECLKA()
		{
			return ((::HBFIBDGJLHE_GIFMIOMFGNE*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_LBKIAHODLLM_CHLJIPECLKA_OFFSET))(this);
		}

		::HBFIBDGJLHE_GIFMIOMFGNE* HEFPBEONHNF(::HBFIBDGJLHE_NOIHNPGDCDL* a1, ::System::Single a2)
		{
			return ((::HBFIBDGJLHE_GIFMIOMFGNE*(*)(::PVOID, ::HBFIBDGJLHE_NOIHNPGDCDL*, ::System::Single))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_LBKIAHODLLM_HEFPBEONHNF_OFFSET))(this, a1, a2);
		}

		::HBFIBDGJLHE_NOIHNPGDCDL* OGOHDLIKPLE(::HBFIBDGJLHE_LBKIAHODLLM_PLJAJMFJPOK* a1)
		{
			return ((::HBFIBDGJLHE_NOIHNPGDCDL*(*)(::PVOID, ::HBFIBDGJLHE_LBKIAHODLLM_PLJAJMFJPOK*))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_LBKIAHODLLM_OGOHDLIKPLE_OFFSET))(this, a1);
		}

	};
