#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigHollowChessboardParticle; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define NDCLCJEPNIK_CCGLEFMABEA_OFFSET UNITYSDK_OFFSET(0x13135DB0)
#define NDCLCJEPNIK_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0x13135B80)
#define NDCLCJEPNIK_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0x13135A50)
#define NDCLCJEPNIK_LCCPCPMIEMG_OFFSET UNITYSDK_OFFSET(0x13135F50)
#define NDCLCJEPNIK_NFMNEDAFCEC_OFFSET UNITYSDK_OFFSET(0x13135BD0)

inline static constexpr unsigned int NDCLCJEPNIK_TypeDefinitionIndex = 63224;

class NDCLCJEPNIK : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigHollowChessboardParticle** StaticGet_CEJENBBHBBG()
	{
		return (::MoleMole::Config::ConfigHollowChessboardParticle**)Il2CppClass::FromTypeDefinitionIndex(NDCLCJEPNIK_TypeDefinitionIndex)->GetStaticField(0x42470);
	}

	static ::System::Void DGMLFELCAIO(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ, ::System::Action_1<::System::String*>* MGAKJHJAGJI, ::System::String* GDGGMIJHAJJ)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + NDCLCJEPNIK_DGMLFELCAIO_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ, MGAKJHJAGJI, GDGGMIJHAJJ);
	}

	static ::MoleMole::Config::ConfigHollowChessboardParticle* NFMNEDAFCEC()
	{
		return ((::MoleMole::Config::ConfigHollowChessboardParticle*(*)())((::PBYTE)hIl2Cpp + NDCLCJEPNIK_NFMNEDAFCEC_OFFSET))();
	}

	static ::System::Void LCCPCPMIEMG(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + NDCLCJEPNIK_LCCPCPMIEMG_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
	}

	static ::System::Void CCGLEFMABEA()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NDCLCJEPNIK_CCGLEFMABEA_OFFSET))();
	}

	static ::System::Void CPDFCDONECK(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + NDCLCJEPNIK_CPDFCDONECK_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
	}
};
