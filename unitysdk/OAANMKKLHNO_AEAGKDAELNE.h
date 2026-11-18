#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class LevelGlobalCounterstrokeConfig; }
namespace System { class Action; }

#define OAANMKKLHNO_AEAGKDAELNE_OKKMJKOAIKG_OFFSET UNITYSDK_OFFSET(0x15FBD890)
#define OAANMKKLHNO_AEAGKDAELNE__CTOR_OFFSET UNITYSDK_OFFSET(0x15FBD880)

inline static constexpr unsigned int OAANMKKLHNO_AEAGKDAELNE_TypeDefinitionIndex = 91270;

class OAANMKKLHNO_AEAGKDAELNE : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OAANMKKLHNO_AEAGKDAELNE__CTOR_OFFSET))(this);
	}

	::System::Void OKKMJKOAIKG(::MoleMole::Config::LevelGlobalCounterstrokeConfig* NGLKIKLLLFL)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::LevelGlobalCounterstrokeConfig*))((::PBYTE)hIl2Cpp + OAANMKKLHNO_AEAGKDAELNE_OKKMJKOAIKG_OFFSET))(this, NGLKIKLLLFL);
	}
};
