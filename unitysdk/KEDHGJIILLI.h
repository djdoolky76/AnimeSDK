#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class CharacterEffect; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KEDHGJIILLI_CTOR_OFFSET UNITYSDK_OFFSET(0xB36E540)
#define KEDHGJIILLI_DFFCHNLKELO_OFFSET UNITYSDK_OFFSET(0xB36E3F0)
#define KEDHGJIILLI_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB36E4B0)
#define KEDHGJIILLI_JCJACDENGNE_OFFSET UNITYSDK_OFFSET(0xB36E360)
#define KEDHGJIILLI_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xB36E210)
#define KEDHGJIILLI_PJPNKHDIPNG_OFFSET UNITYSDK_OFFSET(0xB36E280)

inline static constexpr unsigned int KEDHGJIILLI_TypeDefinitionIndex = 69759;

	class KEDHGJIILLI : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::CharacterEffect*>* PCMAIHOKINF; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEDHGJIILLI_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEDHGJIILLI_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void PJPNKHDIPNG(::RPG::Client::CharacterEffect* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CharacterEffect*))((::PBYTE)hIl2Cpp + KEDHGJIILLI_PJPNKHDIPNG_OFFSET))(this, a1);
		}

		::System::Void JCJACDENGNE(::RPG::Client::CharacterEffect* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CharacterEffect*))((::PBYTE)hIl2Cpp + KEDHGJIILLI_JCJACDENGNE_OFFSET))(this, a1);
		}

		::System::Void DFFCHNLKELO(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KEDHGJIILLI_DFFCHNLKELO_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEDHGJIILLI_DISPOSE_OFFSET))(this);
		}

	};
