#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class LevelGlobalCounterstrokeConfig; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define OAANMKKLHNO_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0x1365FC20)
#define OAANMKKLHNO_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0x1365FF10)
#define OAANMKKLHNO_GACPDCEMJOA_OFFSET UNITYSDK_OFFSET(0x1365FA40)
#define OAANMKKLHNO__CCTOR_OFFSET UNITYSDK_OFFSET(0x1365FA30)

inline static constexpr unsigned int OAANMKKLHNO_TypeDefinitionIndex = 91269;

class OAANMKKLHNO : public ::System::Object
{
public:
	static ::MoleMole::Config::LevelGlobalCounterstrokeConfig** StaticGet_CEJENBBHBBG()
	{
		return (::MoleMole::Config::LevelGlobalCounterstrokeConfig**)Il2CppClass::FromTypeDefinitionIndex(OAANMKKLHNO_TypeDefinitionIndex)->GetStaticField(0x36000);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OAANMKKLHNO__CCTOR_OFFSET))();
	}

	static ::MoleMole::Config::LevelGlobalCounterstrokeConfig* GACPDCEMJOA()
	{
		return ((::MoleMole::Config::LevelGlobalCounterstrokeConfig*(*)())((::PBYTE)hIl2Cpp + OAANMKKLHNO_GACPDCEMJOA_OFFSET))();
	}

	static ::System::Void CPDFCDONECK(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + OAANMKKLHNO_CPDFCDONECK_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
	}

	static ::System::Void DGMLFELCAIO(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ, ::System::Action_1<::System::String*>* MGAKJHJAGJI, ::System::String* GDGGMIJHAJJ)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + OAANMKKLHNO_DGMLFELCAIO_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ, MGAKJHJAGJI, GDGGMIJHAJJ);
	}
};
