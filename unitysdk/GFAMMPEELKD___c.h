#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GFAMMPEELKD;
namespace System { class Object; }

#define GFAMMPEELKD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F74DE90)
#define GFAMMPEELKD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F74DED0)
#define GFAMMPEELKD___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1F74DEE0)

inline static constexpr unsigned int GFAMMPEELKD___c_TypeDefinitionIndex = 34684;

	class GFAMMPEELKD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x9D40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GFAMMPEELKD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFAMMPEELKD___C_CTOR_OFFSET))(this);
		}

		::GFAMMPEELKD* __cctor_b__33_0()
		{
			return ((::GFAMMPEELKD*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFAMMPEELKD___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
