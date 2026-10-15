#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FHJENMNMMKO;
namespace System { class Object; }

#define FHJENMNMMKO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E38D740)
#define FHJENMNMMKO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E38D770)
#define FHJENMNMMKO___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E38D780)

	class FHJENMNMMKO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5F6B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FHJENMNMMKO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHJENMNMMKO___C_CTOR_OFFSET))(this);
		}

		::FHJENMNMMKO* __cctor_b__18_0()
		{
			return ((::FHJENMNMMKO*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHJENMNMMKO___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
