#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HNEJCOLGHNN_CTOR_OFFSET UNITYSDK_OFFSET(0x15D91D10)
#define HNEJCOLGHNN_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15D91FF0)

	class HNEJCOLGHNN : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* KMNGCDGOEDH; // 0x10
		::Il2CppArray<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::Int32>*>*>* OABGIBHDCGE; // 0x18
		::Il2CppArray<::System::Int32>* FEECLLNNNLF; // 0x20
		::System::Void _ctor(::Il2CppArray<::System::Int32>* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Int32>*, ::System::Int32))((::PBYTE)hIl2Cpp + HNEJCOLGHNN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNEJCOLGHNN_DISPOSE_OFFSET))(this);
		}

	};
