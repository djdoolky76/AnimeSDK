#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CILKBJMGNGL;
namespace System { class Object; }

#define CILKBJMGNGL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0D58F0)
#define CILKBJMGNGL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0D5920)
#define CILKBJMGNGL___C___CCTOR_B__53_0_OFFSET UNITYSDK_OFFSET(0x1E0D5930)

	class CILKBJMGNGL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x18790);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CILKBJMGNGL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CILKBJMGNGL___C_CTOR_OFFSET))(this);
		}

		::CILKBJMGNGL* __cctor_b__53_0()
		{
			return ((::CILKBJMGNGL*(*)(::PVOID))((::PBYTE)hIl2Cpp + CILKBJMGNGL___C___CCTOR_B__53_0_OFFSET))(this);
		}

	};
