#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JFGCABMMKAB;
namespace System { class Object; }

#define JFGCABMMKAB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6FD7C0)
#define JFGCABMMKAB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6FD7F0)
#define JFGCABMMKAB___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1E6FD800)

inline static constexpr unsigned int JFGCABMMKAB___c_TypeDefinitionIndex = 34268;

	class JFGCABMMKAB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5D090);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JFGCABMMKAB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFGCABMMKAB___C_CTOR_OFFSET))(this);
		}

		::JFGCABMMKAB* __cctor_b__43_0()
		{
			return ((::JFGCABMMKAB*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFGCABMMKAB___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
