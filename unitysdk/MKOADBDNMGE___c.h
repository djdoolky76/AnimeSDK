#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MKOADBDNMGE;
namespace System { class Object; }

#define MKOADBDNMGE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA30450)
#define MKOADBDNMGE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA30480)
#define MKOADBDNMGE___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1EA30490)

inline static constexpr unsigned int MKOADBDNMGE___c_TypeDefinitionIndex = 34056;

	class MKOADBDNMGE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x55550);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MKOADBDNMGE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKOADBDNMGE___C_CTOR_OFFSET))(this);
		}

		::MKOADBDNMGE* __cctor_b__33_0()
		{
			return ((::MKOADBDNMGE*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKOADBDNMGE___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
