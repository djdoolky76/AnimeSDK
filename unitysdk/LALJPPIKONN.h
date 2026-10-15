#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LALJPPIKONN;
namespace RPG::GameCore { class RuntimeGroupInfo; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LALJPPIKONN_CTOR_OFFSET UNITYSDK_OFFSET(0xB5E7060)
#define LALJPPIKONN_IKLDNENPLDN_OFFSET UNITYSDK_OFFSET(0xB5E6EE0)

inline static constexpr unsigned int LALJPPIKONN_TypeDefinitionIndex = 47156;

	class LALJPPIKONN : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::RuntimeGroupInfo*>* AJINKONEBMH; // 0x10
		::System::UInt32 NMDDEBJIOHD; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LALJPPIKONN_CTOR_OFFSET))(this);
		}

		::System::Void IKLDNENPLDN(::LALJPPIKONN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LALJPPIKONN*))((::PBYTE)hIl2Cpp + LALJPPIKONN_IKLDNENPLDN_OFFSET))(this, a1);
		}

	};
