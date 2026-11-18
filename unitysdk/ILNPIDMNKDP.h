#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Code::Logic::Data::ScriptObject::Level { class BeatMap; }
namespace Code::Logic::Data::ScriptObject::Level { class Pattern; }
namespace Code::Logic::Data::ScriptObject::Level { class SummerEventMonsterSpawnConfig; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define ILNPIDMNKDP_CCGLEFMABEA_OFFSET UNITYSDK_OFFSET(0x13AAB830)
#define ILNPIDMNKDP_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0x13AAB880)
#define ILNPIDMNKDP_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0x13AABAB0)
#define ILNPIDMNKDP_GBDNLMFAOLB_1_OFFSET UNITYSDK_OFFSET(0x13AABE60)
#define ILNPIDMNKDP_GBDNLMFAOLB_OFFSET UNITYSDK_OFFSET(0x13AABBF0)
#define ILNPIDMNKDP_HDLGEDBNEIP_OFFSET UNITYSDK_OFFSET(0x13AABBA0)

inline static constexpr unsigned int ILNPIDMNKDP_TypeDefinitionIndex = 67649;

class ILNPIDMNKDP : public ::System::Object
{
public:
	static ::Code::Logic::Data::ScriptObject::Level::SummerEventMonsterSpawnConfig** StaticGet_CEJENBBHBBG()
	{
		return (::Code::Logic::Data::ScriptObject::Level::SummerEventMonsterSpawnConfig**)Il2CppClass::FromTypeDefinitionIndex(ILNPIDMNKDP_TypeDefinitionIndex)->GetStaticField(0x4F660);
	}
	static ::System::Boolean* StaticGet_IGEBMMPDKJI()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ILNPIDMNKDP_TypeDefinitionIndex)->GetStaticField(0x12CE0);
	}

	static ::System::Void CCGLEFMABEA()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ILNPIDMNKDP_CCGLEFMABEA_OFFSET))();
	}

	static ::System::Void DGMLFELCAIO(::System::Single OGKEBCPEPED, ::System::Action_1<::System::Single>* HAAJELGELCC, ::System::Action_1<::System::String*>* NPFIONPDFED, ::System::String* HIAIKHDFCLN)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + ILNPIDMNKDP_DGMLFELCAIO_OFFSET))(OGKEBCPEPED, HAAJELGELCC, NPFIONPDFED, HIAIKHDFCLN);
	}

	static ::System::Void HDLGEDBNEIP()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ILNPIDMNKDP_HDLGEDBNEIP_OFFSET))();
	}

	static ::System::Void CPDFCDONECK(::System::Boolean EBAJLMBGMFE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + ILNPIDMNKDP_CPDFCDONECK_OFFSET))(EBAJLMBGMFE, IBNICCGMILF);
	}

	static ::System::Boolean GBDNLMFAOLB(::System::String* MCOHLHMKLIP, ::Code::Logic::Data::ScriptObject::Level::Pattern*& JGAPMMNNBPE)
	{
		return ((::System::Boolean(*)(::System::String*, ::Code::Logic::Data::ScriptObject::Level::Pattern*&))((::PBYTE)hIl2Cpp + ILNPIDMNKDP_GBDNLMFAOLB_OFFSET))(MCOHLHMKLIP, JGAPMMNNBPE);
	}

	static ::System::Boolean GBDNLMFAOLB_1(::System::String* MCOHLHMKLIP, ::Code::Logic::Data::ScriptObject::Level::BeatMap*& EMAOHHKGEBF)
	{
		return ((::System::Boolean(*)(::System::String*, ::Code::Logic::Data::ScriptObject::Level::BeatMap*&))((::PBYTE)hIl2Cpp + ILNPIDMNKDP_GBDNLMFAOLB_1_OFFSET))(MCOHLHMKLIP, EMAOHHKGEBF);
	}
};
