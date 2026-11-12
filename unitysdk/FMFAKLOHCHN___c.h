#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FMFAKLOHCHN;
namespace System { class Object; }

#define FMFAKLOHCHN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F6CEDE0)
#define FMFAKLOHCHN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F6CEE20)
#define FMFAKLOHCHN___C___CCTOR_B__37_0_OFFSET UNITYSDK_OFFSET(0x1F6CEE30)

inline static constexpr unsigned int FMFAKLOHCHN___c_TypeDefinitionIndex = 26749;

	class FMFAKLOHCHN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4CE90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FMFAKLOHCHN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMFAKLOHCHN___C_CTOR_OFFSET))(this);
		}

		::FMFAKLOHCHN* __cctor_b__37_0()
		{
			return ((::FMFAKLOHCHN*(*)(::PVOID))((::PBYTE)hIl2Cpp + FMFAKLOHCHN___C___CCTOR_B__37_0_OFFSET))(this);
		}

	};
