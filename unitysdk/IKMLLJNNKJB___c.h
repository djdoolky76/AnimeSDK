#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IKMLLJNNKJB;
namespace System { class Object; }

#define IKMLLJNNKJB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x20069F90)
#define IKMLLJNNKJB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x20069FD0)
#define IKMLLJNNKJB___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x20069FE0)

inline static constexpr unsigned int IKMLLJNNKJB___c_TypeDefinitionIndex = 32728;

	class IKMLLJNNKJB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4A9F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IKMLLJNNKJB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKMLLJNNKJB___C_CTOR_OFFSET))(this);
		}

		::IKMLLJNNKJB* __cctor_b__28_0()
		{
			return ((::IKMLLJNNKJB*(*)(::PVOID))((::PBYTE)hIl2Cpp + IKMLLJNNKJB___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
