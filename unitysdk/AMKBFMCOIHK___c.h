#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AMKBFMCOIHK;
namespace System { class Object; }

#define AMKBFMCOIHK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E525A10)
#define AMKBFMCOIHK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E525A40)
#define AMKBFMCOIHK___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E525A50)

inline static constexpr unsigned int AMKBFMCOIHK___c_TypeDefinitionIndex = 30860;

	class AMKBFMCOIHK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3CF10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AMKBFMCOIHK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMKBFMCOIHK___C_CTOR_OFFSET))(this);
		}

		::AMKBFMCOIHK* __cctor_b__33_0()
		{
			return ((::AMKBFMCOIHK*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMKBFMCOIHK___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
