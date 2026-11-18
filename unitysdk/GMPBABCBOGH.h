#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigLogicMovementRegistry; }
namespace MoleMole::Config { class ConfigMovement; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GMPBABCBOGH_BBAECOMOFLL_OFFSET UNITYSDK_OFFSET(0x179FE530)
#define GMPBABCBOGH_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0x179FEA50)
#define GMPBABCBOGH_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0x179FE960)
#define GMPBABCBOGH_HDFPPLOKFNC_OFFSET UNITYSDK_OFFSET(0x179FE210)
#define GMPBABCBOGH_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x179FE490)
#define GMPBABCBOGH__CCTOR_OFFSET UNITYSDK_OFFSET(0x179FE200)

inline static constexpr unsigned int GMPBABCBOGH_TypeDefinitionIndex = 60724;

class GMPBABCBOGH : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigMovement*>** StaticGet_PAMHEKLBNCD()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigMovement*>**)Il2CppClass::FromTypeDefinitionIndex(GMPBABCBOGH_TypeDefinitionIndex)->GetStaticField(0x3DDC0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GMPBABCBOGH__CCTOR_OFFSET))();
	}

	static ::MoleMole::Config::ConfigMovement* HDFPPLOKFNC(::System::String* KEGJECMIADD)
	{
		return ((::MoleMole::Config::ConfigMovement*(*)(::System::String*))((::PBYTE)hIl2Cpp + GMPBABCBOGH_HDFPPLOKFNC_OFFSET))(KEGJECMIADD);
	}

	static ::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GMPBABCBOGH_NPOLNFDBOOD_OFFSET))();
	}

	static ::System::Void BBAECOMOFLL(::System::Collections::Generic::List_1<::MoleMole::Config::ConfigLogicMovementRegistry*>* DJGOOALFABM)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::MoleMole::Config::ConfigLogicMovementRegistry*>*))((::PBYTE)hIl2Cpp + GMPBABCBOGH_BBAECOMOFLL_OFFSET))(DJGOOALFABM);
	}

	static ::System::Void DGMLFELCAIO(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ, ::System::Action_1<::System::String*>* MGAKJHJAGJI, ::System::String* GDGGMIJHAJJ)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + GMPBABCBOGH_DGMLFELCAIO_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ, MGAKJHJAGJI, GDGGMIJHAJJ);
	}

	static ::System::Void CPDFCDONECK(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + GMPBABCBOGH_CPDFCDONECK_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
	}
};
