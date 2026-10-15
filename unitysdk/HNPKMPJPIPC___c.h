#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HNPKMPJPIPC;
namespace System { class Object; }

#define HNPKMPJPIPC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5E57D0)
#define HNPKMPJPIPC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5E5800)
#define HNPKMPJPIPC___C___CCTOR_B__53_0_OFFSET UNITYSDK_OFFSET(0x1E5E5810)

inline static constexpr unsigned int HNPKMPJPIPC___c_TypeDefinitionIndex = 31583;

	class HNPKMPJPIPC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4CCE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HNPKMPJPIPC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNPKMPJPIPC___C_CTOR_OFFSET))(this);
		}

		::HNPKMPJPIPC* __cctor_b__53_0()
		{
			return ((::HNPKMPJPIPC*(*)(::PVOID))((::PBYTE)hIl2Cpp + HNPKMPJPIPC___C___CCTOR_B__53_0_OFFSET))(this);
		}

	};
