#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FEIJPEJBDDH;
namespace System { class Object; }

#define FEIJPEJBDDH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F64F680)
#define FEIJPEJBDDH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F64F6C0)
#define FEIJPEJBDDH___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F64F6D0)

inline static constexpr unsigned int FEIJPEJBDDH___c_TypeDefinitionIndex = 33842;

	class FEIJPEJBDDH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5B400);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FEIJPEJBDDH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEIJPEJBDDH___C_CTOR_OFFSET))(this);
		}

		::FEIJPEJBDDH* __cctor_b__23_0()
		{
			return ((::FEIJPEJBDDH*(*)(::PVOID))((::PBYTE)hIl2Cpp + FEIJPEJBDDH___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
