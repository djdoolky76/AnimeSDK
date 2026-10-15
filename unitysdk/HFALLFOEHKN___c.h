#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HFALLFOEHKN;
namespace System { class Object; }

#define HFALLFOEHKN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E563970)
#define HFALLFOEHKN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5639A0)
#define HFALLFOEHKN___C___CCTOR_B__153_0_OFFSET UNITYSDK_OFFSET(0x1E5639B0)

inline static constexpr unsigned int HFALLFOEHKN___c_TypeDefinitionIndex = 25615;

	class HFALLFOEHKN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x33B60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HFALLFOEHKN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFALLFOEHKN___C_CTOR_OFFSET))(this);
		}

		::HFALLFOEHKN* __cctor_b__153_0()
		{
			return ((::HFALLFOEHKN*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFALLFOEHKN___C___CCTOR_B__153_0_OFFSET))(this);
		}

	};
