#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KEALONANBJO;
namespace System { class Object; }

#define KEALONANBJO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E808E90)
#define KEALONANBJO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E808ED0)
#define KEALONANBJO___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E808EE0)

inline static constexpr unsigned int KEALONANBJO___c_TypeDefinitionIndex = 26335;

	class KEALONANBJO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x11830);
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
