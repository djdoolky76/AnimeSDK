#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DJHLLDMLOMK;
namespace System { class Exception; }
namespace System { template <typename T> class Action_1; }
namespace System::Net::Sockets { class Socket; }

#define DJHLLDMLOMK_BBJJHEFDCPI_IJCADNBEPIJ_OFFSET UNITYSDK_OFFSET(0x1329F620)
#define DJHLLDMLOMK_BBJJHEFDCPI__CTOR_OFFSET UNITYSDK_OFFSET(0x1329F610)

inline static constexpr unsigned int DJHLLDMLOMK_BBJJHEFDCPI_TypeDefinitionIndex = 58889;

class DJHLLDMLOMK_BBJJHEFDCPI : public ::System::Object
{
public:
	::DJHLLDMLOMK* KLHPEBKNIFB; // 0x10
	::System::Action_1<::System::Int32>* DIOMMCOEAMP; // 0x18
	::System::Net::Sockets::Socket* GKFBHNEDHOI; // 0x20
	::System::UInt16 HEMGNHELNKP; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJHLLDMLOMK_BBJJHEFDCPI__CTOR_OFFSET))(this);
	}

	::System::Void IJCADNBEPIJ(::System::Int32 DMHCNCHBEGK, ::System::Exception* KMDHKNFMCAE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Exception*))((::PBYTE)hIl2Cpp + DJHLLDMLOMK_BBJJHEFDCPI_IJCADNBEPIJ_OFFSET))(this, DMHCNCHBEGK, KMDHKNFMCAE);
	}
};
