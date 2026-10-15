#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KAANKGHDHCB.h"
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }

#define BDONFOMPGAO_CTOR_OFFSET UNITYSDK_OFFSET(0x162FA010)
#define BDONFOMPGAO_HKKFFCBJOKM_OFFSET UNITYSDK_OFFSET(0x162FA180)

inline static constexpr unsigned int BDONFOMPGAO_TypeDefinitionIndex = 82277;

	class BDONFOMPGAO : public ::KAANKGHDHCB
	{
	public:
		::System::Int32 GBKFPMBPIGP; // 0x20
		::System::Byte _padding0[0x4];
		::System::Int64 GDBJDAOOCOH; // 0x28
		::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2, ::System::String* a3, ::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::String*, ::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + BDONFOMPGAO_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void HKKFFCBJOKM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDONFOMPGAO_HKKFFCBJOKM_OFFSET))(this);
		}

	};
