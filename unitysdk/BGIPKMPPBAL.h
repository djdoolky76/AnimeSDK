#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ELENICENJKP;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IReadOnlyDictionary_2; }

#define BGIPKMPPBAL_CTOR_OFFSET UNITYSDK_OFFSET(0xB1887B0)
#define BGIPKMPPBAL_GET_NODES_OFFSET UNITYSDK_OFFSET(0xB1887C0)

inline static constexpr unsigned int BGIPKMPPBAL_TypeDefinitionIndex = 79160;

	class BGIPKMPPBAL : public ::System::Object
	{
	public:
		::System::Collections::Generic::IReadOnlyDictionary_2<::System::String*, ::ELENICENJKP*>* _Nodes_k__BackingField; // 0x10
		::System::Void _ctor(::System::Collections::Generic::IReadOnlyDictionary_2<::System::String*, ::ELENICENJKP*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyDictionary_2<::System::String*, ::ELENICENJKP*>*))((::PBYTE)hIl2Cpp + BGIPKMPPBAL_CTOR_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyDictionary_2<::System::String*, ::ELENICENJKP*>* get_Nodes()
		{
			return ((::System::Collections::Generic::IReadOnlyDictionary_2<::System::String*, ::ELENICENJKP*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGIPKMPPBAL_GET_NODES_OFFSET))(this);
		}

	};
