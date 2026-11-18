#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_COLLECTIONS_GENERIC_BITHELPER_C7ABB89F6CA099E4_ISMARKED_OFFSET UNITYSDK_OFFSET(0x1E7FCDF0)
#define SYSTEM_COLLECTIONS_GENERIC_BITHELPER_C7ABB89F6CA099E4_MARKBIT_OFFSET UNITYSDK_OFFSET(0x1E7FCD70)
#define SYSTEM_COLLECTIONS_GENERIC_BITHELPER_C7ABB89F6CA099E4_TOINTARRAYLENGTH_OFFSET UNITYSDK_OFFSET(0x1E7FCE70)
#define SYSTEM_COLLECTIONS_GENERIC_BITHELPER_C7ABB89F6CA099E4__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E7FCD60)
#define SYSTEM_COLLECTIONS_GENERIC_BITHELPER_C7ABB89F6CA099E4__CTOR_OFFSET UNITYSDK_OFFSET(0x1E7FCD50)

namespace System::Collections::Generic
{
	inline static constexpr unsigned int BitHelper_C7ABB89F6CA099E4_TypeDefinitionIndex = 5026;

	class BitHelper_C7ABB89F6CA099E4 : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Int32>* _array; // 0x10
		::System::Int32 _length; // 0x18
		::System::Boolean _useStackAlloc; // 0x1C
		::System::Byte _padding0[0x3];
		::PVOID _arrayPtr; // 0x20

		::System::Void _ctor(::PVOID bitArrayPtr, ::System::Int32 length)
		{
			return ((::System::Void(*)(::PVOID, ::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_BITHELPER_C7ABB89F6CA099E4__CTOR_OFFSET))(this, bitArrayPtr, length);
		}

		::System::Void _ctor_1(::Il2CppArray<::System::Int32>* bitArray, ::System::Int32 length)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Int32>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_BITHELPER_C7ABB89F6CA099E4__CTOR_1_OFFSET))(this, bitArray, length);
		}

		::System::Void MarkBit(::System::Int32 bitPosition)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_BITHELPER_C7ABB89F6CA099E4_MARKBIT_OFFSET))(this, bitPosition);
		}

		::System::Boolean IsMarked(::System::Int32 bitPosition)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_BITHELPER_C7ABB89F6CA099E4_ISMARKED_OFFSET))(this, bitPosition);
		}

		static ::System::Int32 ToIntArrayLength(::System::Int32 n)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_BITHELPER_C7ABB89F6CA099E4_TOINTARRAYLENGTH_OFFSET))(n);
		}
	};
}
