#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IPGLHOIFDAB;
namespace System { class Object; }

#define IPGLHOIFDAB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F9EB5C0)
#define IPGLHOIFDAB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F9EB600)
#define IPGLHOIFDAB___C___CCTOR_B__42_0_OFFSET UNITYSDK_OFFSET(0x1F9EB610)

inline static constexpr unsigned int IPGLHOIFDAB___c_TypeDefinitionIndex = 28479;

	class IPGLHOIFDAB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x59430);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IPGLHOIFDAB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPGLHOIFDAB___C_CTOR_OFFSET))(this);
		}

		::IPGLHOIFDAB* __cctor_b__42_0()
		{
			return ((::IPGLHOIFDAB*(*)(::PVOID))((::PBYTE)hIl2Cpp + IPGLHOIFDAB___C___CCTOR_B__42_0_OFFSET))(this);
		}

	};
