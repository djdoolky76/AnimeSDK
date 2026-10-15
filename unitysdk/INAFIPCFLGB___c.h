#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class INAFIPCFLGB;
namespace System { class Object; }

#define INAFIPCFLGB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6BCA90)
#define INAFIPCFLGB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6BCAC0)
#define INAFIPCFLGB___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E6BCAD0)

inline static constexpr unsigned int INAFIPCFLGB___c_TypeDefinitionIndex = 30806;

	class INAFIPCFLGB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x57D00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + INAFIPCFLGB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INAFIPCFLGB___C_CTOR_OFFSET))(this);
		}

		::INAFIPCFLGB* __cctor_b__18_0()
		{
			return ((::INAFIPCFLGB*(*)(::PVOID))((::PBYTE)hIl2Cpp + INAFIPCFLGB___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
