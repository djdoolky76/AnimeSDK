#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CADOMBICGJI;
namespace System { class Object; }

#define CADOMBICGJI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E056EE0)
#define CADOMBICGJI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E056F10)
#define CADOMBICGJI___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E056F20)

inline static constexpr unsigned int CADOMBICGJI___c_TypeDefinitionIndex = 26132;

	class CADOMBICGJI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x56300);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CADOMBICGJI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CADOMBICGJI___C_CTOR_OFFSET))(this);
		}

		::CADOMBICGJI* __cctor_b__18_0()
		{
			return ((::CADOMBICGJI*(*)(::PVOID))((::PBYTE)hIl2Cpp + CADOMBICGJI___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
