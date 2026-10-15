#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BLFMKDAGCFO;
namespace System { class Object; }

#define BLFMKDAGCFO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF32EE0)
#define BLFMKDAGCFO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF32F20)
#define BLFMKDAGCFO___C___CCTOR_B__68_0_OFFSET UNITYSDK_OFFSET(0x1DF32F30)

inline static constexpr unsigned int BLFMKDAGCFO___c_TypeDefinitionIndex = 31498;

	class BLFMKDAGCFO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5B4B0);
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
