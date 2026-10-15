#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MCOFKOEJGGL;
namespace System { class Object; }

#define MCOFKOEJGGL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9FCFB0)
#define MCOFKOEJGGL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9FCFF0)
#define MCOFKOEJGGL___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E9FD000)

	class MCOFKOEJGGL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x48AF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MCOFKOEJGGL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCOFKOEJGGL___C_CTOR_OFFSET))(this);
		}

		::MCOFKOEJGGL* __cctor_b__28_0()
		{
			return ((::MCOFKOEJGGL*(*)(::PVOID))((::PBYTE)hIl2Cpp + MCOFKOEJGGL___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
