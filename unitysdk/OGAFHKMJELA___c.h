#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OGAFHKMJELA;
namespace System { class Object; }

#define OGAFHKMJELA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F0F3B70)
#define OGAFHKMJELA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F0F3BB0)
#define OGAFHKMJELA___C___CCTOR_B__58_0_OFFSET UNITYSDK_OFFSET(0x1F0F3BC0)

inline static constexpr unsigned int OGAFHKMJELA___c_TypeDefinitionIndex = 35737;

	class OGAFHKMJELA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x13350);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OGAFHKMJELA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGAFHKMJELA___C_CTOR_OFFSET))(this);
		}

		::OGAFHKMJELA* __cctor_b__58_0()
		{
			return ((::OGAFHKMJELA*(*)(::PVOID))((::PBYTE)hIl2Cpp + OGAFHKMJELA___C___CCTOR_B__58_0_OFFSET))(this);
		}

	};
