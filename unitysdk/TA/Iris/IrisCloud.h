#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ACF10FE87B4C5617.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class F875E7A8F1781006;

#define TA_IRIS_IRISCLOUD_ADD_OFFSET UNITYSDK_OFFSET(0x28A37F0)
#define TA_IRIS_IRISCLOUD_CLEAR_OFFSET UNITYSDK_OFFSET(0x28A3A20)
#define TA_IRIS_IRISCLOUD_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x28A3AB0)
#define TA_IRIS_IRISCLOUD_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x28A3EB0)
#define TA_IRIS_IRISCLOUD_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x28A3F30)
#define TA_IRIS_IRISCLOUD_HASOPPOSITESCALE_OFFSET UNITYSDK_OFFSET(0x28A3B60)
#define TA_IRIS_IRISCLOUD_MERGE_OFFSET UNITYSDK_OFFSET(0x28A3C60)
#define TA_IRIS_IRISCLOUD_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x28A40A0)
#define TA_IRIS_IRISCLOUD_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x28A3D10)
#define TA_IRIS_IRISCLOUD__CTOR_OFFSET UNITYSDK_OFFSET(0x28A3E00)

namespace TA::Iris
{
	inline static constexpr unsigned int IrisCloud_TypeDefinitionIndex = 16232;

	class IrisCloud : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::ACF10FE87B4C5617>* CullBackItems; // 0x18
		::System::Collections::Generic::List_1<::UnityEngine::ACF10FE87B4C5617>* CullFrontItems; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_IRIS_IRISCLOUD__CTOR_OFFSET))(this);
		}

		::UnityEngine::ACF10FE87B4C5617 get_Item(::System::Int32 B48C66E5FB2449C6)
		{
			return ((::UnityEngine::ACF10FE87B4C5617(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + TA_IRIS_IRISCLOUD_GET_ITEM_OFFSET))(this, B48C66E5FB2449C6);
		}

		::System::Void Merge(::TA::Iris::IrisCloud* B0F622AC5564DE4E)
		{
			return ((::System::Void(*)(::PVOID, ::TA::Iris::IrisCloud*))((::PBYTE)hIl2Cpp + TA_IRIS_IRISCLOUD_MERGE_OFFSET))(this, B0F622AC5564DE4E);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_IRIS_IRISCLOUD_GET_COUNT_OFFSET))(this);
		}

		::F875E7A8F1781006<::UnityEngine::ACF10FE87B4C5617>* GetEnumerator()
		{
			return ((::F875E7A8F1781006<::UnityEngine::ACF10FE87B4C5617>*(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_IRIS_IRISCLOUD_GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_IRIS_IRISCLOUD_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

		::System::Boolean HasOppositeScale(::UnityEngine::ACF10FE87B4C5617 F838F27EA0950C93, ::UnityEngine::ACF10FE87B4C5617 EF2CBB55F844BC46)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::ACF10FE87B4C5617, ::UnityEngine::ACF10FE87B4C5617))((::PBYTE)hIl2Cpp + TA_IRIS_IRISCLOUD_HASOPPOSITESCALE_OFFSET))(this, F838F27EA0950C93, EF2CBB55F844BC46);
		}

		::System::Void Add(::UnityEngine::ACF10FE87B4C5617 EC35F88C87A83BEB)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ACF10FE87B4C5617))((::PBYTE)hIl2Cpp + TA_IRIS_IRISCLOUD_ADD_OFFSET))(this, EC35F88C87A83BEB);
		}

		::System::Void set_Item(::System::Int32 B48C66E5FB2449C6, ::UnityEngine::ACF10FE87B4C5617 E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::ACF10FE87B4C5617))((::PBYTE)hIl2Cpp + TA_IRIS_IRISCLOUD_SET_ITEM_OFFSET))(this, B48C66E5FB2449C6, E937D4885DAA1AE8);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_IRIS_IRISCLOUD_CLEAR_OFFSET))(this);
		}
	};
}
