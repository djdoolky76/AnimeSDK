#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NDIGHHGLNED;
namespace System { class Object; }

#define NDIGHHGLNED___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAE7770)
#define NDIGHHGLNED___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAE77B0)
#define NDIGHHGLNED___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1EAE77C0)

	class NDIGHHGLNED___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5D5D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NDIGHHGLNED___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDIGHHGLNED___C_CTOR_OFFSET))(this);
		}

		::NDIGHHGLNED* __cctor_b__43_0()
		{
			return ((::NDIGHHGLNED*(*)(::PVOID))((::PBYTE)hIl2Cpp + NDIGHHGLNED___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
