#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DGEPFHILKPM_CTOR_OFFSET UNITYSDK_OFFSET(0xE846200)
#define DGEPFHILKPM_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0xE8461B0)

inline static constexpr unsigned int DGEPFHILKPM_TypeDefinitionIndex = 80113;

	class DGEPFHILKPM : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>*>* GDEICGCKOAM; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGEPFHILKPM_CTOR_OFFSET))(this);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGEPFHILKPM_PJPFIHFAHGO_OFFSET))(this);
		}

	};
