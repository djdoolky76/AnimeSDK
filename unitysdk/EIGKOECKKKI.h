#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class JsonEnum; }

#define EIGKOECKKKI_CTOR_OFFSET UNITYSDK_OFFSET(0x154BA850)
#define EIGKOECKKKI_DAENBNOKBKK_1_OFFSET UNITYSDK_OFFSET(0x154BA660)
#define EIGKOECKKKI_DAENBNOKBKK_OFFSET UNITYSDK_OFFSET(0x154BA550)

inline static constexpr unsigned int EIGKOECKKKI_TypeDefinitionIndex = 53677;

	class EIGKOECKKKI : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIGKOECKKKI_CTOR_OFFSET))(this);
		}

		static ::System::UInt32 DAENBNOKBKK(::RPG::GameCore::JsonEnum* a1)
		{
			return ((::System::UInt32(*)(::RPG::GameCore::JsonEnum*))((::PBYTE)hIl2Cpp + EIGKOECKKKI_DAENBNOKBKK_OFFSET))(a1);
		}

		static ::System::UInt32 DAENBNOKBKK_1(::Il2CppArray<::RPG::GameCore::JsonEnum*>* a1)
		{
			return ((::System::UInt32(*)(::Il2CppArray<::RPG::GameCore::JsonEnum*>*))((::PBYTE)hIl2Cpp + EIGKOECKKKI_DAENBNOKBKK_1_OFFSET))(a1);
		}

	};
