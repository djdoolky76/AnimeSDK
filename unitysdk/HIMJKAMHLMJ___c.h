#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HIMJKAMHLMJ;
namespace System { class Object; }

#define HIMJKAMHLMJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E59C6A0)
#define HIMJKAMHLMJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E59C6D0)
#define HIMJKAMHLMJ___C___CCTOR_B__48_0_OFFSET UNITYSDK_OFFSET(0x1E59C6E0)

inline static constexpr unsigned int HIMJKAMHLMJ___c_TypeDefinitionIndex = 27324;

	class HIMJKAMHLMJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3E660);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HIMJKAMHLMJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIMJKAMHLMJ___C_CTOR_OFFSET))(this);
		}

		::HIMJKAMHLMJ* __cctor_b__48_0()
		{
			return ((::HIMJKAMHLMJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIMJKAMHLMJ___C___CCTOR_B__48_0_OFFSET))(this);
		}

	};
