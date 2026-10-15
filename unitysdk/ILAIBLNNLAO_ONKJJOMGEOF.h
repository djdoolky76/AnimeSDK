#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class ILAIBLNNLAO_ONKJJOMGEOF_JODMPLELHIA;
class NNDAJDLAHNC;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace UnityEngine { class GameObject; }

#define ILAIBLNNLAO_ONKJJOMGEOF_CTOR_OFFSET UNITYSDK_OFFSET(0x164A6200)
#define ILAIBLNNLAO_ONKJJOMGEOF_DISPOSE_OFFSET UNITYSDK_OFFSET(0x164A64F0)
#define ILAIBLNNLAO_ONKJJOMGEOF_EGKNKHEANAN_OFFSET UNITYSDK_OFFSET(0x164A6580)
#define ILAIBLNNLAO_ONKJJOMGEOF_GET_ISLOADING_OFFSET UNITYSDK_OFFSET(0x164A6870)
#define ILAIBLNNLAO_ONKJJOMGEOF_GET_ISREADY_OFFSET UNITYSDK_OFFSET(0x164A6850)
#define ILAIBLNNLAO_ONKJJOMGEOF_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x164A6210)
#define ILAIBLNNLAO_ONKJJOMGEOF_NGLLKDPBJMH_OFFSET UNITYSDK_OFFSET(0x164A6650)
#define ILAIBLNNLAO_ONKJJOMGEOF_NJOBMENFBFJ_OFFSET UNITYSDK_OFFSET(0x164A65E0)
#define ILAIBLNNLAO_ONKJJOMGEOF_SET_ISLOADING_OFFSET UNITYSDK_OFFSET(0x164A6880)
#define ILAIBLNNLAO_ONKJJOMGEOF_SET_ISREADY_OFFSET UNITYSDK_OFFSET(0x164A6860)

	class ILAIBLNNLAO_ONKJJOMGEOF : public ::System::Object
	{
	public:
		::ILAIBLNNLAO_ONKJJOMGEOF_JODMPLELHIA* FOGCBHGNPGJ; // 0x10
		::UnityEngine::GameObject* MEEJKGEGHNH; // 0x18
		::ILAIBLNNLAO_ONKJJOMGEOF_JODMPLELHIA* MMDHEJFJHEB; // 0x20
		::System::UInt32 HIGKOOBMLJI; // 0x28
		::System::UInt32 IJCBKDBNCMC; // 0x2C
		::System::Boolean _IsReady_k__BackingField; // 0x30
		::System::Boolean _IsLoading_k__BackingField; // 0x31
		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + ILAIBLNNLAO_ONKJJOMGEOF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void KPJGDHLENIP(::UnityEngine::GameObject* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + ILAIBLNNLAO_ONKJJOMGEOF_KPJGDHLENIP_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILAIBLNNLAO_ONKJJOMGEOF_DISPOSE_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::NNDAJDLAHNC*>* EGKNKHEANAN()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::NNDAJDLAHNC*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILAIBLNNLAO_ONKJJOMGEOF_EGKNKHEANAN_OFFSET))(this);
		}

		::System::Void NGLLKDPBJMH(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + ILAIBLNNLAO_ONKJJOMGEOF_NGLLKDPBJMH_OFFSET))(this, a1, a2);
		}

		::System::Void NJOBMENFBFJ(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ILAIBLNNLAO_ONKJJOMGEOF_NJOBMENFBFJ_OFFSET))(this, a1);
		}

		::System::Boolean get_IsReady()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ILAIBLNNLAO_ONKJJOMGEOF_GET_ISREADY_OFFSET))(this);
		}

		::System::Void set_IsReady(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ILAIBLNNLAO_ONKJJOMGEOF_SET_ISREADY_OFFSET))(this, a1);
		}

		::System::Boolean get_IsLoading()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ILAIBLNNLAO_ONKJJOMGEOF_GET_ISLOADING_OFFSET))(this);
		}

		::System::Void set_IsLoading(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ILAIBLNNLAO_ONKJJOMGEOF_SET_ISLOADING_OFFSET))(this, a1);
		}

	};
