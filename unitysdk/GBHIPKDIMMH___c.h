#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GBHIPKDIMMH;
namespace System { class Object; }

#define GBHIPKDIMMH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E42C460)
#define GBHIPKDIMMH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E42C4A0)
#define GBHIPKDIMMH___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E42C4B0)

	class GBHIPKDIMMH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xD0F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GBHIPKDIMMH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBHIPKDIMMH___C_CTOR_OFFSET))(this);
		}

		::GBHIPKDIMMH* __cctor_b__28_0()
		{
			return ((::GBHIPKDIMMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBHIPKDIMMH___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
