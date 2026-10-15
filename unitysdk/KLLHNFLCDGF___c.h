#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KLLHNFLCDGF;
namespace System { class Object; }

#define KLLHNFLCDGF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E863540)
#define KLLHNFLCDGF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E863580)
#define KLLHNFLCDGF___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E863590)

inline static constexpr unsigned int KLLHNFLCDGF___c_TypeDefinitionIndex = 29602;

	class KLLHNFLCDGF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1E550);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KLLHNFLCDGF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLLHNFLCDGF___C_CTOR_OFFSET))(this);
		}

		::KLLHNFLCDGF* __cctor_b__23_0()
		{
			return ((::KLLHNFLCDGF*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLLHNFLCDGF___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
