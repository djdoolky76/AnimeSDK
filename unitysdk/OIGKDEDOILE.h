#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define OIGKDEDOILE_CCGGOEJMOPP_OFFSET UNITYSDK_OFFSET(0x11B35660)
#define OIGKDEDOILE_DBEMGEKEAAO_OFFSET UNITYSDK_OFFSET(0x11B35670)
#define OIGKDEDOILE_HDKAECAOGCI_OFFSET UNITYSDK_OFFSET(0x11B35700)
#define OIGKDEDOILE__CTOR_OFFSET UNITYSDK_OFFSET(0x11B355E0)

inline static constexpr unsigned int OIGKDEDOILE_TypeDefinitionIndex = 55503;

class OIGKDEDOILE : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::OIGKDEDOILE*>* GLCOCNJJLKK; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIGKDEDOILE__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::OIGKDEDOILE*>* CCGGOEJMOPP()
	{
		return ((::System::Collections::Generic::List_1<::OIGKDEDOILE*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OIGKDEDOILE_CCGGOEJMOPP_OFFSET))(this);
	}

	::OIGKDEDOILE* DBEMGEKEAAO(::OIGKDEDOILE* HHIJHDFHPOI)
	{
		return ((::OIGKDEDOILE*(*)(::PVOID, ::OIGKDEDOILE*))((::PBYTE)hIl2Cpp + OIGKDEDOILE_DBEMGEKEAAO_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Int32 HDKAECAOGCI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OIGKDEDOILE_HDKAECAOGCI_OFFSET))(this);
	}
};
