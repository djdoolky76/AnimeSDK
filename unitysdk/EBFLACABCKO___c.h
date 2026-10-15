#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EBFLACABCKO;
namespace System { class Object; }

#define EBFLACABCKO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E206F10)
#define EBFLACABCKO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E206F50)
#define EBFLACABCKO___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E206F60)

inline static constexpr unsigned int EBFLACABCKO___c_TypeDefinitionIndex = 29812;

	class EBFLACABCKO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3FC40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EBFLACABCKO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBFLACABCKO___C_CTOR_OFFSET))(this);
		}

		::EBFLACABCKO* __cctor_b__28_0()
		{
			return ((::EBFLACABCKO*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBFLACABCKO___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
