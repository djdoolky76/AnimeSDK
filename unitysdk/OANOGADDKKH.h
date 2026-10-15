#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/LimaoNewsUserType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class OANOGADDKKH;
namespace System { class String; }

#define OANOGADDKKH_CTOR_OFFSET UNITYSDK_OFFSET(0x1D24E5C0)
#define OANOGADDKKH_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D24E3A0)

inline static constexpr unsigned int OANOGADDKKH_TypeDefinitionIndex = 13903;

	class OANOGADDKKH : public ::System::Object
	{
	public:
		::System::String* DKCPEGMOAHB; // 0x10
		::RPG::Client::TextID NJPLKACOMMM; // 0x18
		::RPG::GameCore::LimaoNewsUserType JEJNHIBLJNM; // 0x28
		::System::UInt32 JAKLCIIEDON; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OANOGADDKKH_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::OANOGADDKKH* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::OANOGADDKKH*))((::PBYTE)hIl2Cpp + OANOGADDKKH_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
