#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class BFFHHODMHKH;
namespace System { class Action; }

#define KKJKAKMOCJC_MFELNPONECI_FCPJALGMBEK_OFFSET UNITYSDK_OFFSET(0x12695EC0)
#define KKJKAKMOCJC_MFELNPONECI__CTOR_OFFSET UNITYSDK_OFFSET(0x126955E0)

inline static constexpr unsigned int KKJKAKMOCJC_MFELNPONECI_TypeDefinitionIndex = 66241;

class KKJKAKMOCJC_MFELNPONECI : public ::System::Object
{
public:
	::Foundation::AssetPath PJNJFACFJHP; // 0x10
	::System::Action* IBNICCGMILF; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKJKAKMOCJC_MFELNPONECI__CTOR_OFFSET))(this);
	}

	::System::Void FCPJALGMBEK(::BFFHHODMHKH* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::BFFHHODMHKH*))((::PBYTE)hIl2Cpp + KKJKAKMOCJC_MFELNPONECI_FCPJALGMBEK_OFFSET))(this, DFMKILICPFB);
	}
};
