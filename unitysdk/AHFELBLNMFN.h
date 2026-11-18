#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigHollowChessboardEntityBehavior; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define AHFELBLNMFN_BKMMFNBAKIG_OFFSET UNITYSDK_OFFSET(0x135E28D0)
#define AHFELBLNMFN_BLINLECJGPA_OFFSET UNITYSDK_OFFSET(0x135E2290)
#define AHFELBLNMFN_CCGLEFMABEA_OFFSET UNITYSDK_OFFSET(0x135E25F0)
#define AHFELBLNMFN_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0x135E2240)
#define AHFELBLNMFN_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0x135E2790)

inline static constexpr unsigned int AHFELBLNMFN_TypeDefinitionIndex = 67276;

class AHFELBLNMFN : public ::System::Object
{
public:
	static ::MoleMole::ConfigHollowChessboardEntityBehavior** StaticGet_GNAEMFAKLKJ()
	{
		return (::MoleMole::ConfigHollowChessboardEntityBehavior**)Il2CppClass::FromTypeDefinitionIndex(AHFELBLNMFN_TypeDefinitionIndex)->GetStaticField(0x4B420);
	}

	static ::System::Void CPDFCDONECK(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + AHFELBLNMFN_CPDFCDONECK_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
	}

	static ::System::Void CCGLEFMABEA()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AHFELBLNMFN_CCGLEFMABEA_OFFSET))();
	}

	static ::System::Void DGMLFELCAIO(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ, ::System::Action_1<::System::String*>* MGAKJHJAGJI, ::System::String* GDGGMIJHAJJ)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + AHFELBLNMFN_DGMLFELCAIO_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ, MGAKJHJAGJI, GDGGMIJHAJJ);
	}

	static ::System::Void BLINLECJGPA(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + AHFELBLNMFN_BLINLECJGPA_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
	}

	static ::MoleMole::ConfigHollowChessboardEntityBehavior* BKMMFNBAKIG()
	{
		return ((::MoleMole::ConfigHollowChessboardEntityBehavior*(*)())((::PBYTE)hIl2Cpp + AHFELBLNMFN_BKMMFNBAKIG_OFFSET))();
	}
};
