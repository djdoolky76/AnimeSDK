#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EMGMPNOKJGL;
namespace System { class Object; }

#define EMGMPNOKJGL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2B3F90)
#define EMGMPNOKJGL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2B3FD0)
#define EMGMPNOKJGL___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E2B3FE0)

inline static constexpr unsigned int EMGMPNOKJGL___c_TypeDefinitionIndex = 30155;

	class EMGMPNOKJGL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x434A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EMGMPNOKJGL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMGMPNOKJGL___C_CTOR_OFFSET))(this);
		}

		::EMGMPNOKJGL* __cctor_b__38_0()
		{
			return ((::EMGMPNOKJGL*(*)(::PVOID))((::PBYTE)hIl2Cpp + EMGMPNOKJGL___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
