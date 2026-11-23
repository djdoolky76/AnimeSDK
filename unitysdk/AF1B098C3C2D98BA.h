#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/AF1B098C3C2D98BA_F279EF35B945D551.h"

#define AF1B098C3C2D98BA_B082E25502ACA35A_OFFSET UNITYSDK_OFFSET(0x16A4160)

inline static constexpr unsigned int AF1B098C3C2D98BA_TypeDefinitionIndex = 4978;

class AF1B098C3C2D98BA : public ::System::Object
{
public:
	static ::AF1B098C3C2D98BA_F279EF35B945D551 B082E25502ACA35A()
	{
		return ((::AF1B098C3C2D98BA_F279EF35B945D551(*)())((::PBYTE)hIl2Cpp + AF1B098C3C2D98BA_B082E25502ACA35A_OFFSET))();
	}
};
