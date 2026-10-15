#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GLPPDCIBMIH;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KGBBCBLFINB_CTOR_OFFSET UNITYSDK_OFFSET(0x1C70F400)

	class KGBBCBLFINB : public ::System::Object
	{
	public:
		::System::String* OLOIFNNLKJP; // 0x10
		::System::Collections::Generic::List_1<::GLPPDCIBMIH*>* KCNEKEGGAGG; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGBBCBLFINB_CTOR_OFFSET))(this);
		}

	};
