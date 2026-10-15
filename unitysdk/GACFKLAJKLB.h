#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AGAEEKDKGBN;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GACFKLAJKLB_BEKHEAJPCLG_OFFSET UNITYSDK_OFFSET(0x1C627E70)
#define GACFKLAJKLB_CTOR_OFFSET UNITYSDK_OFFSET(0x1C627F80)
#define GACFKLAJKLB_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0x1C627DD0)

	class GACFKLAJKLB : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::AGAEEKDKGBN*>* OCPPDGPAEFM; // 0x10
		::System::UInt32 KNEFCBAALDF; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GACFKLAJKLB_CTOR_OFFSET))(this);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GACFKLAJKLB_PJPFIHFAHGO_OFFSET))(this);
		}

		::AGAEEKDKGBN* BEKHEAJPCLG(::System::Int32 a1)
		{
			return ((::AGAEEKDKGBN*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GACFKLAJKLB_BEKHEAJPCLG_OFFSET))(this, a1);
		}

	};
