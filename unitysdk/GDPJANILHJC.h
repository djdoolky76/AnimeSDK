#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class MonsterSpecialIdleConfig; }
namespace MoleMole { class MonsterSpecialIdleEntry; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define GDPJANILHJC_CJDLFPJOMPK_OFFSET UNITYSDK_OFFSET(0x116E5EE0)
#define GDPJANILHJC_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0x116E5CC0)
#define GDPJANILHJC_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0x116E5BD0)

inline static constexpr unsigned int GDPJANILHJC_TypeDefinitionIndex = 47439;

class GDPJANILHJC : public ::System::Object
{
public:
	static ::MoleMole::MonsterSpecialIdleConfig** StaticGet_CEJENBBHBBG()
	{
		return (::MoleMole::MonsterSpecialIdleConfig**)Il2CppClass::FromTypeDefinitionIndex(GDPJANILHJC_TypeDefinitionIndex)->GetStaticField(0x40A30);
	}

	static ::System::Void DGMLFELCAIO(::System::Single OGKEBCPEPED, ::System::Action_1<::System::Single>* HAAJELGELCC, ::System::Action_1<::System::String*>* NPFIONPDFED, ::System::String* HIAIKHDFCLN)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + GDPJANILHJC_DGMLFELCAIO_OFFSET))(OGKEBCPEPED, HAAJELGELCC, NPFIONPDFED, HIAIKHDFCLN);
	}

	static ::System::Void CPDFCDONECK(::System::Boolean EBAJLMBGMFE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + GDPJANILHJC_CPDFCDONECK_OFFSET))(EBAJLMBGMFE, IBNICCGMILF);
	}

	static ::System::Boolean CJDLFPJOMPK(::System::Int32 GIAOKGFENJD, ::System::Int32 DDNJJNELHMN, ::MoleMole::MonsterSpecialIdleEntry*& AAIJGGIEOGK)
	{
		return ((::System::Boolean(*)(::System::Int32, ::System::Int32, ::MoleMole::MonsterSpecialIdleEntry*&))((::PBYTE)hIl2Cpp + GDPJANILHJC_CJDLFPJOMPK_OFFSET))(GIAOKGFENJD, DDNJJNELHMN, AAIJGGIEOGK);
	}
};
