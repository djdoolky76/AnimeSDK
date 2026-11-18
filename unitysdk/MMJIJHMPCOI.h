#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigDigibooNewbie; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MMJIJHMPCOI_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0x17D525C0)
#define MMJIJHMPCOI_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0x17D528A0)
#define MMJIJHMPCOI_IHBIGOGKFAH_OFFSET UNITYSDK_OFFSET(0x17D522E0)

inline static constexpr unsigned int MMJIJHMPCOI_TypeDefinitionIndex = 57953;

class MMJIJHMPCOI : public ::System::Object
{
public:
	static ::MoleMole::ConfigDigibooNewbie** StaticGet_LDBJANPKINO()
	{
		return (::MoleMole::ConfigDigibooNewbie**)Il2CppClass::FromTypeDefinitionIndex(MMJIJHMPCOI_TypeDefinitionIndex)->GetStaticField(0x4F850);
	}

	static ::MoleMole::ConfigDigibooNewbie* IHBIGOGKFAH()
	{
		return ((::MoleMole::ConfigDigibooNewbie*(*)())((::PBYTE)hIl2Cpp + MMJIJHMPCOI_IHBIGOGKFAH_OFFSET))();
	}

	static ::System::Void CPDFCDONECK(::System::Boolean EBAJLMBGMFE, ::System::Action* IBNICCGMILF, ::System::Boolean KGHNCPCMBIJ)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + MMJIJHMPCOI_CPDFCDONECK_OFFSET))(EBAJLMBGMFE, IBNICCGMILF, KGHNCPCMBIJ);
	}

	static ::System::Void DGMLFELCAIO(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ, ::System::Action_1<::System::String*>* MGAKJHJAGJI, ::System::String* GDGGMIJHAJJ)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + MMJIJHMPCOI_DGMLFELCAIO_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ, MGAKJHJAGJI, GDGGMIJHAJJ);
	}
};
