#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BLFMKDAGCFO;
namespace System { class Object; }

#define BLFMKDAGCFO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF60540)
#define BLFMKDAGCFO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF60580)
#define BLFMKDAGCFO___C___CCTOR_B__68_0_OFFSET UNITYSDK_OFFSET(0x1DF60590)

	class BLFMKDAGCFO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4C8A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BLFMKDAGCFO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLFMKDAGCFO___C_CTOR_OFFSET))(this);
		}

		::BLFMKDAGCFO* __cctor_b__68_0()
		{
			return ((::BLFMKDAGCFO*(*)(::PVOID))((::PBYTE)hIl2Cpp + BLFMKDAGCFO___C___CCTOR_B__68_0_OFFSET))(this);
		}

	};
