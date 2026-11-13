#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DPNJPMJEHBH;
namespace System { class Object; }

#define DPNJPMJEHBH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F7781A0)
#define DPNJPMJEHBH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F7781E0)
#define DPNJPMJEHBH___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1F7781F0)

inline static constexpr unsigned int DPNJPMJEHBH___c_TypeDefinitionIndex = 34961;

	class DPNJPMJEHBH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3C330);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DPNJPMJEHBH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPNJPMJEHBH___C_CTOR_OFFSET))(this);
		}

		::DPNJPMJEHBH* __cctor_b__33_0()
		{
			return ((::DPNJPMJEHBH*(*)(::PVOID))((::PBYTE)hIl2Cpp + DPNJPMJEHBH___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
