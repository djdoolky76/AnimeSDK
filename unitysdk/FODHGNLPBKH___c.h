#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FODHGNLPBKH;
namespace System { class Object; }

#define FODHGNLPBKH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3CB5F0)
#define FODHGNLPBKH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3CB630)
#define FODHGNLPBKH___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E3CB640)

inline static constexpr unsigned int FODHGNLPBKH___c_TypeDefinitionIndex = 33484;

	class FODHGNLPBKH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5E550);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FODHGNLPBKH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FODHGNLPBKH___C_CTOR_OFFSET))(this);
		}

		::FODHGNLPBKH* __cctor_b__38_0()
		{
			return ((::FODHGNLPBKH*(*)(::PVOID))((::PBYTE)hIl2Cpp + FODHGNLPBKH___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
