#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AMHDDDHIGAM;
namespace System { class Object; }

#define AMHDDDHIGAM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x2002F670)
#define AMHDDDHIGAM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x2002F6B0)
#define AMHDDDHIGAM___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x2002F6C0)

inline static constexpr unsigned int AMHDDDHIGAM___c_TypeDefinitionIndex = 33069;

	class AMHDDDHIGAM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3A610);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AMHDDDHIGAM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMHDDDHIGAM___C_CTOR_OFFSET))(this);
		}

		::AMHDDDHIGAM* __cctor_b__28_0()
		{
			return ((::AMHDDDHIGAM*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMHDDDHIGAM___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
