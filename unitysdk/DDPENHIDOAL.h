#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/OLPPOJJADDO.h"

class CFHOEGBMPKN;
template <typename T> class DBMAHDDGMHM_1;

#define DDPENHIDOAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x183327A0)
#define DDPENHIDOAL_PGKDINGDONO_OFFSET UNITYSDK_OFFSET(0x18332AA0)
#define DDPENHIDOAL__CTOR_OFFSET UNITYSDK_OFFSET(0x18332610)

inline static constexpr unsigned int DDPENHIDOAL_TypeDefinitionIndex = 54559;

class DDPENHIDOAL : public ::System::Object
{
public:
	::CFHOEGBMPKN* EDKGMLLKLJM; // 0x10
	::DBMAHDDGMHM_1<::System::Int32>* NOCEJKJAHJC; // 0x18
	::DBMAHDDGMHM_1<::System::Boolean>* KNOAONAGEDK; // 0x20
	::DBMAHDDGMHM_1<::System::Boolean>* ODKGAHDFMAP; // 0x28

	::System::Void _ctor(::System::Int32 ADFNJNOELMG, ::System::Boolean ILGBBIMEBDA, ::System::Boolean DKOBOLDOJEG)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + DDPENHIDOAL__CTOR_OFFSET))(this, ADFNJNOELMG, ILGBBIMEBDA, DKOBOLDOJEG);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDPENHIDOAL_DISPOSE_OFFSET))(this);
	}

	::OLPPOJJADDO PGKDINGDONO()
	{
		return ((::OLPPOJJADDO(*)(::PVOID))((::PBYTE)hIl2Cpp + DDPENHIDOAL_PGKDINGDONO_OFFSET))(this);
	}
};
