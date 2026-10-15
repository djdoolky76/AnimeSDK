#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BHJEBMOOJED;
namespace System { class Object; }

#define BHJEBMOOJED___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDF6CC0)
#define BHJEBMOOJED___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDF6D00)
#define BHJEBMOOJED___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1DDF6D10)

inline static constexpr unsigned int BHJEBMOOJED___c_TypeDefinitionIndex = 26613;

	class BHJEBMOOJED___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x46170);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BHJEBMOOJED___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHJEBMOOJED___C_CTOR_OFFSET))(this);
		}

		::BHJEBMOOJED* __cctor_b__28_0()
		{
			return ((::BHJEBMOOJED*(*)(::PVOID))((::PBYTE)hIl2Cpp + BHJEBMOOJED___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
