#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }

#define FBHDOHEHAJI_CTOR_OFFSET UNITYSDK_OFFSET(0x1EC69CE0)
#define FBHDOHEHAJI_FNCNMCEOALF_OFFSET UNITYSDK_OFFSET(0x1EC69B80)
#define FBHDOHEHAJI_LNHAOGJFKJE_OFFSET UNITYSDK_OFFSET(0x1EC69C50)

	class FBHDOHEHAJI : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBHDOHEHAJI_CTOR_OFFSET))(this);
		}

		::System::Object* FNCNMCEOALF(::System::Object* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FBHDOHEHAJI_FNCNMCEOALF_OFFSET))(this, a1);
		}

		::System::Object* LNHAOGJFKJE(::System::Object* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FBHDOHEHAJI_LNHAOGJFKJE_OFFSET))(this, a1);
		}

	};
