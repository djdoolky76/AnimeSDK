#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ANIFBDMGAIC;
namespace System { class Object; }

#define ANIFBDMGAIC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E660D30)
#define ANIFBDMGAIC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E660D60)
#define ANIFBDMGAIC___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E660D70)

inline static constexpr unsigned int ANIFBDMGAIC___c_TypeDefinitionIndex = 34633;

	class ANIFBDMGAIC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3F320);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ANIFBDMGAIC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIFBDMGAIC___C_CTOR_OFFSET))(this);
		}

		::ANIFBDMGAIC* __cctor_b__28_0()
		{
			return ((::ANIFBDMGAIC*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIFBDMGAIC___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
