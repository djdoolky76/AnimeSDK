#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AKPPOAIOOHN.h"
#include "unitysdk/System/Object.h"
class IJFIHJJPHNA;
class KFPLECNMLNF;
class PHEHGMEOKMB;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOCPBOFGDCP_CTOR_OFFSET UNITYSDK_OFFSET(0x1C750240)

	class MOCPBOFGDCP : public ::System::Object
	{
	public:
		::IJFIHJJPHNA* GGKGFABFGFE; // 0x10
		::System::Collections::Generic::List_1<::System::Int32>* LAKGPHKLEFD; // 0x18
		::KFPLECNMLNF* NCJDFFKKIMM; // 0x20
		::System::Collections::Generic::Dictionary_2<::AKPPOAIOOHN, ::PHEHGMEOKMB*>* AGBOAMJIAFF; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOCPBOFGDCP_CTOR_OFFSET))(this);
		}

	};
