#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LBFNAJJGCBH;
namespace System { class Object; }

#define LBFNAJJGCBH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FC1A630)
#define LBFNAJJGCBH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FC1A670)
#define LBFNAJJGCBH___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1FC1A680)

inline static constexpr unsigned int LBFNAJJGCBH___c_TypeDefinitionIndex = 32840;

	class LBFNAJJGCBH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x27980);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LBFNAJJGCBH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBFNAJJGCBH___C_CTOR_OFFSET))(this);
		}

		::LBFNAJJGCBH* __cctor_b__43_0()
		{
			return ((::LBFNAJJGCBH*(*)(::PVOID))((::PBYTE)hIl2Cpp + LBFNAJJGCBH___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
