#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IBMHOBKCOKD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x15E342B0)
#define IBMHOBKCOKD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x15E342F0)
#define IBMHOBKCOKD___C__DEEPCOPY_B__3_0_OFFSET UNITYSDK_OFFSET(0x15E34300)
#define IBMHOBKCOKD___C__DEEPCOPY_B__3_1_OFFSET UNITYSDK_OFFSET(0x15E34310)

inline static constexpr unsigned int IBMHOBKCOKD___c_TypeDefinitionIndex = 78736;

	class IBMHOBKCOKD___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>*>, ::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>*>** StaticGet___9__3_1()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>*>, ::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3CA10);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3CA18);
		}

		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>*>, ::System::Int32>** StaticGet___9__3_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>*>, ::System::Int32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3CA20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IBMHOBKCOKD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBMHOBKCOKD___C_CTOR_OFFSET))(this);
		}

		::System::Int32 _DeepCopy_b__3_0(::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>*> a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>*>))((::PBYTE)hIl2Cpp + IBMHOBKCOKD___C__DEEPCOPY_B__3_0_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>* _DeepCopy_b__3_1(::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>*> a1)
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>*(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>*>))((::PBYTE)hIl2Cpp + IBMHOBKCOKD___C__DEEPCOPY_B__3_1_OFFSET))(this, a1);
		}

	};
