#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IJGHPCECLIF;
namespace System { class Object; }

#define IJGHPCECLIF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F999650)
#define IJGHPCECLIF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F999680)
#define IJGHPCECLIF___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F999690)

inline static constexpr unsigned int IJGHPCECLIF___c_TypeDefinitionIndex = 27537;

	class IJGHPCECLIF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x503C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IJGHPCECLIF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJGHPCECLIF___C_CTOR_OFFSET))(this);
		}

		::IJGHPCECLIF* __cctor_b__28_0()
		{
			return ((::IJGHPCECLIF*(*)(::PVOID))((::PBYTE)hIl2Cpp + IJGHPCECLIF___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
