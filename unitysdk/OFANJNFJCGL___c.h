#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OFANJNFJCGL;
namespace System { class Object; }

#define OFANJNFJCGL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F0DB090)
#define OFANJNFJCGL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F0DB0D0)
#define OFANJNFJCGL___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1F0DB0E0)

inline static constexpr unsigned int OFANJNFJCGL___c_TypeDefinitionIndex = 28552;

	class OFANJNFJCGL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x11710);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OFANJNFJCGL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFANJNFJCGL___C_CTOR_OFFSET))(this);
		}

		::OFANJNFJCGL* __cctor_b__38_0()
		{
			return ((::OFANJNFJCGL*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFANJNFJCGL___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
