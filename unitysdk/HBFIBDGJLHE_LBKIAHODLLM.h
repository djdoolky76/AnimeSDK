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

#define HBFIBDGJLHE_LBKIAHODLLM_CHLJIPECLKA_OFFSET UNITYSDK_OFFSET(0x15BF5000)
#define HBFIBDGJLHE_LBKIAHODLLM_CTOR_OFFSET UNITYSDK_OFFSET(0x15BE6C30)
#define HBFIBDGJLHE_LBKIAHODLLM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15BE93B0)
#define HBFIBDGJLHE_LBKIAHODLLM_GET_BINDROADNAMES_OFFSET UNITYSDK_OFFSET(0x15BF4F10)
#define HBFIBDGJLHE_LBKIAHODLLM_GET_BINDROADS_OFFSET UNITYSDK_OFFSET(0x15BF4F30)
#define HBFIBDGJLHE_LBKIAHODLLM_GET_DATAS_OFFSET UNITYSDK_OFFSET(0x15BF4EF0)
#define HBFIBDGJLHE_LBKIAHODLLM_GET_DATAWEIGHT_OFFSET UNITYSDK_OFFSET(0x15BF4ED0)
#define HBFIBDGJLHE_LBKIAHODLLM_GET_FIRERATIO_OFFSET UNITYSDK_OFFSET(0x15BF4F50)
#define HBFIBDGJLHE_LBKIAHODLLM_GET_MAXDELTATIME_OFFSET UNITYSDK_OFFSET(0x15BF4EB0)
#define HBFIBDGJLHE_LBKIAHODLLM_GET_MINDELTATIME_OFFSET UNITYSDK_OFFSET(0x15BF4E90)
#define HBFIBDGJLHE_LBKIAHODLLM_GET_PROXY_OFFSET UNITYSDK_OFFSET(0x15BF4E70)
#define HBFIBDGJLHE_LBKIAHODLLM_GET_WAITSECONDS_OFFSET UNITYSDK_OFFSET(0x15BF4F70)
#define HBFIBDGJLHE_LBKIAHODLLM_HEFPBEONHNF_OFFSET UNITYSDK_OFFSET(0x15BEC3D0)
#define HBFIBDGJLHE_LBKIAHODLLM_JDEKJLHMPLG_OFFSET UNITYSDK_OFFSET(0x15BE8220)
#define HBFIBDGJLHE_LBKIAHODLLM_KDJCDEEONJB_OFFSET UNITYSDK_OFFSET(0x15BEAC60)
#define HBFIBDGJLHE_LBKIAHODLLM_LMBHJGDFGNN_OFFSET UNITYSDK_OFFSET(0x15BEBFC0)
#define HBFIBDGJLHE_LBKIAHODLLM_NLDHKPHENBI_OFFSET UNITYSDK_OFFSET(0x15BF51F0)
#define HBFIBDGJLHE_LBKIAHODLLM_OGOHDLIKPLE_OFFSET UNITYSDK_OFFSET(0x15BF52B0)
#define HBFIBDGJLHE_LBKIAHODLLM_OIAENCEMNHK_OFFSET UNITYSDK_OFFSET(0x15BF4FA0)
#define HBFIBDGJLHE_LBKIAHODLLM_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0x15BEABF0)
#define HBFIBDGJLHE_LBKIAHODLLM_SET_BINDROADNAMES_OFFSET UNITYSDK_OFFSET(0x15BF4F20)
#define HBFIBDGJLHE_LBKIAHODLLM_SET_BINDROADS_OFFSET UNITYSDK_OFFSET(0x15BF4F40)
#define HBFIBDGJLHE_LBKIAHODLLM_SET_DATAS_OFFSET UNITYSDK_OFFSET(0x15BF4F00)
#define HBFIBDGJLHE_LBKIAHODLLM_SET_DATAWEIGHT_OFFSET UNITYSDK_OFFSET(0x15BF4EE0)
#define HBFIBDGJLHE_LBKIAHODLLM_SET_FIRERATIO_OFFSET UNITYSDK_OFFSET(0x15BF4F60)
#define HBFIBDGJLHE_LBKIAHODLLM_SET_MAXDELTATIME_OFFSET UNITYSDK_OFFSET(0x15BF4EC0)
#define HBFIBDGJLHE_LBKIAHODLLM_SET_MINDELTATIME_OFFSET UNITYSDK_OFFSET(0x15BF4EA0)
#define HBFIBDGJLHE_LBKIAHODLLM_SET_PROXY_OFFSET UNITYSDK_OFFSET(0x15BF4E80)
#define HBFIBDGJLHE_LBKIAHODLLM_SET_WAITSECONDS_OFFSET UNITYSDK_OFFSET(0x15BF4F80)

inline static constexpr unsigned int HBFIBDGJLHE_LBKIAHODLLM_TypeDefinitionIndex = 82172;

	class HBFIBDGJLHE_LBKIAHODLLM : public ::System::Object
	{
	public:
		::Il2CppArray<::System::String*>* _BindRoadNames_k__BackingField; // 0x10
		::Il2CppArray<::System::Object*>* _BindRoads_k__BackingField; // 0x18
		::HBFIBDGJLHE* _Proxy_k__BackingField; // 0x20
		::Il2CppArray<::System::Object*>* _Datas_k__BackingField; // 0x28
		::System::Single _MaxDeltaTime_k__BackingField; // 0x30
		::System::Single _WaitSeconds_k__BackingField; // 0x34
		::System::Single _DataWeight_k__BackingField; // 0x38
		::System::Single _MinDeltaTime_k__BackingField; // 0x3C
		::System::Single _FireRatio_k__BackingField; // 0x40
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
