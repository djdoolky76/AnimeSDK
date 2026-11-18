#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigTimelineCamera; }
namespace System { template <typename T> class Func_1; }

#define BJDBLIFKPGL___C_MEMFHNGDGIN_OFFSET UNITYSDK_OFFSET(0x14C46DC0)
#define BJDBLIFKPGL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14C46D70)
#define BJDBLIFKPGL___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14C46DB0)

inline static constexpr unsigned int BJDBLIFKPGL___c_TypeDefinitionIndex = 84532;

class BJDBLIFKPGL___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(BJDBLIFKPGL___c_TypeDefinitionIndex)->GetStaticField(0x49750);
	}
	static ::System::Func_1<::MoleMole::ConfigTimelineCamera*>** StaticGet___9__3_0()
	{
		return (::System::Func_1<::MoleMole::ConfigTimelineCamera*>**)Il2CppClass::FromTypeDefinitionIndex(BJDBLIFKPGL___c_TypeDefinitionIndex)->GetStaticField(0x49758);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BJDBLIFKPGL___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJDBLIFKPGL___C__CTOR_OFFSET))(this);
	}

	::MoleMole::ConfigTimelineCamera* MEMFHNGDGIN()
	{
		return ((::MoleMole::ConfigTimelineCamera*(*)(::PVOID))((::PBYTE)hIl2Cpp + BJDBLIFKPGL___C_MEMFHNGDGIN_OFFSET))(this);
	}
};
