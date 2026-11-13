#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DEGFFGKMFJJ;
namespace System { class Object; }

#define DEGFFGKMFJJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FFA5840)
#define DEGFFGKMFJJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FFA5870)
#define DEGFFGKMFJJ___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1FFA5880)

inline static constexpr unsigned int DEGFFGKMFJJ___c_TypeDefinitionIndex = 28229;

	class DEGFFGKMFJJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x23600);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DEGFFGKMFJJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEGFFGKMFJJ___C_CTOR_OFFSET))(this);
		}

		::DEGFFGKMFJJ* __cctor_b__28_0()
		{
			return ((::DEGFFGKMFJJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEGFFGKMFJJ___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
