#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CKOKHOODKMN_GJNMIGLCPHN_OFFSET UNITYSDK_OFFSET(0x159DF8C0)
#define CKOKHOODKMN_NBAPFDMBCJP_OFFSET UNITYSDK_OFFSET(0x159DF880)

inline static constexpr unsigned int CKOKHOODKMN_TypeDefinitionIndex = 71179;

class CKOKHOODKMN : public ::System::Object
{
public:
	// static const ::System::Int32 HJKNNBEOPDJ = 0xFB771; // 0x0
	// static const ::System::Int32 NBGFLDCJJAG = 0xF4C0F; // 0x0
	// static const ::System::Int32 KALBGAANNEE = 0x75AA; // 0x0
	// static const ::System::Int32 CFHMKAPLOLP = 0x2581; // 0x0
	// static const ::System::Int32 AFANBJEFIFG = 0x5F77B8E; // 0x0
	// static const ::System::Int32 JLDFHAGKCOJ = 0x5F77B8F; // 0x0
	// static const ::System::Int32 BCOJOADNAHH = 0x5F77B90; // 0x0
	// static const ::System::Int32 NKOAFIGFHBE = 0x9881CD; // 0x0
	// static const ::System::String* AFIIHMEMCNA; // 0x0

	static ::System::Int32 NBAPFDMBCJP()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CKOKHOODKMN_NBAPFDMBCJP_OFFSET))();
	}

	static ::System::Int32 GJNMIGLCPHN()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CKOKHOODKMN_GJNMIGLCPHN_OFFSET))();
	}
};
