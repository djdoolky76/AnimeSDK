#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DIGOHHNDDCA;
namespace System { class Object; }

#define DIGOHHNDDCA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F49A180)
#define DIGOHHNDDCA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F49A1C0)
#define DIGOHHNDDCA___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1F49A1D0)

inline static constexpr unsigned int DIGOHHNDDCA___c_TypeDefinitionIndex = 34388;

	class DIGOHHNDDCA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x31CF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DIGOHHNDDCA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGOHHNDDCA___C_CTOR_OFFSET))(this);
		}

		::DIGOHHNDDCA* __cctor_b__38_0()
		{
			return ((::DIGOHHNDDCA*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGOHHNDDCA___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
