#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BLIOAJGEJNN;
namespace System { class Object; }

#define BLIOAJGEJNN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF37300)
#define BLIOAJGEJNN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF37340)
#define BLIOAJGEJNN___C___CCTOR_B__68_0_OFFSET UNITYSDK_OFFSET(0x1DF37350)

inline static constexpr unsigned int BLIOAJGEJNN___c_TypeDefinitionIndex = 30407;

	class BLIOAJGEJNN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5B950);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BLIOAJGEJNN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLIOAJGEJNN___C_CTOR_OFFSET))(this);
		}

		::BLIOAJGEJNN* __cctor_b__68_0()
		{
			return ((::BLIOAJGEJNN*(*)(::PVOID))((::PBYTE)hIl2Cpp + BLIOAJGEJNN___C___CCTOR_B__68_0_OFFSET))(this);
		}

	};
