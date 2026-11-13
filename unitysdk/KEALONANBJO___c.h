#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KEALONANBJO;
namespace System { class Object; }

#define KEALONANBJO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F99BA40)
#define KEALONANBJO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F99BA80)
#define KEALONANBJO___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F99BA90)

inline static constexpr unsigned int KEALONANBJO___c_TypeDefinitionIndex = 26862;

	class KEALONANBJO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xA120);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KEALONANBJO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEALONANBJO___C_CTOR_OFFSET))(this);
		}

		::KEALONANBJO* __cctor_b__23_0()
		{
			return ((::KEALONANBJO*(*)(::PVOID))((::PBYTE)hIl2Cpp + KEALONANBJO___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
