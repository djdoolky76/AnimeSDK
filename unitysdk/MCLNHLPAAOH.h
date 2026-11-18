#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class PGMLOLJCFEE;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MCLNHLPAAOH_DELFKOPBIGI_OFFSET UNITYSDK_OFFSET(0x1959CD10)
#define MCLNHLPAAOH_GGANHJMAGIP_OFFSET UNITYSDK_OFFSET(0x1959CDC0)
#define MCLNHLPAAOH_GILALOIEGDC_OFFSET UNITYSDK_OFFSET(0x1959CEA0)
#define MCLNHLPAAOH_JCGAOBOEGJL_OFFSET UNITYSDK_OFFSET(0x1959CC30)
#define MCLNHLPAAOH__CTOR_OFFSET UNITYSDK_OFFSET(0x1959CB30)

inline static constexpr unsigned int MCLNHLPAAOH_TypeDefinitionIndex = 17366;

class MCLNHLPAAOH : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::Foundation::AssetPath, ::PGMLOLJCFEE*>* GCMFEJCILIJ; // 0x10
	::System::Collections::Generic::Dictionary_2<::Foundation::AssetPath, ::PGMLOLJCFEE*>* HMBADGKPING; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCLNHLPAAOH__CTOR_OFFSET))(this);
	}

	::System::Boolean JCGAOBOEGJL(::Foundation::AssetPath OIIHCACKLHD, ::PGMLOLJCFEE*& MJCGNDNIJLK)
	{
		return ((::System::Boolean(*)(::PVOID, ::Foundation::AssetPath, ::PGMLOLJCFEE*&))((::PBYTE)hIl2Cpp + MCLNHLPAAOH_JCGAOBOEGJL_OFFSET))(this, OIIHCACKLHD, MJCGNDNIJLK);
	}

	::System::Void DELFKOPBIGI(::Foundation::AssetPath OIIHCACKLHD, ::PGMLOLJCFEE* MJCGNDNIJLK)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath, ::PGMLOLJCFEE*))((::PBYTE)hIl2Cpp + MCLNHLPAAOH_DELFKOPBIGI_OFFSET))(this, OIIHCACKLHD, MJCGNDNIJLK);
	}

	::System::Boolean GGANHJMAGIP(::Foundation::AssetPath OIIHCACKLHD, ::PGMLOLJCFEE*& HCCCMMAKFFH)
	{
		return ((::System::Boolean(*)(::PVOID, ::Foundation::AssetPath, ::PGMLOLJCFEE*&))((::PBYTE)hIl2Cpp + MCLNHLPAAOH_GGANHJMAGIP_OFFSET))(this, OIIHCACKLHD, HCCCMMAKFFH);
	}

	::System::Void GILALOIEGDC(::Foundation::AssetPath OIIHCACKLHD, ::PGMLOLJCFEE* HCCCMMAKFFH)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath, ::PGMLOLJCFEE*))((::PBYTE)hIl2Cpp + MCLNHLPAAOH_GILALOIEGDC_OFFSET))(this, OIIHCACKLHD, HCCCMMAKFFH);
	}
};
