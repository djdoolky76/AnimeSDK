#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class Type; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define OJMGONHMBLC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x194C4E90)
#define OJMGONHMBLC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x194C4EC0)
#define OJMGONHMBLC___C__INITIAL_B__63_0_OFFSET UNITYSDK_OFFSET(0x194C4ED0)

inline static constexpr unsigned int OJMGONHMBLC___c_TypeDefinitionIndex = 76136;

	class OJMGONHMBLC___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Type*, ::System::Boolean>** StaticGet___9__63_0()
		{
			return (::System::Func_2<::System::Type*, ::System::Boolean>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x57C00);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x57C08);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OJMGONHMBLC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJMGONHMBLC___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _initial_b__63_0(::System::Type* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + OJMGONHMBLC___C__INITIAL_B__63_0_OFFSET))(this, a1);
		}

	};
