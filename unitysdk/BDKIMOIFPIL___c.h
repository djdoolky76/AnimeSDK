#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BDKIMOIFPIL;
namespace System { class Object; }

#define BDKIMOIFPIL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FD14270)
#define BDKIMOIFPIL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FD142B0)
#define BDKIMOIFPIL___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1FD142C0)

inline static constexpr unsigned int BDKIMOIFPIL___c_TypeDefinitionIndex = 30891;

	class BDKIMOIFPIL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3E540);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BDKIMOIFPIL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDKIMOIFPIL___C_CTOR_OFFSET))(this);
		}

		::BDKIMOIFPIL* __cctor_b__28_0()
		{
			return ((::BDKIMOIFPIL*(*)(::PVOID))((::PBYTE)hIl2Cpp + BDKIMOIFPIL___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
