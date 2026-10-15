#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LBCBJBKNNCC;
namespace System { class Object; }

#define LBCBJBKNNCC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8AC2B0)
#define LBCBJBKNNCC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8AC2F0)
#define LBCBJBKNNCC___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E8AC300)

inline static constexpr unsigned int LBCBJBKNNCC___c_TypeDefinitionIndex = 26275;

	class LBCBJBKNNCC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x25940);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LBCBJBKNNCC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBCBJBKNNCC___C_CTOR_OFFSET))(this);
		}

		::LBCBJBKNNCC* __cctor_b__18_0()
		{
			return ((::LBCBJBKNNCC*(*)(::PVOID))((::PBYTE)hIl2Cpp + LBCBJBKNNCC___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
