#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LKHAJCACPBH;
namespace System { class Object; }

#define LKHAJCACPBH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FCB18A0)
#define LKHAJCACPBH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FCB18E0)
#define LKHAJCACPBH___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1FCB18F0)

inline static constexpr unsigned int LKHAJCACPBH___c_TypeDefinitionIndex = 30553;

	class LKHAJCACPBH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3B260);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LKHAJCACPBH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKHAJCACPBH___C_CTOR_OFFSET))(this);
		}

		::LKHAJCACPBH* __cctor_b__33_0()
		{
			return ((::LKHAJCACPBH*(*)(::PVOID))((::PBYTE)hIl2Cpp + LKHAJCACPBH___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
