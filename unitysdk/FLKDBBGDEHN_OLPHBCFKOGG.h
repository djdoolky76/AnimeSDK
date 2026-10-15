#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class DynamicValue; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define FLKDBBGDEHN_OLPHBCFKOGG_CTOR_OFFSET UNITYSDK_OFFSET(0x1CDD7E20)

inline static constexpr unsigned int FLKDBBGDEHN_OLPHBCFKOGG_TypeDefinitionIndex = 13233;

	class FLKDBBGDEHN_OLPHBCFKOGG : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<::RPG::GameCore::DynamicValue*>* GHHALCBDANM; // 0x10
		::System::UInt32 CJMNBCMOCCF; // 0x18
		::System::Boolean BMDBDCMLPGM; // 0x1C
		::System::Void _ctor(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + FLKDBBGDEHN_OLPHBCFKOGG_CTOR_OFFSET))(this, a1, a2);
		}

	};
