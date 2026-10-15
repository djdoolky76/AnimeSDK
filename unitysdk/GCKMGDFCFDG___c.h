#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GCKMGDFCFDG;
namespace System { class Object; }

#define GCKMGDFCFDG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E440930)
#define GCKMGDFCFDG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E440970)
#define GCKMGDFCFDG___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E440980)

	class GCKMGDFCFDG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xF8B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GCKMGDFCFDG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCKMGDFCFDG___C_CTOR_OFFSET))(this);
		}

		::GCKMGDFCFDG* __cctor_b__33_0()
		{
			return ((::GCKMGDFCFDG*(*)(::PVOID))((::PBYTE)hIl2Cpp + GCKMGDFCFDG___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
