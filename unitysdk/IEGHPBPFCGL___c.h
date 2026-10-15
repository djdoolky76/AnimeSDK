#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IEGHPBPFCGL;
namespace System { class Object; }

#define IEGHPBPFCGL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E63A160)
#define IEGHPBPFCGL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E63A1A0)
#define IEGHPBPFCGL___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E63A1B0)

	class IEGHPBPFCGL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x485A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IEGHPBPFCGL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEGHPBPFCGL___C_CTOR_OFFSET))(this);
		}

		::IEGHPBPFCGL* __cctor_b__28_0()
		{
			return ((::IEGHPBPFCGL*(*)(::PVOID))((::PBYTE)hIl2Cpp + IEGHPBPFCGL___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
