#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LJBOELCMGFK;
namespace System { class Object; }

#define LJBOELCMGFK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E976BC0)
#define LJBOELCMGFK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E976C00)
#define LJBOELCMGFK___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E976C10)

inline static constexpr unsigned int LJBOELCMGFK___c_TypeDefinitionIndex = 27064;

	class LJBOELCMGFK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x464F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LJBOELCMGFK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJBOELCMGFK___C_CTOR_OFFSET))(this);
		}

		::LJBOELCMGFK* __cctor_b__28_0()
		{
			return ((::LJBOELCMGFK*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJBOELCMGFK___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
