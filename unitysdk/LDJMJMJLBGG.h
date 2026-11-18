#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigHollowChessboardCamera; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define LDJMJMJLBGG_CCGLEFMABEA_OFFSET UNITYSDK_OFFSET(0xD4202B0)
#define LDJMJMJLBGG_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0xD420450)
#define LDJMJMJLBGG_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0xD4204A0)
#define LDJMJMJLBGG_FABNEHAKKBM_OFFSET UNITYSDK_OFFSET(0xD4200D0)
#define LDJMJMJLBGG_GBEKKNEJBOG_OFFSET UNITYSDK_OFFSET(0xD41FD70)

inline static constexpr unsigned int LDJMJMJLBGG_TypeDefinitionIndex = 90525;

class LDJMJMJLBGG : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigHollowChessboardCamera** StaticGet_CBOKGMFFGOI()
	{
		return (::MoleMole::Config::ConfigHollowChessboardCamera**)Il2CppClass::FromTypeDefinitionIndex(LDJMJMJLBGG_TypeDefinitionIndex)->GetStaticField(0x32AA0);
	}

	static ::System::Void GBEKKNEJBOG(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + LDJMJMJLBGG_GBEKKNEJBOG_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
	}

	static ::MoleMole::Config::ConfigHollowChessboardCamera* FABNEHAKKBM()
	{
		return ((::MoleMole::Config::ConfigHollowChessboardCamera*(*)())((::PBYTE)hIl2Cpp + LDJMJMJLBGG_FABNEHAKKBM_OFFSET))();
	}

	static ::System::Void CPDFCDONECK(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + LDJMJMJLBGG_CPDFCDONECK_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
	}

	static ::System::Void CCGLEFMABEA()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LDJMJMJLBGG_CCGLEFMABEA_OFFSET))();
	}

	static ::System::Void DGMLFELCAIO(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ, ::System::Action_1<::System::String*>* MGAKJHJAGJI, ::System::String* GDGGMIJHAJJ)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + LDJMJMJLBGG_DGMLFELCAIO_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ, MGAKJHJAGJI, GDGGMIJHAJJ);
	}
};
