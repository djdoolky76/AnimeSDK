#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IKJDKNKJBGI;
namespace System { class Object; }

#define IKJDKNKJBGI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E675920)
#define IKJDKNKJBGI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E675960)
#define IKJDKNKJBGI___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1E675970)

inline static constexpr unsigned int IKJDKNKJBGI___c_TypeDefinitionIndex = 28657;

	class IKJDKNKJBGI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x50700);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IKJDKNKJBGI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKJDKNKJBGI___C_CTOR_OFFSET))(this);
		}

		::IKJDKNKJBGI* __cctor_b__43_0()
		{
			return ((::IKJDKNKJBGI*(*)(::PVOID))((::PBYTE)hIl2Cpp + IKJDKNKJBGI___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
