#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class POHFDLFAHKG;
namespace System { class Object; }

#define POHFDLFAHKG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F27D8A0)
#define POHFDLFAHKG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F27D8D0)
#define POHFDLFAHKG___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F27D8E0)

inline static constexpr unsigned int POHFDLFAHKG___c_TypeDefinitionIndex = 33721;

	class POHFDLFAHKG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x46670);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + POHFDLFAHKG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POHFDLFAHKG___C_CTOR_OFFSET))(this);
		}

		::POHFDLFAHKG* __cctor_b__28_0()
		{
			return ((::POHFDLFAHKG*(*)(::PVOID))((::PBYTE)hIl2Cpp + POHFDLFAHKG___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
