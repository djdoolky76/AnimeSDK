#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OGKOAHJCBAF;
namespace System { class Object; }

#define OGKOAHJCBAF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE2AE30)
#define OGKOAHJCBAF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE2AE70)
#define OGKOAHJCBAF___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1DE2AE80)

inline static constexpr unsigned int OGKOAHJCBAF___c_TypeDefinitionIndex = 33759;

	class OGKOAHJCBAF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x18B90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OGKOAHJCBAF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGKOAHJCBAF___C_CTOR_OFFSET))(this);
		}

		::OGKOAHJCBAF* __cctor_b__23_0()
		{
			return ((::OGKOAHJCBAF*(*)(::PVOID))((::PBYTE)hIl2Cpp + OGKOAHJCBAF___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
