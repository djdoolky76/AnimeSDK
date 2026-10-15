#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CBIKIIMGKHH;
namespace System { class Object; }

#define CBIKIIMGKHH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E03D830)
#define CBIKIIMGKHH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E03D870)
#define CBIKIIMGKHH___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E03D880)

inline static constexpr unsigned int CBIKIIMGKHH___c_TypeDefinitionIndex = 34614;

	class CBIKIIMGKHH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xB740);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CBIKIIMGKHH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBIKIIMGKHH___C_CTOR_OFFSET))(this);
		}

		::CBIKIIMGKHH* __cctor_b__28_0()
		{
			return ((::CBIKIIMGKHH*(*)(::PVOID))((::PBYTE)hIl2Cpp + CBIKIIMGKHH___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
