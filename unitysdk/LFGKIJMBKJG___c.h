#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LFGKIJMBKJG;
namespace System { class Object; }

#define LFGKIJMBKJG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E90F970)
#define LFGKIJMBKJG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E90F9B0)
#define LFGKIJMBKJG___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E90F9C0)

inline static constexpr unsigned int LFGKIJMBKJG___c_TypeDefinitionIndex = 30337;

	class LFGKIJMBKJG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x32B20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LFGKIJMBKJG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFGKIJMBKJG___C_CTOR_OFFSET))(this);
		}

		::LFGKIJMBKJG* __cctor_b__28_0()
		{
			return ((::LFGKIJMBKJG*(*)(::PVOID))((::PBYTE)hIl2Cpp + LFGKIJMBKJG___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
