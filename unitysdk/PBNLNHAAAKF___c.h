#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PBNLNHAAAKF;
namespace System { class Object; }

#define PBNLNHAAAKF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FBF00D0)
#define PBNLNHAAAKF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FBF0110)
#define PBNLNHAAAKF___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1FBF0120)

inline static constexpr unsigned int PBNLNHAAAKF___c_TypeDefinitionIndex = 32097;

	class PBNLNHAAAKF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2E330);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PBNLNHAAAKF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBNLNHAAAKF___C_CTOR_OFFSET))(this);
		}

		::PBNLNHAAAKF* __cctor_b__33_0()
		{
			return ((::PBNLNHAAAKF*(*)(::PVOID))((::PBYTE)hIl2Cpp + PBNLNHAAAKF___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
