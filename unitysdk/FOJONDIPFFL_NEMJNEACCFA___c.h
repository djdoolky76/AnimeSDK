#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DIAEPBNFKBO;
namespace MoleMole::LevelPerform { class DirectKillShakeSetting; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }

#define FOJONDIPFFL_NEMJNEACCFA___C_BBAAAGPAPAM_OFFSET UNITYSDK_OFFSET(0x116C3F70)
#define FOJONDIPFFL_NEMJNEACCFA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x116C3F20)
#define FOJONDIPFFL_NEMJNEACCFA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x116C3F60)

inline static constexpr unsigned int FOJONDIPFFL_NEMJNEACCFA___c_TypeDefinitionIndex = 55438;

class FOJONDIPFFL_NEMJNEACCFA___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(FOJONDIPFFL_NEMJNEACCFA___c_TypeDefinitionIndex)->GetStaticField(0x40940);
	}
	static ::System::Func_3<::DIAEPBNFKBO*, ::System::String*, ::MoleMole::LevelPerform::DirectKillShakeSetting*>** StaticGet___9__18_0()
	{
		return (::System::Func_3<::DIAEPBNFKBO*, ::System::String*, ::MoleMole::LevelPerform::DirectKillShakeSetting*>**)Il2CppClass::FromTypeDefinitionIndex(FOJONDIPFFL_NEMJNEACCFA___c_TypeDefinitionIndex)->GetStaticField(0x40948);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOJONDIPFFL_NEMJNEACCFA___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOJONDIPFFL_NEMJNEACCFA___C__CTOR_OFFSET))(this);
	}

	::MoleMole::LevelPerform::DirectKillShakeSetting* BBAAAGPAPAM(::DIAEPBNFKBO* GBELIHABEDH, ::System::String* DGBFIPIONCF)
	{
		return ((::MoleMole::LevelPerform::DirectKillShakeSetting*(*)(::PVOID, ::DIAEPBNFKBO*, ::System::String*))((::PBYTE)hIl2Cpp + FOJONDIPFFL_NEMJNEACCFA___C_BBAAAGPAPAM_OFFSET))(this, GBELIHABEDH, DGBFIPIONCF);
	}
};
