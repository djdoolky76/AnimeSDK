#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class ScrollRect; }

#define DOKFJHDHJJJ_AIIOODOIMHP_OFFSET UNITYSDK_OFFSET(0x191AC510)
#define DOKFJHDHJJJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x191ACA60)
#define DOKFJHDHJJJ_CMCAJHCEPLB_OFFSET UNITYSDK_OFFSET(0x191ABBD0)
#define DOKFJHDHJJJ_CPNCFEKBOPA_OFFSET UNITYSDK_OFFSET(0x191ABD70)
#define DOKFJHDHJJJ_CTOR_OFFSET UNITYSDK_OFFSET(0x191AB3F0)
#define DOKFJHDHJJJ_DFIBIJFAFFF_OFFSET UNITYSDK_OFFSET(0x191AB620)
#define DOKFJHDHJJJ_FMAOHOLNGPC_OFFSET UNITYSDK_OFFSET(0x191AC220)
#define DOKFJHDHJJJ_IMIKJMCGGML_OFFSET UNITYSDK_OFFSET(0x191AB660)
#define DOKFJHDHJJJ_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x191AB6B0)
#define DOKFJHDHJJJ_LJBCDJNNBJH_OFFSET UNITYSDK_OFFSET(0x191AB720)
#define DOKFJHDHJJJ_MDCDKNPHBIB_OFFSET UNITYSDK_OFFSET(0x191AC5A0)

inline static constexpr unsigned int DOKFJHDHJJJ_TypeDefinitionIndex = 74639;

	class DOKFJHDHJJJ : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::UnityEngine::GameObject*, ::System::Int32>* HBMIEFPCNLK; // 0x10
		::UnityEngine::UI::ScrollRect* DNGOBOCIMNC; // 0x18
		::UnityEngine::Transform* MJCCOGIFANB; // 0x20
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* OGCDJMKECHP; // 0x28
		::UnityEngine::Transform* NHJIMBADBEN; // 0x30
		::System::Action_1<::UnityEngine::GameObject*>* MCKAFONACMF; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Stack_1<::UnityEngine::GameObject*>*>* BEHHICMOFIE; // 0x40
		::System::Func_2<::System::Int32, ::UnityEngine::GameObject*>* NELHFBDKJFJ; // 0x48
		::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::GameObject*>* FEKNFHANPFB; // 0x50
		::System::Int32 GHPNCNFMMEH; // 0x58
		static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet_CDHJKBKDBEC()
		{
			return (::Il2CppArray<::UnityEngine::Vector3>**)UnitySDK::FromName("", "DOKFJHDHJJJ")->GetStaticField(0x70120);
		}

		::System::Void _ctor(::UnityEngine::Transform* a1, ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::GameObject*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + DOKFJHDHJJJ_CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DOKFJHDHJJJ_CCTOR_OFFSET))();
		}

		::UnityEngine::UI::ScrollRect* DFIBIJFAFFF()
		{
			return ((::UnityEngine::UI::ScrollRect*(*)(::PVOID))((::PBYTE)hIl2Cpp + DOKFJHDHJJJ_DFIBIJFAFFF_OFFSET))(this);
		}

		::System::Int32 IMIKJMCGGML()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DOKFJHDHJJJ_IMIKJMCGGML_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::System::Int32 a1, ::System::Func_2<::System::Int32, ::UnityEngine::GameObject*>* a2, ::System::Action_1<::UnityEngine::GameObject*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Func_2<::System::Int32, ::UnityEngine::GameObject*>*, ::System::Action_1<::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + DOKFJHDHJJJ_KPJGDHLENIP_OFFSET))(this, a1, a2, a3);
		}

		::System::Void LJBCDJNNBJH(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + DOKFJHDHJJJ_LJBCDJNNBJH_OFFSET))(this, a1, a2);
		}

		::UnityEngine::GameObject* CPNCFEKBOPA(::System::Int32 a1)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DOKFJHDHJJJ_CPNCFEKBOPA_OFFSET))(this, a1);
		}

		::System::Void FMAOHOLNGPC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOKFJHDHJJJ_FMAOHOLNGPC_OFFSET))(this);
		}

		::UnityEngine::GameObject* AIIOODOIMHP(::System::Int32 a1)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DOKFJHDHJJJ_AIIOODOIMHP_OFFSET))(this, a1);
		}

		::System::Void MDCDKNPHBIB(::System::Int32 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + DOKFJHDHJJJ_MDCDKNPHBIB_OFFSET))(this, a1, a2);
		}

		::System::Void CMCAJHCEPLB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOKFJHDHJJJ_CMCAJHCEPLB_OFFSET))(this);
		}

	};
