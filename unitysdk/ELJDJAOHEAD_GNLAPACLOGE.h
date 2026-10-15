#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ELJDJAOHEAD_GNLAPACLOGE_CTOR_OFFSET UNITYSDK_OFFSET(0x15525E60)

	class ELJDJAOHEAD_GNLAPACLOGE : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* LCAPAJEHGAI; // 0x10
		::System::Single JBAEAEBCALB; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELJDJAOHEAD_GNLAPACLOGE_CTOR_OFFSET))(this);
		}

	};
