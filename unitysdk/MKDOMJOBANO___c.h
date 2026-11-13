#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MKDOMJOBANO;
namespace System { class Object; }

#define MKDOMJOBANO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x205CD610)
#define MKDOMJOBANO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x205CD650)
#define MKDOMJOBANO___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x205CD660)

inline static constexpr unsigned int MKDOMJOBANO___c_TypeDefinitionIndex = 33114;

	class MKDOMJOBANO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4EC00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MKDOMJOBANO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKDOMJOBANO___C_CTOR_OFFSET))(this);
		}

		::MKDOMJOBANO* __cctor_b__23_0()
		{
			return ((::MKDOMJOBANO*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKDOMJOBANO___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
