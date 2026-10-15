#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/SpawnEntityMode.h"
#include "unitysdk/System/Object.h"
class KKMHKKIFFHD;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LAAOKALNHIO_CTOR_OFFSET UNITYSDK_OFFSET(0x1C6F1030)

inline static constexpr unsigned int LAAOKALNHIO_TypeDefinitionIndex = 36914;

	class LAAOKALNHIO : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::KKMHKKIFFHD*>* AGPLGBDJFPP; // 0x10
		::RPG::Client::LittleGameShare::SpawnEntityMode DGDIEKNAOBL; // 0x18
		::System::Int32 DDAICPFIOJF; // 0x1C
		::System::UInt64 LIDEEECPJJL; // 0x20
		::System::UInt32 JIDCDHIKHJJ; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAAOKALNHIO_CTOR_OFFSET))(this);
		}

	};
