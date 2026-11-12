#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OIHFMECAJBH;
namespace System { class Object; }

#define OIHFMECAJBH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F116880)
#define OIHFMECAJBH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F1168C0)
#define OIHFMECAJBH___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1F1168D0)

inline static constexpr unsigned int OIHFMECAJBH___c_TypeDefinitionIndex = 25652;

	class OIHFMECAJBH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x170E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OIHFMECAJBH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIHFMECAJBH___C_CTOR_OFFSET))(this);
		}

		::OIHFMECAJBH* __cctor_b__43_0()
		{
			return ((::OIHFMECAJBH*(*)(::PVOID))((::PBYTE)hIl2Cpp + OIHFMECAJBH___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
