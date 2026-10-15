#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LENKELHGNBG;
namespace System { class Object; }

#define LENKELHGNBG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E937D80)
#define LENKELHGNBG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E937DC0)
#define LENKELHGNBG___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E937DD0)

inline static constexpr unsigned int LENKELHGNBG___c_TypeDefinitionIndex = 27704;

	class LENKELHGNBG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x39B30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LENKELHGNBG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LENKELHGNBG___C_CTOR_OFFSET))(this);
		}

		::LENKELHGNBG* __cctor_b__28_0()
		{
			return ((::LENKELHGNBG*(*)(::PVOID))((::PBYTE)hIl2Cpp + LENKELHGNBG___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
