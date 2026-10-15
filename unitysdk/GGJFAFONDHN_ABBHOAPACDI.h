#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GGJFAFONDHN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }

#define GGJFAFONDHN_ABBHOAPACDI_ABKBOGIGAEH_OFFSET UNITYSDK_OFFSET(0x15A01B20)
#define GGJFAFONDHN_ABBHOAPACDI_CTOR_OFFSET UNITYSDK_OFFSET(0x15A01A50)
#define GGJFAFONDHN_ABBHOAPACDI_LBJLOBHFGEH_OFFSET UNITYSDK_OFFSET(0x15A01AA0)

inline static constexpr unsigned int GGJFAFONDHN_ABBHOAPACDI_TypeDefinitionIndex = 49515;

	class GGJFAFONDHN_ABBHOAPACDI : public ::System::Object
	{
	public:
		::System::String* LFLPOOCDHDP; // 0x10
		::System::Collections::Generic::Stack_1<::GGJFAFONDHN*>* PLPNIKALEBA; // 0x18
		::System::Int32 GLLLIKDBLCL; // 0x20
		::System::Void _ctor(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + GGJFAFONDHN_ABBHOAPACDI_CTOR_OFFSET))(this, a1, a2);
		}

		::GGJFAFONDHN* LBJLOBHFGEH()
		{
			return ((::GGJFAFONDHN*(*)(::PVOID))((::PBYTE)hIl2Cpp + GGJFAFONDHN_ABBHOAPACDI_LBJLOBHFGEH_OFFSET))(this);
		}

		::System::Void ABKBOGIGAEH(::GGJFAFONDHN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GGJFAFONDHN*))((::PBYTE)hIl2Cpp + GGJFAFONDHN_ABBHOAPACDI_ABKBOGIGAEH_OFFSET))(this, a1);
		}

	};
