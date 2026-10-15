#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LODMLDKMPPL;
namespace System { class Object; }

#define LODMLDKMPPL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9BB130)
#define LODMLDKMPPL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9BB170)
#define LODMLDKMPPL___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E9BB180)

inline static constexpr unsigned int LODMLDKMPPL___c_TypeDefinitionIndex = 29860;

	class LODMLDKMPPL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x514A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LODMLDKMPPL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LODMLDKMPPL___C_CTOR_OFFSET))(this);
		}

		::LODMLDKMPPL* __cctor_b__23_0()
		{
			return ((::LODMLDKMPPL*(*)(::PVOID))((::PBYTE)hIl2Cpp + LODMLDKMPPL___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
