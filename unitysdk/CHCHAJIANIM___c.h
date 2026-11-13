#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CHCHAJIANIM;
namespace System { class Object; }

#define CHCHAJIANIM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F833D80)
#define CHCHAJIANIM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F833DC0)
#define CHCHAJIANIM___C___CCTOR_B__158_0_OFFSET UNITYSDK_OFFSET(0x1F833DD0)

inline static constexpr unsigned int CHCHAJIANIM___c_TypeDefinitionIndex = 30254;

	class CHCHAJIANIM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xE110);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CHCHAJIANIM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHCHAJIANIM___C_CTOR_OFFSET))(this);
		}

		::CHCHAJIANIM* __cctor_b__158_0()
		{
			return ((::CHCHAJIANIM*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHCHAJIANIM___C___CCTOR_B__158_0_OFFSET))(this);
		}

	};
