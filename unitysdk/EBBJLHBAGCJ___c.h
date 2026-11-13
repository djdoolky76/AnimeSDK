#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EBBJLHBAGCJ;
namespace System { class Object; }

#define EBBJLHBAGCJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x203F2AD0)
#define EBBJLHBAGCJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x203F2B10)
#define EBBJLHBAGCJ___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x203F2B20)

inline static constexpr unsigned int EBBJLHBAGCJ___c_TypeDefinitionIndex = 26080;

	class EBBJLHBAGCJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3FDA0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EBBJLHBAGCJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBBJLHBAGCJ___C_CTOR_OFFSET))(this);
		}

		::EBBJLHBAGCJ* __cctor_b__28_0()
		{
			return ((::EBBJLHBAGCJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBBJLHBAGCJ___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
