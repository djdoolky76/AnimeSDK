#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CKFKJMNHNGM;
namespace System { class Object; }

#define CKFKJMNHNGM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x20596DA0)
#define CKFKJMNHNGM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x20596DE0)
#define CKFKJMNHNGM___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x20596DF0)

inline static constexpr unsigned int CKFKJMNHNGM___c_TypeDefinitionIndex = 26502;

	class CKFKJMNHNGM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x12890);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CKFKJMNHNGM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKFKJMNHNGM___C_CTOR_OFFSET))(this);
		}

		::CKFKJMNHNGM* __cctor_b__23_0()
		{
			return ((::CKFKJMNHNGM*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKFKJMNHNGM___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
