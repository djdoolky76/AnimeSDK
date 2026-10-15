#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AOMOENMNCNB;
namespace System { class Object; }

#define AOMOENMNCNB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E642EF0)
#define AOMOENMNCNB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E642F30)
#define AOMOENMNCNB___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E642F40)

inline static constexpr unsigned int AOMOENMNCNB___c_TypeDefinitionIndex = 32905;

	class AOMOENMNCNB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x49A90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AOMOENMNCNB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOMOENMNCNB___C_CTOR_OFFSET))(this);
		}

		::AOMOENMNCNB* __cctor_b__23_0()
		{
			return ((::AOMOENMNCNB*(*)(::PVOID))((::PBYTE)hIl2Cpp + AOMOENMNCNB___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
