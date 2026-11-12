#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FAMHHDBNNFD;
namespace System { class Object; }

#define FAMHHDBNNFD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F60F070)
#define FAMHHDBNNFD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F60F0A0)
#define FAMHHDBNNFD___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1F60F0B0)

inline static constexpr unsigned int FAMHHDBNNFD___c_TypeDefinitionIndex = 27047;

	class FAMHHDBNNFD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x559E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FAMHHDBNNFD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAMHHDBNNFD___C_CTOR_OFFSET))(this);
		}

		::FAMHHDBNNFD* __cctor_b__18_0()
		{
			return ((::FAMHHDBNNFD*(*)(::PVOID))((::PBYTE)hIl2Cpp + FAMHHDBNNFD___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
