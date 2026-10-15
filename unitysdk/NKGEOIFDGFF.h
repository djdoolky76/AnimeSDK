#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NKGEOIFDGFF_BNDCKKCCAGG_OFFSET UNITYSDK_OFFSET(0xBC33F00)
#define NKGEOIFDGFF_CTOR_OFFSET UNITYSDK_OFFSET(0xBC33F90)
#define NKGEOIFDGFF_GLOADGNOLGE_OFFSET UNITYSDK_OFFSET(0xBC33F40)
#define NKGEOIFDGFF_JMKLBMEHDCG_OFFSET UNITYSDK_OFFSET(0xBC33EB0)
#define NKGEOIFDGFF_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xBC33E60)

	class NKGEOIFDGFF : public ::System::Object
	{
	public:
		::System::Int32 HBANLBGKNKP; // 0x10
		::System::Int32 JFMEEDGDMKP; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKGEOIFDGFF_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NKGEOIFDGFF_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void JMKLBMEHDCG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKGEOIFDGFF_JMKLBMEHDCG_OFFSET))(this);
		}

		::System::Void BNDCKKCCAGG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKGEOIFDGFF_BNDCKKCCAGG_OFFSET))(this);
		}

		::System::Boolean GLOADGNOLGE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NKGEOIFDGFF_GLOADGNOLGE_OFFSET))(this);
		}

	};
