#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ABPNLEGLEJF;
namespace System { class Object; }

#define ABPNLEGLEJF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x20090130)
#define ABPNLEGLEJF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x20090170)
#define ABPNLEGLEJF___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x20090180)

inline static constexpr unsigned int ABPNLEGLEJF___c_TypeDefinitionIndex = 33414;

	class ABPNLEGLEJF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x378C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ABPNLEGLEJF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABPNLEGLEJF___C_CTOR_OFFSET))(this);
		}

		::ABPNLEGLEJF* __cctor_b__28_0()
		{
			return ((::ABPNLEGLEJF*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABPNLEGLEJF___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
