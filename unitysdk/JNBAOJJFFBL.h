#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ChimeraDuel/ChimeraDuelUIDGeneratorType.h"
#include "unitysdk/System/Object.h"
class PAFAJPKOLCN;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JNBAOJJFFBL_CTOR_OFFSET UNITYSDK_OFFSET(0xB26FB50)
#define JNBAOJJFFBL_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB26FC50)
#define JNBAOJJFFBL_OGDMAKFJMKA_OFFSET UNITYSDK_OFFSET(0xB26FCF0)

inline static constexpr unsigned int JNBAOJJFFBL_TypeDefinitionIndex = 77434;

	class JNBAOJJFFBL : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelUIDGeneratorType, ::PAFAJPKOLCN*>* IGNNKMKNNBE; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNBAOJJFFBL_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNBAOJJFFBL_DISPOSE_OFFSET))(this);
		}

		::System::UInt32 OGDMAKFJMKA(::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelUIDGeneratorType a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelUIDGeneratorType))((::PBYTE)hIl2Cpp + JNBAOJJFFBL_OGDMAKFJMKA_OFFSET))(this, a1);
		}

	};
