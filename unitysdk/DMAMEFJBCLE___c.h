#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DMAMEFJBCLE;
namespace System { class Object; }

#define DMAMEFJBCLE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1BBBE0)
#define DMAMEFJBCLE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1BBC20)
#define DMAMEFJBCLE___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E1BBC30)

inline static constexpr unsigned int DMAMEFJBCLE___c_TypeDefinitionIndex = 26078;

	class DMAMEFJBCLE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x35DA0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DMAMEFJBCLE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMAMEFJBCLE___C_CTOR_OFFSET))(this);
		}

		::DMAMEFJBCLE* __cctor_b__23_0()
		{
			return ((::DMAMEFJBCLE*(*)(::PVOID))((::PBYTE)hIl2Cpp + DMAMEFJBCLE___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
