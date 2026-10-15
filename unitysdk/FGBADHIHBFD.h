#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace UnityEngine { class Object; }

#define FGBADHIHBFD_OCJMANGGCCC_1_OFFSET UNITYSDK_OFFSET(0x1EC6A5F0)
#define FGBADHIHBFD_OCJMANGGCCC_OFFSET UNITYSDK_OFFSET(0x1EC6A0B0)

	class FGBADHIHBFD : public ::System::Object
	{
	public:
		static ::Il2CppArray<::UnityEngine::Object*>* OCJMANGGCCC(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Object*>* a1)
		{
			return ((::Il2CppArray<::UnityEngine::Object*>*(*)(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Object*>*))((::PBYTE)hIl2Cpp + FGBADHIHBFD_OCJMANGGCCC_OFFSET))(a1);
		}

		static ::Il2CppArray<::UnityEngine::Object*>* OCJMANGGCCC_1(::Il2CppArray<::UnityEngine::Object*>* a1)
		{
			return ((::Il2CppArray<::UnityEngine::Object*>*(*)(::Il2CppArray<::UnityEngine::Object*>*))((::PBYTE)hIl2Cpp + FGBADHIHBFD_OCJMANGGCCC_1_OFFSET))(a1);
		}

	};
