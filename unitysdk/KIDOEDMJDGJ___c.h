#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KIDOEDMJDGJ;
namespace System { class Object; }

#define KIDOEDMJDGJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E858900)
#define KIDOEDMJDGJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E858940)
#define KIDOEDMJDGJ___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E858950)

inline static constexpr unsigned int KIDOEDMJDGJ___c_TypeDefinitionIndex = 26181;

	class KIDOEDMJDGJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x19530);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KIDOEDMJDGJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIDOEDMJDGJ___C_CTOR_OFFSET))(this);
		}

		::KIDOEDMJDGJ* __cctor_b__33_0()
		{
			return ((::KIDOEDMJDGJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + KIDOEDMJDGJ___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
