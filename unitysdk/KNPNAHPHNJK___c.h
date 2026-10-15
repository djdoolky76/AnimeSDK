#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KNPNAHPHNJK;
namespace System { class Object; }

#define KNPNAHPHNJK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8AB1A0)
#define KNPNAHPHNJK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8AB1E0)
#define KNPNAHPHNJK___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E8AB1F0)

	class KNPNAHPHNJK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2B1B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KNPNAHPHNJK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNPNAHPHNJK___C_CTOR_OFFSET))(this);
		}

		::KNPNAHPHNJK* __cctor_b__28_0()
		{
			return ((::KNPNAHPHNJK*(*)(::PVOID))((::PBYTE)hIl2Cpp + KNPNAHPHNJK___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
