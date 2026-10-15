#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BKFDFLNHKIF;
namespace System { class Object; }

#define BKFDFLNHKIF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF29C00)
#define BKFDFLNHKIF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF29C40)
#define BKFDFLNHKIF___C___CCTOR_B__130_0_OFFSET UNITYSDK_OFFSET(0x1DF29C50)

inline static constexpr unsigned int BKFDFLNHKIF___c_TypeDefinitionIndex = 25053;

	class BKFDFLNHKIF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5A8A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BKFDFLNHKIF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKFDFLNHKIF___C_CTOR_OFFSET))(this);
		}

		::BKFDFLNHKIF* __cctor_b__130_0()
		{
			return ((::BKFDFLNHKIF*(*)(::PVOID))((::PBYTE)hIl2Cpp + BKFDFLNHKIF___C___CCTOR_B__130_0_OFFSET))(this);
		}

	};
