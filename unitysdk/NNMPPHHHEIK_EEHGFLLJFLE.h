#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BuildInAnimParam.h"
#include "unitysdk/System/Object.h"
class NNMPPHHHEIK_EEHGFLLJFLE;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NNMPPHHHEIK_EEHGFLLJFLE_CTOR_OFFSET UNITYSDK_OFFSET(0xBCCE360)
#define NNMPPHHHEIK_EEHGFLLJFLE_MPNEPIGKJOG_OFFSET UNITYSDK_OFFSET(0xBCCDED0)

inline static constexpr unsigned int NNMPPHHHEIK_EEHGFLLJFLE_TypeDefinitionIndex = 59037;

	class NNMPPHHHEIK_EEHGFLLJFLE : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::GameCore::BuildInAnimParam>* EGCJFEAMOCM; // 0x10
		::Il2CppArray<::System::Int32>* MJMEEOIEMMM; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNMPPHHHEIK_EEHGFLLJFLE_CTOR_OFFSET))(this);
		}

		static ::NNMPPHHHEIK_EEHGFLLJFLE* MPNEPIGKJOG()
		{
			return ((::NNMPPHHHEIK_EEHGFLLJFLE*(*)())((::PBYTE)hIl2Cpp + NNMPPHHHEIK_EEHGFLLJFLE_MPNEPIGKJOG_OFFSET))();
		}

	};
