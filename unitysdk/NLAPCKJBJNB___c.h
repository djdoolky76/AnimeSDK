#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NLAPCKJBJNB;
namespace System { class Object; }

#define NLAPCKJBJNB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB61B30)
#define NLAPCKJBJNB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB61B70)
#define NLAPCKJBJNB___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1EB61B80)

inline static constexpr unsigned int NLAPCKJBJNB___c_TypeDefinitionIndex = 25646;

	class NLAPCKJBJNB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x66830);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NLAPCKJBJNB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLAPCKJBJNB___C_CTOR_OFFSET))(this);
		}

		::NLAPCKJBJNB* __cctor_b__28_0()
		{
			return ((::NLAPCKJBJNB*(*)(::PVOID))((::PBYTE)hIl2Cpp + NLAPCKJBJNB___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
