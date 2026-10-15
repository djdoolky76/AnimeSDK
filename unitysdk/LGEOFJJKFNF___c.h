#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LGEOFJJKFNF;
namespace System { class Object; }

#define LGEOFJJKFNF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E922DB0)
#define LGEOFJJKFNF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E922DF0)
#define LGEOFJJKFNF___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E922E00)

inline static constexpr unsigned int LGEOFJJKFNF___c_TypeDefinitionIndex = 28791;

	class LGEOFJJKFNF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x34EE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LGEOFJJKFNF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGEOFJJKFNF___C_CTOR_OFFSET))(this);
		}

		::LGEOFJJKFNF* __cctor_b__28_0()
		{
			return ((::LGEOFJJKFNF*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGEOFJJKFNF___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
