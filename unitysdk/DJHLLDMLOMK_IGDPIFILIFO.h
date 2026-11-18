#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CFMGIKJLMBJ;
class IANDOOLAALI;
namespace System { class Exception; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define DJHLLDMLOMK_IGDPIFILIFO_COKNIICCODC_OFFSET UNITYSDK_OFFSET(0x15A4C850)
#define DJHLLDMLOMK_IGDPIFILIFO_DABGFBDHOGD_OFFSET UNITYSDK_OFFSET(0x15A4CA70)
#define DJHLLDMLOMK_IGDPIFILIFO__CTOR_OFFSET UNITYSDK_OFFSET(0x15A4C840)

inline static constexpr unsigned int DJHLLDMLOMK_IGDPIFILIFO_TypeDefinitionIndex = 58890;

class DJHLLDMLOMK_IGDPIFILIFO : public ::System::Object
{
public:
	::CFMGIKJLMBJ* NAPFALLANDL; // 0x10
	::System::Action_2<::System::Int32, ::System::Exception*>* HKEBHFKHBCC; // 0x18
	::System::UInt32 BIPPOLPHOEN; // 0x20
	::System::UInt16 CIANGGGNGKF; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJHLLDMLOMK_IGDPIFILIFO__CTOR_OFFSET))(this);
	}

	static ::DJHLLDMLOMK_IGDPIFILIFO* COKNIICCODC(::IANDOOLAALI* OEOICDOKIIB, ::System::Action_2<::System::Int32, ::System::Exception*>* HKEBHFKHBCC)
	{
		return ((::DJHLLDMLOMK_IGDPIFILIFO*(*)(::IANDOOLAALI*, ::System::Action_2<::System::Int32, ::System::Exception*>*))((::PBYTE)hIl2Cpp + DJHLLDMLOMK_IGDPIFILIFO_COKNIICCODC_OFFSET))(OEOICDOKIIB, HKEBHFKHBCC);
	}

	::System::Void DABGFBDHOGD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJHLLDMLOMK_IGDPIFILIFO_DABGFBDHOGD_OFFSET))(this);
	}
};
