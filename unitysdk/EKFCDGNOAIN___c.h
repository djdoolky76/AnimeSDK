#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EKFCDGNOAIN;
namespace System { class Object; }

#define EKFCDGNOAIN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E293600)
#define EKFCDGNOAIN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E293640)
#define EKFCDGNOAIN___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E293650)

inline static constexpr unsigned int EKFCDGNOAIN___c_TypeDefinitionIndex = 32715;

	class EKFCDGNOAIN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4DCE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EKFCDGNOAIN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKFCDGNOAIN___C_CTOR_OFFSET))(this);
		}

		::EKFCDGNOAIN* __cctor_b__33_0()
		{
			return ((::EKFCDGNOAIN*(*)(::PVOID))((::PBYTE)hIl2Cpp + EKFCDGNOAIN___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
