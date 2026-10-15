#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HFHGPMCHDGL;
namespace System { class Object; }

#define HFHGPMCHDGL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E56B400)
#define HFHGPMCHDGL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E56B430)
#define HFHGPMCHDGL___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E56B440)

inline static constexpr unsigned int HFHGPMCHDGL___c_TypeDefinitionIndex = 25912;

	class HFHGPMCHDGL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x35410);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HFHGPMCHDGL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFHGPMCHDGL___C_CTOR_OFFSET))(this);
		}

		::HFHGPMCHDGL* __cctor_b__28_0()
		{
			return ((::HFHGPMCHDGL*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFHGPMCHDGL___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
