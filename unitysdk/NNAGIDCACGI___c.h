#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NNAGIDCACGI;
namespace System { class Object; }

#define NNAGIDCACGI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB50560)
#define NNAGIDCACGI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB505A0)
#define NNAGIDCACGI___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1EB505B0)

inline static constexpr unsigned int NNAGIDCACGI___c_TypeDefinitionIndex = 27438;

	class NNAGIDCACGI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1B70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NNAGIDCACGI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNAGIDCACGI___C_CTOR_OFFSET))(this);
		}

		::NNAGIDCACGI* __cctor_b__33_0()
		{
			return ((::NNAGIDCACGI*(*)(::PVOID))((::PBYTE)hIl2Cpp + NNAGIDCACGI___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
