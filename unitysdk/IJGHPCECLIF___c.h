#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IJGHPCECLIF;
namespace System { class Object; }

#define IJGHPCECLIF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E693990)
#define IJGHPCECLIF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6939C0)
#define IJGHPCECLIF___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E6939D0)

inline static constexpr unsigned int IJGHPCECLIF___c_TypeDefinitionIndex = 27006;

	class IJGHPCECLIF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x522B0);
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
