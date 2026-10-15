#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IKCDOOFJDKO;
namespace System { class Object; }

#define IKCDOOFJDKO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E66FC50)
#define IKCDOOFJDKO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E66FC80)
#define IKCDOOFJDKO___C___CCTOR_B__48_0_OFFSET UNITYSDK_OFFSET(0x1E66FC90)

inline static constexpr unsigned int IKCDOOFJDKO___c_TypeDefinitionIndex = 25929;

	class IKCDOOFJDKO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4F8C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IKCDOOFJDKO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKCDOOFJDKO___C_CTOR_OFFSET))(this);
		}

		::IKCDOOFJDKO* __cctor_b__48_0()
		{
			return ((::IKCDOOFJDKO*(*)(::PVOID))((::PBYTE)hIl2Cpp + IKCDOOFJDKO___C___CCTOR_B__48_0_OFFSET))(this);
		}

	};
