#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { template <typename T> class Func_1; }

#define GMGGBIBGMLE_CTOR_OFFSET UNITYSDK_OFFSET(0x16A53A30)

inline static constexpr unsigned int GMGGBIBGMLE_TypeDefinitionIndex = 70501;

	class GMGGBIBGMLE : public ::System::Object
	{
	public:
		::System::Action* FIEEBOGPOBK; // 0x10
		::System::Func_1<::System::Boolean>* FHIOCDNJPPA; // 0x18
		::System::Boolean AEEABMOELKF; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMGGBIBGMLE_CTOR_OFFSET))(this);
		}

	};
