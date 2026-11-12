#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class INBDBFEEBAD;
namespace System { class Object; }

#define INBDBFEEBAD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F9C5070)
#define INBDBFEEBAD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F9C50B0)
#define INBDBFEEBAD___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1F9C50C0)

inline static constexpr unsigned int INBDBFEEBAD___c_TypeDefinitionIndex = 33200;

	class INBDBFEEBAD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x54D50);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + INBDBFEEBAD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INBDBFEEBAD___C_CTOR_OFFSET))(this);
		}

		::INBDBFEEBAD* __cctor_b__38_0()
		{
			return ((::INBDBFEEBAD*(*)(::PVOID))((::PBYTE)hIl2Cpp + INBDBFEEBAD___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
