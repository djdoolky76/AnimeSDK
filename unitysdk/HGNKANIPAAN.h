#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define HGNKANIPAAN_CLEAR_OFFSET UNITYSDK_OFFSET(0x1CACAE50)
#define HGNKANIPAAN_CTOR_OFFSET UNITYSDK_OFFSET(0x1CACAEC0)

	class HGNKANIPAAN : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::Transform*>* FDNIMKMJAIE; // 0x10
		::System::UInt32 FALHGPLBOMC; // 0x18
		::System::UInt32 GJNJCGFIDEB; // 0x1C
		::System::Int32 KPBLJANAOAF; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGNKANIPAAN_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGNKANIPAAN_CLEAR_OFFSET))(this);
		}

	};
