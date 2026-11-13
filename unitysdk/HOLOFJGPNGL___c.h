#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HOLOFJGPNGL;
namespace System { class Object; }

#define HOLOFJGPNGL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x20043820)
#define HOLOFJGPNGL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x20043850)
#define HOLOFJGPNGL___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x20043860)

inline static constexpr unsigned int HOLOFJGPNGL___c_TypeDefinitionIndex = 35037;

	class HOLOFJGPNGL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3EA20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HOLOFJGPNGL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOLOFJGPNGL___C_CTOR_OFFSET))(this);
		}

		::HOLOFJGPNGL* __cctor_b__28_0()
		{
			return ((::HOLOFJGPNGL*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOLOFJGPNGL___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
