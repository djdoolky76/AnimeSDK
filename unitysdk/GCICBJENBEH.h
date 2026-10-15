#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class RuntimeGroupInfo; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GCICBJENBEH_CTOR_OFFSET UNITYSDK_OFFSET(0x1597B3D0)

inline static constexpr unsigned int GCICBJENBEH_TypeDefinitionIndex = 47155;

	class GCICBJENBEH : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::RuntimeGroupInfo*>* GDILOKBJBJI; // 0x10
		::System::UInt32 NMDDEBJIOHD; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCICBJENBEH_CTOR_OFFSET))(this);
		}

	};
