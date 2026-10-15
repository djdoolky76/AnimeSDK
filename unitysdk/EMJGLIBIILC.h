#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ChimeraDuel/ChimeraDuelLogLevel.h"
#include "unitysdk/System/Object.h"
class DODPFANHNDG;
class KKIPKCDNPLE;
namespace System { template <typename T> class Action_1; }

#define EMJGLIBIILC_CTOR_OFFSET UNITYSDK_OFFSET(0x155460A0)

inline static constexpr unsigned int EMJGLIBIILC_TypeDefinitionIndex = 77413;

	class EMJGLIBIILC : public ::System::Object
	{
	public:
		::KKIPKCDNPLE* CIPBPDNOCKO; // 0x10
		::System::Action_1<::DODPFANHNDG*>* NPJBEKHJDNI; // 0x18
		::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelLogLevel DEBCCPPNIGH; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMJGLIBIILC_CTOR_OFFSET))(this);
		}

	};
