#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HDKJPKPEJFO;
namespace System { class Object; }

#define HDKJPKPEJFO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E550920)
#define HDKJPKPEJFO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E550960)
#define HDKJPKPEJFO___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E550970)

inline static constexpr unsigned int HDKJPKPEJFO___c_TypeDefinitionIndex = 30617;

	class HDKJPKPEJFO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x320D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HDKJPKPEJFO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDKJPKPEJFO___C_CTOR_OFFSET))(this);
		}

		::HDKJPKPEJFO* __cctor_b__28_0()
		{
			return ((::HDKJPKPEJFO*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDKJPKPEJFO___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
