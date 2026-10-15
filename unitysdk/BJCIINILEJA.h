#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/PKHNHEBKPPI.h"
class FIMAFJNMOGM;
class JADKMHKLDGN;
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BJCIINILEJA_CGLACGGDGLP_OFFSET UNITYSDK_OFFSET(0xB797180)
#define BJCIINILEJA_CTOR_OFFSET UNITYSDK_OFFSET(0xB797630)
#define BJCIINILEJA_DEBIBFEPLIK_OFFSET UNITYSDK_OFFSET(0xB797390)
#define BJCIINILEJA_FLPLKDECHNC_OFFSET UNITYSDK_OFFSET(0xB797480)
#define BJCIINILEJA_GETCONTEXT_OFFSET UNITYSDK_OFFSET(0xB797100)
#define BJCIINILEJA_MMBGNNKHAEG_OFFSET UNITYSDK_OFFSET(0xB7972D0)
#define BJCIINILEJA_PJFKICFHEFH_OFFSET UNITYSDK_OFFSET(0xB797420)

	class BJCIINILEJA : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::JADKMHKLDGN*>* NOLJFCAPFHK; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJCIINILEJA_CTOR_OFFSET))(this);
		}

		::System::Object* GetContext(::System::Type* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + BJCIINILEJA_GETCONTEXT_OFFSET))(this, a1);
		}

		::System::Void CGLACGGDGLP(::JADKMHKLDGN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JADKMHKLDGN*))((::PBYTE)hIl2Cpp + BJCIINILEJA_CGLACGGDGLP_OFFSET))(this, a1);
		}

		::System::Void MMBGNNKHAEG(::JADKMHKLDGN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JADKMHKLDGN*))((::PBYTE)hIl2Cpp + BJCIINILEJA_MMBGNNKHAEG_OFFSET))(this, a1);
		}

		::System::Void DEBIBFEPLIK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJCIINILEJA_DEBIBFEPLIK_OFFSET))(this);
		}

		::System::Boolean PJFKICFHEFH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BJCIINILEJA_PJFKICFHEFH_OFFSET))(this);
		}

		::System::String* FLPLKDECHNC(::System::String* a1, ::System::Object* a2, ::FIMAFJNMOGM* a3, ::PKHNHEBKPPI a4)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::Object*, ::FIMAFJNMOGM*, ::PKHNHEBKPPI))((::PBYTE)hIl2Cpp + BJCIINILEJA_FLPLKDECHNC_OFFSET))(this, a1, a2, a3, a4);
		}

	};
