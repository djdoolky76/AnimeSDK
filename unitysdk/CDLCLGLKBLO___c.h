#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CDLCLGLKBLO;
namespace System { class Object; }

#define CDLCLGLKBLO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E087360)
#define CDLCLGLKBLO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0873A0)
#define CDLCLGLKBLO___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E0873B0)

inline static constexpr unsigned int CDLCLGLKBLO___c_TypeDefinitionIndex = 28986;

	class CDLCLGLKBLO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xF6A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CDLCLGLKBLO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDLCLGLKBLO___C_CTOR_OFFSET))(this);
		}

		::CDLCLGLKBLO* __cctor_b__33_0()
		{
			return ((::CDLCLGLKBLO*(*)(::PVOID))((::PBYTE)hIl2Cpp + CDLCLGLKBLO___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
