#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BLEJGGNFNEO;
namespace System { class Object; }

#define BLEJGGNFNEO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F2B7360)
#define BLEJGGNFNEO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F2B73A0)
#define BLEJGGNFNEO___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F2B73B0)

inline static constexpr unsigned int BLEJGGNFNEO___c_TypeDefinitionIndex = 29552;

	class BLEJGGNFNEO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4F670);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BLEJGGNFNEO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLEJGGNFNEO___C_CTOR_OFFSET))(this);
		}

		::BLEJGGNFNEO* __cctor_b__28_0()
		{
			return ((::BLEJGGNFNEO*(*)(::PVOID))((::PBYTE)hIl2Cpp + BLEJGGNFNEO___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
