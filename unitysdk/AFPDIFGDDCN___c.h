#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AFPDIFGDDCN;
namespace System { class Object; }

#define AFPDIFGDDCN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F3E2E50)
#define AFPDIFGDDCN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F3E2E80)
#define AFPDIFGDDCN___C___CCTOR_B__108_0_OFFSET UNITYSDK_OFFSET(0x1F3E2E90)

inline static constexpr unsigned int AFPDIFGDDCN___c_TypeDefinitionIndex = 32950;

	class AFPDIFGDDCN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3BE20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AFPDIFGDDCN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFPDIFGDDCN___C_CTOR_OFFSET))(this);
		}

		::AFPDIFGDDCN* __cctor_b__108_0()
		{
			return ((::AFPDIFGDDCN*(*)(::PVOID))((::PBYTE)hIl2Cpp + AFPDIFGDDCN___C___CCTOR_B__108_0_OFFSET))(this);
		}

	};
