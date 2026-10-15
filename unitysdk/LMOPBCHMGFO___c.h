#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LMOPBCHMGFO;
namespace System { class Object; }

#define LMOPBCHMGFO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E981F30)
#define LMOPBCHMGFO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E981F70)
#define LMOPBCHMGFO___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E981F80)

inline static constexpr unsigned int LMOPBCHMGFO___c_TypeDefinitionIndex = 27223;

	class LMOPBCHMGFO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3F3D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LMOPBCHMGFO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMOPBCHMGFO___C_CTOR_OFFSET))(this);
		}

		::LMOPBCHMGFO* __cctor_b__33_0()
		{
			return ((::LMOPBCHMGFO*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMOPBCHMGFO___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
