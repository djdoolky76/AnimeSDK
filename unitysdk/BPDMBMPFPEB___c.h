#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BPDMBMPFPEB;
namespace System { class Object; }

#define BPDMBMPFPEB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E041FE0)
#define BPDMBMPFPEB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E042020)
#define BPDMBMPFPEB___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E042030)

inline static constexpr unsigned int BPDMBMPFPEB___c_TypeDefinitionIndex = 31740;

	class BPDMBMPFPEB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x55090);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BPDMBMPFPEB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPDMBMPFPEB___C_CTOR_OFFSET))(this);
		}

		::BPDMBMPFPEB* __cctor_b__23_0()
		{
			return ((::BPDMBMPFPEB*(*)(::PVOID))((::PBYTE)hIl2Cpp + BPDMBMPFPEB___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
