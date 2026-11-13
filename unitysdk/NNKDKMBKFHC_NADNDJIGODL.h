#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NNKDKMBKFHC_NADNDJIGODL_CONNPKAOCPE_OFFSET UNITYSDK_OFFSET(0x179F5BF0)
#define NNKDKMBKFHC_NADNDJIGODL_CTOR_OFFSET UNITYSDK_OFFSET(0x179F5B90)
#define NNKDKMBKFHC_NADNDJIGODL_HPOGLCMIMFJ_OFFSET UNITYSDK_OFFSET(0x179F7BE0)

inline static constexpr unsigned int NNKDKMBKFHC_NADNDJIGODL_TypeDefinitionIndex = 54677;

	class NNKDKMBKFHC_NADNDJIGODL : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* IKOABIGIOBO; // 0x10
		::System::Single CILHMIAGAOD; // 0x18
		::System::Boolean HLBPJNACGAC; // 0x1C
		::System::Boolean NIKGKKBBFDA; // 0x1D
		::System::Byte _padding0[0x2];
		::System::Int32 NCMNOKLKKIO; // 0x20
		::System::Single JDMPBICECHA; // 0x24
		::System::Int32 EMOEIFLJAFL; // 0x28
		::System::Single KIOHFFKHFDN; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNKDKMBKFHC_NADNDJIGODL_CTOR_OFFSET))(this);
		}

		::System::Void CONNPKAOCPE(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NNKDKMBKFHC_NADNDJIGODL_CONNPKAOCPE_OFFSET))(this, a1);
		}

		::System::Void HPOGLCMIMFJ(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NNKDKMBKFHC_NADNDJIGODL_HPOGLCMIMFJ_OFFSET))(this, a1);
		}

	};
