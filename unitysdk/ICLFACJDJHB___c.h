#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ICLFACJDJHB;
namespace System { class Object; }

#define ICLFACJDJHB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F9401C0)
#define ICLFACJDJHB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F940200)
#define ICLFACJDJHB___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F940210)

inline static constexpr unsigned int ICLFACJDJHB___c_TypeDefinitionIndex = 35531;

	class ICLFACJDJHB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4BA60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ICLFACJDJHB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICLFACJDJHB___C_CTOR_OFFSET))(this);
		}

		::ICLFACJDJHB* __cctor_b__28_0()
		{
			return ((::ICLFACJDJHB*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICLFACJDJHB___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
