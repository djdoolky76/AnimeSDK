#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JBMDMFOCOAK;
namespace System { class Object; }

#define JBMDMFOCOAK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6FA6F0)
#define JBMDMFOCOAK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6FA730)
#define JBMDMFOCOAK___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E6FA740)

	class JBMDMFOCOAK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5D410);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JBMDMFOCOAK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBMDMFOCOAK___C_CTOR_OFFSET))(this);
		}

		::JBMDMFOCOAK* __cctor_b__28_0()
		{
			return ((::JBMDMFOCOAK*(*)(::PVOID))((::PBYTE)hIl2Cpp + JBMDMFOCOAK___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
