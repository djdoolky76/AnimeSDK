#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ChenLing/ChenLingAIState.h"
#include "unitysdk/System/Object.h"
class EPGHICGCMAJ;
class KBDKJPLJKHE;

#define EHIKIJMCHKC_CTOR_OFFSET UNITYSDK_OFFSET(0x1F4E5E90)

inline static constexpr unsigned int EHIKIJMCHKC_TypeDefinitionIndex = 44799;

	class EHIKIJMCHKC : public ::System::Object
	{
	public:
		::KBDKJPLJKHE* FKIBGPJNCIJ; // 0x10
		::EPGHICGCMAJ* LAEFPCAIHEJ; // 0x18
		::System::Int32 IKCBJEIEJGC; // 0x20
		::System::Single NAJMCEJEHDC; // 0x24
		::RPG::Client::LittleGame::ChenLing::ChenLingAIState MEPFOEEGBEA; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHIKIJMCHKC_CTOR_OFFSET))(this);
		}

	};
