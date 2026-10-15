#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FLAIJDHDEBI;
namespace System { class Object; }

#define FLAIJDHDEBI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3875A0)
#define FLAIJDHDEBI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3875E0)
#define FLAIJDHDEBI___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E3875F0)

inline static constexpr unsigned int FLAIJDHDEBI___c_TypeDefinitionIndex = 31488;

	class FLAIJDHDEBI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5B0C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FLAIJDHDEBI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLAIJDHDEBI___C_CTOR_OFFSET))(this);
		}

		::FLAIJDHDEBI* __cctor_b__33_0()
		{
			return ((::FLAIJDHDEBI*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLAIJDHDEBI___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
