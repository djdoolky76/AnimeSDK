#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GGILOAPIPBF;
namespace System { class Object; }

#define GGILOAPIPBF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E47E810)
#define GGILOAPIPBF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E47E850)
#define GGILOAPIPBF___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E47E860)

inline static constexpr unsigned int GGILOAPIPBF___c_TypeDefinitionIndex = 31363;

	class GGILOAPIPBF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x16330);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GGILOAPIPBF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGILOAPIPBF___C_CTOR_OFFSET))(this);
		}

		::GGILOAPIPBF* __cctor_b__28_0()
		{
			return ((::GGILOAPIPBF*(*)(::PVOID))((::PBYTE)hIl2Cpp + GGILOAPIPBF___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
