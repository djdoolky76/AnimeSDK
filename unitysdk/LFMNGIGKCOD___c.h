#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class CinemaSingleBeatMapConfig; }
namespace System { template <typename T> class Func_1; }

#define LFMNGIGKCOD___C_LPCHADDECLC_OFFSET UNITYSDK_OFFSET(0x1524AD30)
#define LFMNGIGKCOD___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1524ACE0)
#define LFMNGIGKCOD___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1524AD20)

inline static constexpr unsigned int LFMNGIGKCOD___c_TypeDefinitionIndex = 41435;

class LFMNGIGKCOD___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(LFMNGIGKCOD___c_TypeDefinitionIndex)->GetStaticField(0x46910);
	}
	static ::System::Func_1<::MoleMole::CinemaSingleBeatMapConfig*>** StaticGet___9__2_0()
	{
		return (::System::Func_1<::MoleMole::CinemaSingleBeatMapConfig*>**)Il2CppClass::FromTypeDefinitionIndex(LFMNGIGKCOD___c_TypeDefinitionIndex)->GetStaticField(0x46918);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LFMNGIGKCOD___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFMNGIGKCOD___C__CTOR_OFFSET))(this);
	}

	::MoleMole::CinemaSingleBeatMapConfig* LPCHADDECLC()
	{
		return ((::MoleMole::CinemaSingleBeatMapConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + LFMNGIGKCOD___C_LPCHADDECLC_OFFSET))(this);
	}
};
