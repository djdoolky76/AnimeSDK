#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EMKAACCBCCB;
namespace System { class Object; }

#define EMKAACCBCCB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2B68B0)
#define EMKAACCBCCB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2B68E0)
#define EMKAACCBCCB___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E2B68F0)

inline static constexpr unsigned int EMKAACCBCCB___c_TypeDefinitionIndex = 32337;

	class EMKAACCBCCB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x43780);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EMKAACCBCCB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMKAACCBCCB___C_CTOR_OFFSET))(this);
		}

		::EMKAACCBCCB* __cctor_b__18_0()
		{
			return ((::EMKAACCBCCB*(*)(::PVOID))((::PBYTE)hIl2Cpp + EMKAACCBCCB___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
