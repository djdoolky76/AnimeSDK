#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BLHGFHMEFMB;
namespace System { class Object; }

#define BLHGFHMEFMB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FC64E20)
#define BLHGFHMEFMB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FC64E60)
#define BLHGFHMEFMB___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1FC64E70)

inline static constexpr unsigned int BLHGFHMEFMB___c_TypeDefinitionIndex = 31975;

	class BLHGFHMEFMB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x57F90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BLHGFHMEFMB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLHGFHMEFMB___C_CTOR_OFFSET))(this);
		}

		::BLHGFHMEFMB* __cctor_b__33_0()
		{
			return ((::BLHGFHMEFMB*(*)(::PVOID))((::PBYTE)hIl2Cpp + BLHGFHMEFMB___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
